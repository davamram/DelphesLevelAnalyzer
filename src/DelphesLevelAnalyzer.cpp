#define DelphesLevelAnalyzer_cxx
#include "../include/DelphesLevelAnalyzer.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <algorithm>

using namespace std;

bool compare(pair<TLorentzVector*,int> a, pair<TLorentzVector*,int> b) {
  return a.first->Pt()>b.first->Pt();
}

void DelphesLevelAnalyzer::Loop()
{
//   In a ROOT session, you can do:
//      root> .L DelphesLevelAnalyzer.C
//      root> DelphesLevelAnalyzer t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//
//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

//#######################################
//#        Part 0 : Declaration         #
//#######################################

  vector<pair <TLorentzVector*, int>> Lepton;
  vector<pair <TLorentzVector*, int>> Electron;
  vector<pair <TLorentzVector*, int>> Muon;
  vector<pair <TLorentzVector*, int>> SelectedMuon;
  vector<pair <TLorentzVector*, int>> SelectedElectron;
  pair <TLorentzVector*, int> lepton1= make_pair(multilepton_Lepton1_P4, multilepton_Lepton1_Id);
  pair <TLorentzVector*, int> lepton2= make_pair(multilepton_Lepton2_P4, multilepton_Lepton2_Id);
  pair <TLorentzVector*, int> lepton3= make_pair(multilepton_Lepton3_P4, multilepton_Lepton3_Id);
  pair <TLorentzVector*, int> lepton4= make_pair(multilepton_Lepton4_P4, multilepton_Lepton4_Id);
  pair <TLorentzVector*, int> lepton1pt, lepton2pt, lepton3pt, lepton4pt, lepton1DeltaR, lepton2DeltaR, lepton3DeltaR, lepton4DeltaR;

  //Tree level variables
  float ptMuon, ptElectron, ptM1, ptM2;
  float deltaRLeptonPt, deltaRLeptonMin,deltaRLeptonClosest;
  float invMassPtZ, invMassDeltaRZ;

  bool filled;


   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   //#################################
   //#     Part 1 : Selection/Fill   #
   //#################################
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      Lepton.clear();
      Electron.clear();
      Muon.clear();
      SelectedMuon.clear();
      SelectedElectron.clear();
      lepton1= make_pair(multilepton_Lepton1_P4, multilepton_Lepton1_Id);
      lepton2= make_pair(multilepton_Lepton2_P4, multilepton_Lepton2_Id);
      lepton3= make_pair(multilepton_Lepton3_P4, multilepton_Lepton3_Id);
      lepton4= make_pair(multilepton_Lepton4_P4, multilepton_Lepton4_Id);



      //Selection highest pt couple
      //Z and W are hypothesis, it's simpler to write Z than "higherptcouple"
      ptMuon, ptElectron, ptM1, ptM2 = -1;
      Lepton.push_back(lepton1); Lepton.push_back(lepton2); Lepton.push_back(lepton3); Lepton.push_back(lepton4);

      for (int i=0; i<Lepton.size(); i++){
        if (abs(Lepton[i].second)==13) Muon.push_back(Lepton[i]);
        if (abs(Lepton[i].second)==11) Electron.push_back(Lepton[i]);
      }

      //Sort with pt
      sort(Muon.begin(),Muon.end(),compare);
      sort(Electron.begin(),Electron.end(),compare);

      //Select couple part-antipart
      bool emptyMuon=true;
      bool emptyAntiMuon=true;
      bool emptyElectron=true;
      bool emptyAntiElectron=true;
      if (Muon.size()>1){
        for(int m=0; m<Muon.size();m++){
          if (Muon[m].second==13 && emptyMuon){
            SelectedMuon.push_back(Muon[m]);
            ptM1=Muon[m].first->Pt();
            emptyMuon=false;
          }
          if (Muon[m].second==-13 && emptyAntiMuon){
            SelectedMuon.push_back(Muon[m]);
            ptM2=Muon[m].first->Pt();
            emptyAntiMuon=false;
          }
          if (!(emptyMuon || emptyAntiMuon)) break;
        }
        ptMuon=ptM1+ptM2;
      }

      if (Electron.size()>1){

        for(int m=0; m<Electron.size();m++){
          if (Electron[m].second==11 && emptyElectron){

            SelectedElectron.push_back(Electron[m]);
            ptM1=Electron[m].first->Pt();
            emptyElectron=false;
          }
          if (Electron[m].second==-11 && emptyAntiElectron){
            SelectedElectron.push_back(Electron[m]);
            ptM2=Electron[m].first->Pt();
            emptyAntiElectron=false;
          }
          if (!(emptyElectron || emptyAntiElectron)) break;
        }
        ptElectron=ptM1+ptM2;
      }

      if(ptMuon>ptElectron){

        lepton1pt=SelectedMuon[0];

        lepton2pt=SelectedMuon[1];

      }
      else{

        lepton1pt=SelectedElectron[0];
        lepton2pt=SelectedElectron[1];
      }

      filled=false;
      for (int i=0; i<Lepton.size(); i++){
        if(Lepton[i]==lepton1pt || Lepton[i]==lepton2pt) continue;
        if (filled) lepton4pt=Lepton[i];
        if (!filled){
          lepton3pt=Lepton[i];
          filled=true;
        }

      }


      //Selection deltaR-closest lepton
      deltaRLeptonClosest=10;
      for (int i=0; i<Lepton.size(); i++){
        for(int j=i; j<Lepton.size();j++){
          if(deltaRLeptonClosest<Lepton[i].first->DeltaR(*Lepton[j].first)){
            deltaRLeptonClosest=Lepton[i].first->DeltaR(*Lepton[j].first);
            lepton1DeltaR=Lepton[i];
            lepton2DeltaR=Lepton[j];
          }
        }
      }
      filled=false;
      for (int i=0; i<Lepton.size();i++){
        if(Lepton[i]==lepton1DeltaR || Lepton[i]==lepton2DeltaR) continue;
        if (filled) lepton4DeltaR=Lepton[i];
        if (!filled){
          lepton3DeltaR=Lepton[i];
          filled=true;
        }
      }


      //####################################
      //#         Part 2: Analyze          #
      //####################################

      //DeltaR btw "Z" lepton
      deltaRLeptonPt=lepton1pt.first->DeltaR(*lepton2pt.first);
      //invariant mass "Z"
      invMassPtZ=(*lepton1pt.first+*lepton2pt.first).M();
      invMassPtZ=(*lepton1DeltaR.first+*lepton2DeltaR.first);



   }

}
