//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri May 13 11:24:45 2022 by ROOT version 6.18/02
// from TTree Tree/Tree
// found on file: output.root
//////////////////////////////////////////////////////////

#ifndef DelphesLevelAnalyzer_h
#define DelphesLevelAnalyzer_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "TLorentzVector.h"

#include <iostream>

class DelphesLevelAnalyzer {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         weight;
   Float_t         mc_weight;
   Float_t         PV_weight;
   Int_t           mc_ttZhypAllowed;
   Int_t           catJets;
   Int_t           nJets;
   Char_t          is_2lss_TTH_SR;
   Char_t          is_3l_TTH_SR;
   Char_t          is_3l_TTZ_CR;
   Int_t           multilepton_Lepton1_Id;
   TLorentzVector  *multilepton_Lepton1_P4;
   Float_t         multilepton_Lepton1_DeltaR_Matched;
   Int_t           multilepton_Lepton1_Label_Matched;
   Int_t           multilepton_Lepton1_Id_Matched;
   TLorentzVector  *multilepton_Lepton1_P4_Matched;
   Int_t           multilepton_Lepton2_Id;
   TLorentzVector  *multilepton_Lepton2_P4;
   Float_t         multilepton_Lepton2_DeltaR_Matched;
   Int_t           multilepton_Lepton2_Label_Matched;
   Int_t           multilepton_Lepton2_Id_Matched;
   TLorentzVector  *multilepton_Lepton2_P4_Matched;
   Int_t           multilepton_Lepton3_Id;
   TLorentzVector  *multilepton_Lepton3_P4;
   Float_t         multilepton_Lepton3_DeltaR_Matched;
   Int_t           multilepton_Lepton3_Label_Matched;
   Int_t           multilepton_Lepton3_Id_Matched;
   TLorentzVector  *multilepton_Lepton3_P4_Matched;
   Int_t           multilepton_Lepton4_Id;
   TLorentzVector  *multilepton_Lepton4_P4;
   Float_t         multilepton_Lepton4_DeltaR_Matched;
   Int_t           multilepton_Lepton4_Label_Matched;
   Int_t           multilepton_Lepton4_Id_Matched;
   TLorentzVector  *multilepton_Lepton4_P4_Matched;
   Int_t           multilepton_Bjet1_Id;
   TLorentzVector  *multilepton_Bjet1_P4;
   Float_t         multilepton_Bjet1_CSV;
   Float_t         multilepton_Bjet1_JEC_Up;
   Float_t         multilepton_Bjet1_JEC_Down;
   Float_t         multilepton_Bjet1_JER_Up;
   Float_t         multilepton_Bjet1_JER_Down;
   Float_t         multilepton_Bjet1_DeltaR_Matched;
   Int_t           multilepton_Bjet1_Label_Matched;
   Int_t           multilepton_Bjet1_Id_Matched;
   TLorentzVector  *multilepton_Bjet1_P4_Matched;
   Int_t           multilepton_Bjet2_Id;
   TLorentzVector  *multilepton_Bjet2_P4;
   Float_t         multilepton_Bjet2_CSV;
   Float_t         multilepton_Bjet2_JEC_Up;
   Float_t         multilepton_Bjet2_JEC_Down;
   Float_t         multilepton_Bjet2_JER_Up;
   Float_t         multilepton_Bjet2_JER_Down;
   Float_t         multilepton_Bjet2_DeltaR_Matched;
   Int_t           multilepton_Bjet2_Label_Matched;
   Int_t           multilepton_Bjet2_Id_Matched;
   TLorentzVector  *multilepton_Bjet2_P4_Matched;
   TLorentzVector  *multilepton_W1_P4_Matched;
   TLorentzVector  *multilepton_W2_P4_Matched;
   Int_t           multilepton_JetHighestPt1_Id;
   TLorentzVector  *multilepton_JetHighestPt1_P4;
   Float_t         multilepton_JetHighestPt1_CSV;
   Float_t         multilepton_JetHighestPt1_JEC_Up;
   Float_t         multilepton_JetHighestPt1_JEC_Down;
   Float_t         multilepton_JetHighestPt1_JER_Up;
   Float_t         multilepton_JetHighestPt1_JER_Down;
   Int_t           multilepton_JetHighestPt2_Id;
   TLorentzVector  *multilepton_JetHighestPt2_P4;
   Float_t         multilepton_JetHighestPt2_CSV;
   Float_t         multilepton_JetHighestPt2_JEC_Up;
   Float_t         multilepton_JetHighestPt2_JEC_Down;
   Float_t         multilepton_JetHighestPt2_JER_Up;
   Float_t         multilepton_JetHighestPt2_JER_Down;
   Int_t           multilepton_JetHighestEta1_Id;
   TLorentzVector  *multilepton_JetHighestEta1_P4;
   Float_t         multilepton_JetHighestEta1_CSV;
   Float_t         multilepton_JetHighestEta1_JEC_Up;
   Float_t         multilepton_JetHighestEta1_JEC_Down;
   Float_t         multilepton_JetHighestEta1_JER_Up;
   Float_t         multilepton_JetHighestEta1_JER_Down;
   Int_t           multilepton_JetHighestEta2_Id;
   TLorentzVector  *multilepton_JetHighestEta2_P4;
   Float_t         multilepton_JetHighestEta2_CSV;
   Float_t         multilepton_JetHighestEta2_JEC_Up;
   Float_t         multilepton_JetHighestEta2_JEC_Down;
   Float_t         multilepton_JetHighestEta2_JER_Up;
   Float_t         multilepton_JetHighestEta2_JER_Down;
   Int_t           multilepton_JetClosestMw1_Id;
   TLorentzVector  *multilepton_JetClosestMw1_P4;
   Float_t         multilepton_JetClosestMw1_CSV;
   Float_t         multilepton_JetClosestMw1_JEC_Up;
   Float_t         multilepton_JetClosestMw1_JEC_Down;
   Float_t         multilepton_JetClosestMw1_JER_Up;
   Float_t         multilepton_JetClosestMw1_JER_Down;
   Int_t           multilepton_JetClosestMw2_Id;
   TLorentzVector  *multilepton_JetClosestMw2_P4;
   Float_t         multilepton_JetClosestMw2_CSV;
   Float_t         multilepton_JetClosestMw2_JEC_Up;
   Float_t         multilepton_JetClosestMw2_JEC_Down;
   Float_t         multilepton_JetClosestMw2_JER_Up;
   Float_t         multilepton_JetClosestMw2_JER_Down;
   Int_t           multilepton_JetLowestMjj1_Id;
   TLorentzVector  *multilepton_JetLowestMjj1_P4;
   Float_t         multilepton_JetLowestMjj1_CSV;
   Float_t         multilepton_JetLowestMjj1_JEC_Up;
   Float_t         multilepton_JetLowestMjj1_JEC_Down;
   Float_t         multilepton_JetLowestMjj1_JER_Up;
   Float_t         multilepton_JetLowestMjj1_JER_Down;
   Int_t           multilepton_JetLowestMjj2_Id;
   TLorentzVector  *multilepton_JetLowestMjj2_P4;
   Float_t         multilepton_JetLowestMjj2_CSV;
   Float_t         multilepton_JetLowestMjj2_JEC_Up;
   Float_t         multilepton_JetLowestMjj2_JEC_Down;
   Float_t         multilepton_JetLowestMjj2_JER_Up;
   Float_t         multilepton_JetLowestMjj2_JER_Down;
   Int_t           multilepton_JetHighestPt1_2ndPair_Id;
   TLorentzVector  *multilepton_JetHighestPt1_2ndPair_P4;
   Float_t         multilepton_JetHighestPt1_2ndPair_CSV;
   Float_t         multilepton_JetHighestPt1_2ndPair_JEC_Up;
   Float_t         multilepton_JetHighestPt1_2ndPair_JEC_Down;
   Float_t         multilepton_JetHighestPt1_2ndPair_JER_Up;
   Float_t         multilepton_JetHighestPt1_2ndPair_JER_Down;
   Int_t           multilepton_JetHighestPt2_2ndPair_Id;
   TLorentzVector  *multilepton_JetHighestPt2_2ndPair_P4;
   Float_t         multilepton_JetHighestPt2_2ndPair_CSV;
   Float_t         multilepton_JetHighestPt2_2ndPair_JEC_Up;
   Float_t         multilepton_JetHighestPt2_2ndPair_JEC_Down;
   Float_t         multilepton_JetHighestPt2_2ndPair_JER_Up;
   Float_t         multilepton_JetHighestPt2_2ndPair_JER_Down;
   Int_t           multilepton_JetClosestMw1_2ndPair_Id;
   TLorentzVector  *multilepton_JetClosestMw1_2ndPair_P4;
   Float_t         multilepton_JetClosestMw1_2ndPair_CSV;
   Float_t         multilepton_JetClosestMw1_2ndPair_JEC_Up;
   Float_t         multilepton_JetClosestMw1_2ndPair_JEC_Down;
   Float_t         multilepton_JetClosestMw1_2ndPair_JER_Up;
   Float_t         multilepton_JetClosestMw1_2ndPair_JER_Down;
   Int_t           multilepton_JetClosestMw2_2ndPair_Id;
   TLorentzVector  *multilepton_JetClosestMw2_2ndPair_P4;
   Float_t         multilepton_JetClosestMw2_2ndPair_CSV;
   Float_t         multilepton_JetClosestMw2_2ndPair_JEC_Up;
   Float_t         multilepton_JetClosestMw2_2ndPair_JEC_Down;
   Float_t         multilepton_JetClosestMw2_2ndPair_JER_Up;
   Float_t         multilepton_JetClosestMw2_2ndPair_JER_Down;
   Int_t           multilepton_JetLowestMjj1_2ndPair_Id;
   TLorentzVector  *multilepton_JetLowestMjj1_2ndPair_P4;
   Float_t         multilepton_JetLowestMjj1_2ndPair_CSV;
   Float_t         multilepton_JetLowestMjj1_2ndPair_JEC_Up;
   Float_t         multilepton_JetLowestMjj1_2ndPair_JEC_Down;
   Float_t         multilepton_JetLowestMjj1_2ndPair_JER_Up;
   Float_t         multilepton_JetLowestMjj1_2ndPair_JER_Down;
   Int_t           multilepton_JetLowestMjj2_2ndPair_Id;
   TLorentzVector  *multilepton_JetLowestMjj2_2ndPair_P4;
   Float_t         multilepton_JetLowestMjj2_2ndPair_CSV;
   Float_t         multilepton_JetLowestMjj2_2ndPair_JEC_Up;
   Float_t         multilepton_JetLowestMjj2_2ndPair_JEC_Down;
   Float_t         multilepton_JetLowestMjj2_2ndPair_JER_Up;
   Float_t         multilepton_JetLowestMjj2_2ndPair_JER_Down;
   Int_t           multilepton_h0_Id;
   TLorentzVector  *multilepton_h0_P4;
   Int_t           multilepton_h0_Label;
   Int_t           multilepton_t1_Id;
   TLorentzVector  *multilepton_t1_P4;
   Int_t           multilepton_t1_Label;
   Int_t           multilepton_t2_Id;
   TLorentzVector  *multilepton_t2_P4;
   Int_t           multilepton_t2_Label;
   TLorentzVector  *multilepton_mET;
   Double_t        multilepton_mETcov00;
   Double_t        multilepton_mETcov01;
   Double_t        multilepton_mETcov10;
   Double_t        multilepton_mETcov11;
   TLorentzVector  *multilepton_mET_Matched;
   Float_t         multilepton_mHT;
   TLorentzVector  *multilepton_Ptot;

   // List of branches
   TBranch        *b_weight;   //!
   TBranch        *b_mc_weight;   //!
   TBranch        *b_PV_weight;   //!
   TBranch        *b_mc_ttZhypAllowed;   //!
   TBranch        *b_catJets;   //!
   TBranch        *b_nJets;   //!
   TBranch        *b_is_2lss_TTH_SR;   //!
   TBranch        *b_is_3l_TTH_SR;   //!
   TBranch        *b_is_3l_TTZ_CR;   //!
   TBranch        *b_multilepton_Lepton1_Id;   //!
   TBranch        *b_multilepton_Lepton1_P4;   //!
   TBranch        *b_multilepton_Lepton1_DeltaR_Matched;   //!
   TBranch        *b_multilepton_Lepton1_Label_Matched;   //!
   TBranch        *b_multilepton_Lepton1_Id_Matched;   //!
   TBranch        *b_multilepton_Lepton1_P4_Matched;   //!
   TBranch        *b_multilepton_Lepton2_Id;   //!
   TBranch        *b_multilepton_Lepton2_P4;   //!
   TBranch        *b_multilepton_Lepton2_DeltaR_Matched;   //!
   TBranch        *b_multilepton_Lepton2_Label_Matched;   //!
   TBranch        *b_multilepton_Lepton2_Id_Matched;   //!
   TBranch        *b_multilepton_Lepton2_P4_Matched;   //!
   TBranch        *b_multilepton_Lepton3_Id;   //!
   TBranch        *b_multilepton_Lepton3_P4;   //!
   TBranch        *b_multilepton_Lepton3_DeltaR_Matched;   //!
   TBranch        *b_multilepton_Lepton3_Label_Matched;   //!
   TBranch        *b_multilepton_Lepton3_Id_Matched;   //!
   TBranch        *b_multilepton_Lepton3_P4_Matched;   //!
   TBranch        *b_multilepton_Lepton4_Id;   //!
   TBranch        *b_multilepton_Lepton4_P4;   //!
   TBranch        *b_multilepton_Lepton4_DeltaR_Matched;   //!
   TBranch        *b_multilepton_Lepton4_Label_Matched;   //!
   TBranch        *b_multilepton_Lepton4_Id_Matched;   //!
   TBranch        *b_multilepton_Lepton4_P4_Matched;   //!
   TBranch        *b_multilepton_Bjet1_Id;   //!
   TBranch        *b_multilepton_Bjet1_P4;   //!
   TBranch        *b_multilepton_Bjet1_CSV;   //!
   TBranch        *b_multilepton_Bjet1_JEC_Up;   //!
   TBranch        *b_multilepton_Bjet1_JEC_Down;   //!
   TBranch        *b_multilepton_Bjet1_JER_Up;   //!
   TBranch        *b_multilepton_Bjet1_JER_Down;   //!
   TBranch        *b_multilepton_Bjet1_DeltaR_Matched;   //!
   TBranch        *b_multilepton_Bjet1_Label_Matched;   //!
   TBranch        *b_multilepton_Bjet1_Id_Matched;   //!
   TBranch        *b_multilepton_Bjet1_P4_Matched;   //!
   TBranch        *b_multilepton_Bjet2_Id;   //!
   TBranch        *b_multilepton_Bjet2_P4;   //!
   TBranch        *b_multilepton_Bjet2_CSV;   //!
   TBranch        *b_multilepton_Bjet2_JEC_Up;   //!
   TBranch        *b_multilepton_Bjet2_JEC_Down;   //!
   TBranch        *b_multilepton_Bjet2_JER_Up;   //!
   TBranch        *b_multilepton_Bjet2_JER_Down;   //!
   TBranch        *b_multilepton_Bjet2_DeltaR_Matched;   //!
   TBranch        *b_multilepton_Bjet2_Label_Matched;   //!
   TBranch        *b_multilepton_Bjet2_Id_Matched;   //!
   TBranch        *b_multilepton_Bjet2_P4_Matched;   //!
   TBranch        *b_multilepton_W1_P4_Matched;   //!
   TBranch        *b_multilepton_W2_P4_Matched;   //!
   TBranch        *b_multilepton_JetHighestPt1_Id;   //!
   TBranch        *b_multilepton_JetHighestPt1_P4;   //!
   TBranch        *b_multilepton_JetHighestPt1_CSV;   //!
   TBranch        *b_multilepton_JetHighestPt1_JEC_Up;   //!
   TBranch        *b_multilepton_JetHighestPt1_JEC_Down;   //!
   TBranch        *b_multilepton_JetHighestPt1_JER_Up;   //!
   TBranch        *b_multilepton_JetHighestPt1_JER_Down;   //!
   TBranch        *b_multilepton_JetHighestPt2_Id;   //!
   TBranch        *b_multilepton_JetHighestPt2_P4;   //!
   TBranch        *b_multilepton_JetHighestPt2_CSV;   //!
   TBranch        *b_multilepton_JetHighestPt2_JEC_Up;   //!
   TBranch        *b_multilepton_JetHighestPt2_JEC_Down;   //!
   TBranch        *b_multilepton_JetHighestPt2_JER_Up;   //!
   TBranch        *b_multilepton_JetHighestPt2_JER_Down;   //!
   TBranch        *b_multilepton_JetHighestEta1_Id;   //!
   TBranch        *b_multilepton_JetHighestEta1_P4;   //!
   TBranch        *b_multilepton_JetHighestEta1_CSV;   //!
   TBranch        *b_multilepton_JetHighestEta1_JEC_Up;   //!
   TBranch        *b_multilepton_JetHighestEta1_JEC_Down;   //!
   TBranch        *b_multilepton_JetHighestEta1_JER_Up;   //!
   TBranch        *b_multilepton_JetHighestEta1_JER_Down;   //!
   TBranch        *b_multilepton_JetHighestEta2_Id;   //!
   TBranch        *b_multilepton_JetHighestEta2_P4;   //!
   TBranch        *b_multilepton_JetHighestEta2_CSV;   //!
   TBranch        *b_multilepton_JetHighestEta2_JEC_Up;   //!
   TBranch        *b_multilepton_JetHighestEta2_JEC_Down;   //!
   TBranch        *b_multilepton_JetHighestEta2_JER_Up;   //!
   TBranch        *b_multilepton_JetHighestEta2_JER_Down;   //!
   TBranch        *b_multilepton_JetClosestMw1_Id;   //!
   TBranch        *b_multilepton_JetClosestMw1_P4;   //!
   TBranch        *b_multilepton_JetClosestMw1_CSV;   //!
   TBranch        *b_multilepton_JetClosestMw1_JEC_Up;   //!
   TBranch        *b_multilepton_JetClosestMw1_JEC_Down;   //!
   TBranch        *b_multilepton_JetClosestMw1_JER_Up;   //!
   TBranch        *b_multilepton_JetClosestMw1_JER_Down;   //!
   TBranch        *b_multilepton_JetClosestMw2_Id;   //!
   TBranch        *b_multilepton_JetClosestMw2_P4;   //!
   TBranch        *b_multilepton_JetClosestMw2_CSV;   //!
   TBranch        *b_multilepton_JetClosestMw2_JEC_Up;   //!
   TBranch        *b_multilepton_JetClosestMw2_JEC_Down;   //!
   TBranch        *b_multilepton_JetClosestMw2_JER_Up;   //!
   TBranch        *b_multilepton_JetClosestMw2_JER_Down;   //!
   TBranch        *b_multilepton_JetLowestMjj1_Id;   //!
   TBranch        *b_multilepton_JetLowestMjj1_P4;   //!
   TBranch        *b_multilepton_JetLowestMjj1_CSV;   //!
   TBranch        *b_multilepton_JetLowestMjj1_JEC_Up;   //!
   TBranch        *b_multilepton_JetLowestMjj1_JEC_Down;   //!
   TBranch        *b_multilepton_JetLowestMjj1_JER_Up;   //!
   TBranch        *b_multilepton_JetLowestMjj1_JER_Down;   //!
   TBranch        *b_multilepton_JetLowestMjj2_Id;   //!
   TBranch        *b_multilepton_JetLowestMjj2_P4;   //!
   TBranch        *b_multilepton_JetLowestMjj2_CSV;   //!
   TBranch        *b_multilepton_JetLowestMjj2_JEC_Up;   //!
   TBranch        *b_multilepton_JetLowestMjj2_JEC_Down;   //!
   TBranch        *b_multilepton_JetLowestMjj2_JER_Up;   //!
   TBranch        *b_multilepton_JetLowestMjj2_JER_Down;   //!
   TBranch        *b_multilepton_JetHighestPt1_2ndPair_Id;   //!
   TBranch        *b_multilepton_JetHighestPt1_2ndPair_P4;   //!
   TBranch        *b_multilepton_JetHighestPt1_2ndPair_CSV;   //!
   TBranch        *b_multilepton_JetHighestPt1_2ndPair_JEC_Up;   //!
   TBranch        *b_multilepton_JetHighestPt1_2ndPair_JEC_Down;   //!
   TBranch        *b_multilepton_JetHighestPt1_2ndPair_JER_Up;   //!
   TBranch        *b_multilepton_JetHighestPt1_2ndPair_JER_Down;   //!
   TBranch        *b_multilepton_JetHighestPt2_2ndPair_Id;   //!
   TBranch        *b_multilepton_JetHighestPt2_2ndPair_P4;   //!
   TBranch        *b_multilepton_JetHighestPt2_2ndPair_CSV;   //!
   TBranch        *b_multilepton_JetHighestPt2_2ndPair_JEC_Up;   //!
   TBranch        *b_multilepton_JetHighestPt2_2ndPair_JEC_Down;   //!
   TBranch        *b_multilepton_JetHighestPt2_2ndPair_JER_Up;   //!
   TBranch        *b_multilepton_JetHighestPt2_2ndPair_JER_Down;   //!
   TBranch        *b_multilepton_JetClosestMw1_2ndPair_Id;   //!
   TBranch        *b_multilepton_JetClosestMw1_2ndPair_P4;   //!
   TBranch        *b_multilepton_JetClosestMw1_2ndPair_CSV;   //!
   TBranch        *b_multilepton_JetClosestMw1_2ndPair_JEC_Up;   //!
   TBranch        *b_multilepton_JetClosestMw1_2ndPair_JEC_Down;   //!
   TBranch        *b_multilepton_JetClosestMw1_2ndPair_JER_Up;   //!
   TBranch        *b_multilepton_JetClosestMw1_2ndPair_JER_Down;   //!
   TBranch        *b_multilepton_JetClosestMw2_2ndPair_Id;   //!
   TBranch        *b_multilepton_JetClosestMw2_2ndPair_P4;   //!
   TBranch        *b_multilepton_JetClosestMw2_2ndPair_CSV;   //!
   TBranch        *b_multilepton_JetClosestMw2_2ndPair_JEC_Up;   //!
   TBranch        *b_multilepton_JetClosestMw2_2ndPair_JEC_Down;   //!
   TBranch        *b_multilepton_JetClosestMw2_2ndPair_JER_Up;   //!
   TBranch        *b_multilepton_JetClosestMw2_2ndPair_JER_Down;   //!
   TBranch        *b_multilepton_JetLowestMjj1_2ndPair_Id;   //!
   TBranch        *b_multilepton_JetLowestMjj1_2ndPair_P4;   //!
   TBranch        *b_multilepton_JetLowestMjj1_2ndPair_CSV;   //!
   TBranch        *b_multilepton_JetLowestMjj1_2ndPair_JEC_Up;   //!
   TBranch        *b_multilepton_JetLowestMjj1_2ndPair_JEC_Down;   //!
   TBranch        *b_multilepton_JetLowestMjj1_2ndPair_JER_Up;   //!
   TBranch        *b_multilepton_JetLowestMjj1_2ndPair_JER_Down;   //!
   TBranch        *b_multilepton_JetLowestMjj2_2ndPair_Id;   //!
   TBranch        *b_multilepton_JetLowestMjj2_2ndPair_P4;   //!
   TBranch        *b_multilepton_JetLowestMjj2_2ndPair_CSV;   //!
   TBranch        *b_multilepton_JetLowestMjj2_2ndPair_JEC_Up;   //!
   TBranch        *b_multilepton_JetLowestMjj2_2ndPair_JEC_Down;   //!
   TBranch        *b_multilepton_JetLowestMjj2_2ndPair_JER_Up;   //!
   TBranch        *b_multilepton_JetLowestMjj2_2ndPair_JER_Down;   //!
   TBranch        *b_multilepton_h0_Id;   //!
   TBranch        *b_multilepton_h0_P4;   //!
   TBranch        *b_multilepton_h0_Label;   //!
   TBranch        *b_multilepton_t1_Id;   //!
   TBranch        *b_multilepton_t1_P4;   //!
   TBranch        *b_multilepton_t2_Id;   //!
   TBranch        *b_multilepton_t2_P4;   //!
   TBranch        *b_multilepton_mET;   //!
   TBranch        *b_multilepton_mETcov00;   //!
   TBranch        *b_multilepton_mETcov01;   //!
   TBranch        *b_multilepton_mETcov10;   //!
   TBranch        *b_multilepton_mETcov11;   //!
   TBranch        *b_multilepton_mET_Matched;   //!
   TBranch        *b_multilepton_mHT;   //!
   TBranch        *b_multilepton_Ptot;   //!

   DelphesLevelAnalyzer(TTree *tree=0);
   virtual ~DelphesLevelAnalyzer();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef DelphesLevelAnalyzer_cxx
DelphesLevelAnalyzer::DelphesLevelAnalyzer(TTree *tree) : fChain(0)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("output.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("output.root");
      }
      f->GetObject("Tree",tree);

   }
   Init(tree);
}

DelphesLevelAnalyzer::~DelphesLevelAnalyzer()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t DelphesLevelAnalyzer::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t DelphesLevelAnalyzer::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void DelphesLevelAnalyzer::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   multilepton_Lepton1_P4 = 0;
   multilepton_Lepton1_P4_Matched = 0;
   multilepton_Lepton2_P4 = 0;
   multilepton_Lepton2_P4_Matched = 0;
   multilepton_Lepton3_P4 = 0;
   multilepton_Lepton3_P4_Matched = 0;
   multilepton_Lepton4_P4 = 0;
   multilepton_Lepton4_P4_Matched = 0;
   multilepton_Bjet1_P4 = 0;
   multilepton_Bjet1_P4_Matched = 0;
   multilepton_Bjet2_P4 = 0;
   multilepton_Bjet2_P4_Matched = 0;
   multilepton_W1_P4_Matched = 0;
   multilepton_W2_P4_Matched = 0;
   multilepton_JetHighestPt1_P4 = 0;
   multilepton_JetHighestPt2_P4 = 0;
   multilepton_JetHighestEta1_P4 = 0;
   multilepton_JetHighestEta2_P4 = 0;
   multilepton_JetClosestMw1_P4 = 0;
   multilepton_JetClosestMw2_P4 = 0;
   multilepton_JetLowestMjj1_P4 = 0;
   multilepton_JetLowestMjj2_P4 = 0;
   multilepton_JetHighestPt1_2ndPair_P4 = 0;
   multilepton_JetHighestPt2_2ndPair_P4 = 0;
   multilepton_JetClosestMw1_2ndPair_P4 = 0;
   multilepton_JetClosestMw2_2ndPair_P4 = 0;
   multilepton_JetLowestMjj1_2ndPair_P4 = 0;
   multilepton_JetLowestMjj2_2ndPair_P4 = 0;
   multilepton_h0_P4 = 0;
   multilepton_t1_P4 = 0;
   multilepton_t2_P4 = 0;
   multilepton_mET = 0;
   multilepton_mET_Matched = 0;
   multilepton_Ptot = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("weight", &weight, &b_weight);
   fChain->SetBranchAddress("mc_weight", &mc_weight, &b_mc_weight);
   fChain->SetBranchAddress("PV_weight", &PV_weight, &b_PV_weight);
   fChain->SetBranchAddress("mc_ttZhypAllowed", &mc_ttZhypAllowed, &b_mc_ttZhypAllowed);
   fChain->SetBranchAddress("catJets", &catJets, &b_catJets);
   fChain->SetBranchAddress("nJets", &nJets, &b_nJets);
   fChain->SetBranchAddress("is_2lss_TTH_SR", &is_2lss_TTH_SR, &b_is_2lss_TTH_SR);
   fChain->SetBranchAddress("is_3l_TTH_SR", &is_3l_TTH_SR, &b_is_3l_TTH_SR);
   fChain->SetBranchAddress("is_3l_TTZ_CR", &is_3l_TTZ_CR, &b_is_3l_TTZ_CR);
   fChain->SetBranchAddress("multilepton_Lepton1_Id", &multilepton_Lepton1_Id, &b_multilepton_Lepton1_Id);
   fChain->SetBranchAddress("multilepton_Lepton1_P4", &multilepton_Lepton1_P4, &b_multilepton_Lepton1_P4);
   fChain->SetBranchAddress("multilepton_Lepton1_DeltaR_Matched", &multilepton_Lepton1_DeltaR_Matched, &b_multilepton_Lepton1_DeltaR_Matched);
   fChain->SetBranchAddress("multilepton_Lepton1_Label_Matched", &multilepton_Lepton1_Label_Matched, &b_multilepton_Lepton1_Label_Matched);
   fChain->SetBranchAddress("multilepton_Lepton1_Id_Matched", &multilepton_Lepton1_Id_Matched, &b_multilepton_Lepton1_Id_Matched);
   fChain->SetBranchAddress("multilepton_Lepton1_P4_Matched", &multilepton_Lepton1_P4_Matched, &b_multilepton_Lepton1_P4_Matched);
   fChain->SetBranchAddress("multilepton_Lepton2_Id", &multilepton_Lepton2_Id, &b_multilepton_Lepton2_Id);
   fChain->SetBranchAddress("multilepton_Lepton2_P4", &multilepton_Lepton2_P4, &b_multilepton_Lepton2_P4);
   fChain->SetBranchAddress("multilepton_Lepton2_DeltaR_Matched", &multilepton_Lepton2_DeltaR_Matched, &b_multilepton_Lepton2_DeltaR_Matched);
   fChain->SetBranchAddress("multilepton_Lepton2_Label_Matched", &multilepton_Lepton2_Label_Matched, &b_multilepton_Lepton2_Label_Matched);
   fChain->SetBranchAddress("multilepton_Lepton2_Id_Matched", &multilepton_Lepton2_Id_Matched, &b_multilepton_Lepton2_Id_Matched);
   fChain->SetBranchAddress("multilepton_Lepton2_P4_Matched", &multilepton_Lepton2_P4_Matched, &b_multilepton_Lepton2_P4_Matched);
   fChain->SetBranchAddress("multilepton_Lepton3_Id", &multilepton_Lepton3_Id, &b_multilepton_Lepton3_Id);
   fChain->SetBranchAddress("multilepton_Lepton3_P4", &multilepton_Lepton3_P4, &b_multilepton_Lepton3_P4);
   fChain->SetBranchAddress("multilepton_Lepton3_DeltaR_Matched", &multilepton_Lepton3_DeltaR_Matched, &b_multilepton_Lepton3_DeltaR_Matched);
   fChain->SetBranchAddress("multilepton_Lepton3_Label_Matched", &multilepton_Lepton3_Label_Matched, &b_multilepton_Lepton3_Label_Matched);
   fChain->SetBranchAddress("multilepton_Lepton3_Id_Matched", &multilepton_Lepton3_Id_Matched, &b_multilepton_Lepton3_Id_Matched);
   fChain->SetBranchAddress("multilepton_Lepton3_P4_Matched", &multilepton_Lepton3_P4_Matched, &b_multilepton_Lepton3_P4_Matched);
   fChain->SetBranchAddress("multilepton_Lepton4_Id", &multilepton_Lepton4_Id, &b_multilepton_Lepton4_Id);
   fChain->SetBranchAddress("multilepton_Lepton4_P4", &multilepton_Lepton4_P4, &b_multilepton_Lepton4_P4);
   fChain->SetBranchAddress("multilepton_Lepton4_DeltaR_Matched", &multilepton_Lepton4_DeltaR_Matched, &b_multilepton_Lepton4_DeltaR_Matched);
   fChain->SetBranchAddress("multilepton_Lepton4_Label_Matched", &multilepton_Lepton4_Label_Matched, &b_multilepton_Lepton4_Label_Matched);
   fChain->SetBranchAddress("multilepton_Lepton4_Id_Matched", &multilepton_Lepton4_Id_Matched, &b_multilepton_Lepton4_Id_Matched);
   fChain->SetBranchAddress("multilepton_Lepton4_P4_Matched", &multilepton_Lepton4_P4_Matched, &b_multilepton_Lepton4_P4_Matched);
   fChain->SetBranchAddress("multilepton_Bjet1_Id", &multilepton_Bjet1_Id, &b_multilepton_Bjet1_Id);
   fChain->SetBranchAddress("multilepton_Bjet1_P4", &multilepton_Bjet1_P4, &b_multilepton_Bjet1_P4);
   fChain->SetBranchAddress("multilepton_Bjet1_CSV", &multilepton_Bjet1_CSV, &b_multilepton_Bjet1_CSV);
   fChain->SetBranchAddress("multilepton_Bjet1_JEC_Up", &multilepton_Bjet1_JEC_Up, &b_multilepton_Bjet1_JEC_Up);
   fChain->SetBranchAddress("multilepton_Bjet1_JEC_Down", &multilepton_Bjet1_JEC_Down, &b_multilepton_Bjet1_JEC_Down);
   fChain->SetBranchAddress("multilepton_Bjet1_JER_Up", &multilepton_Bjet1_JER_Up, &b_multilepton_Bjet1_JER_Up);
   fChain->SetBranchAddress("multilepton_Bjet1_JER_Down", &multilepton_Bjet1_JER_Down, &b_multilepton_Bjet1_JER_Down);
   fChain->SetBranchAddress("multilepton_Bjet1_DeltaR_Matched", &multilepton_Bjet1_DeltaR_Matched, &b_multilepton_Bjet1_DeltaR_Matched);
   fChain->SetBranchAddress("multilepton_Bjet1_Label_Matched", &multilepton_Bjet1_Label_Matched, &b_multilepton_Bjet1_Label_Matched);
   fChain->SetBranchAddress("multilepton_Bjet1_Id_Matched", &multilepton_Bjet1_Id_Matched, &b_multilepton_Bjet1_Id_Matched);
   fChain->SetBranchAddress("multilepton_Bjet1_P4_Matched", &multilepton_Bjet1_P4_Matched, &b_multilepton_Bjet1_P4_Matched);
   fChain->SetBranchAddress("multilepton_Bjet2_Id", &multilepton_Bjet2_Id, &b_multilepton_Bjet2_Id);
   fChain->SetBranchAddress("multilepton_Bjet2_P4", &multilepton_Bjet2_P4, &b_multilepton_Bjet2_P4);
   fChain->SetBranchAddress("multilepton_Bjet2_CSV", &multilepton_Bjet2_CSV, &b_multilepton_Bjet2_CSV);
   fChain->SetBranchAddress("multilepton_Bjet2_JEC_Up", &multilepton_Bjet2_JEC_Up, &b_multilepton_Bjet2_JEC_Up);
   fChain->SetBranchAddress("multilepton_Bjet2_JEC_Down", &multilepton_Bjet2_JEC_Down, &b_multilepton_Bjet2_JEC_Down);
   fChain->SetBranchAddress("multilepton_Bjet2_JER_Up", &multilepton_Bjet2_JER_Up, &b_multilepton_Bjet2_JER_Up);
   fChain->SetBranchAddress("multilepton_Bjet2_JER_Down", &multilepton_Bjet2_JER_Down, &b_multilepton_Bjet2_JER_Down);
   fChain->SetBranchAddress("multilepton_Bjet2_DeltaR_Matched", &multilepton_Bjet2_DeltaR_Matched, &b_multilepton_Bjet2_DeltaR_Matched);
   fChain->SetBranchAddress("multilepton_Bjet2_Label_Matched", &multilepton_Bjet2_Label_Matched, &b_multilepton_Bjet2_Label_Matched);
   fChain->SetBranchAddress("multilepton_Bjet2_Id_Matched", &multilepton_Bjet2_Id_Matched, &b_multilepton_Bjet2_Id_Matched);
   fChain->SetBranchAddress("multilepton_Bjet2_P4_Matched", &multilepton_Bjet2_P4_Matched, &b_multilepton_Bjet2_P4_Matched);
   fChain->SetBranchAddress("multilepton_W1_P4_Matched", &multilepton_W1_P4_Matched, &b_multilepton_W1_P4_Matched);
   fChain->SetBranchAddress("multilepton_W2_P4_Matched", &multilepton_W2_P4_Matched, &b_multilepton_W2_P4_Matched);
   fChain->SetBranchAddress("multilepton_JetHighestPt1_Id", &multilepton_JetHighestPt1_Id, &b_multilepton_JetHighestPt1_Id);
   fChain->SetBranchAddress("multilepton_JetHighestPt1_P4", &multilepton_JetHighestPt1_P4, &b_multilepton_JetHighestPt1_P4);
   fChain->SetBranchAddress("multilepton_JetHighestPt1_CSV", &multilepton_JetHighestPt1_CSV, &b_multilepton_JetHighestPt1_CSV);
   fChain->SetBranchAddress("multilepton_JetHighestPt1_JEC_Up", &multilepton_JetHighestPt1_JEC_Up, &b_multilepton_JetHighestPt1_JEC_Up);
   fChain->SetBranchAddress("multilepton_JetHighestPt1_JEC_Down", &multilepton_JetHighestPt1_JEC_Down, &b_multilepton_JetHighestPt1_JEC_Down);
   fChain->SetBranchAddress("multilepton_JetHighestPt1_JER_Up", &multilepton_JetHighestPt1_JER_Up, &b_multilepton_JetHighestPt1_JER_Up);
   fChain->SetBranchAddress("multilepton_JetHighestPt1_JER_Down", &multilepton_JetHighestPt1_JER_Down, &b_multilepton_JetHighestPt1_JER_Down);
   fChain->SetBranchAddress("multilepton_JetHighestPt2_Id", &multilepton_JetHighestPt2_Id, &b_multilepton_JetHighestPt2_Id);
   fChain->SetBranchAddress("multilepton_JetHighestPt2_P4", &multilepton_JetHighestPt2_P4, &b_multilepton_JetHighestPt2_P4);
   fChain->SetBranchAddress("multilepton_JetHighestPt2_CSV", &multilepton_JetHighestPt2_CSV, &b_multilepton_JetHighestPt2_CSV);
   fChain->SetBranchAddress("multilepton_JetHighestPt2_JEC_Up", &multilepton_JetHighestPt2_JEC_Up, &b_multilepton_JetHighestPt2_JEC_Up);
   fChain->SetBranchAddress("multilepton_JetHighestPt2_JEC_Down", &multilepton_JetHighestPt2_JEC_Down, &b_multilepton_JetHighestPt2_JEC_Down);
   fChain->SetBranchAddress("multilepton_JetHighestPt2_JER_Up", &multilepton_JetHighestPt2_JER_Up, &b_multilepton_JetHighestPt2_JER_Up);
   fChain->SetBranchAddress("multilepton_JetHighestPt2_JER_Down", &multilepton_JetHighestPt2_JER_Down, &b_multilepton_JetHighestPt2_JER_Down);
   fChain->SetBranchAddress("multilepton_JetHighestEta1_Id", &multilepton_JetHighestEta1_Id, &b_multilepton_JetHighestEta1_Id);
   fChain->SetBranchAddress("multilepton_JetHighestEta1_P4", &multilepton_JetHighestEta1_P4, &b_multilepton_JetHighestEta1_P4);
   fChain->SetBranchAddress("multilepton_JetHighestEta1_CSV", &multilepton_JetHighestEta1_CSV, &b_multilepton_JetHighestEta1_CSV);
   fChain->SetBranchAddress("multilepton_JetHighestEta1_JEC_Up", &multilepton_JetHighestEta1_JEC_Up, &b_multilepton_JetHighestEta1_JEC_Up);
   fChain->SetBranchAddress("multilepton_JetHighestEta1_JEC_Down", &multilepton_JetHighestEta1_JEC_Down, &b_multilepton_JetHighestEta1_JEC_Down);
   fChain->SetBranchAddress("multilepton_JetHighestEta1_JER_Up", &multilepton_JetHighestEta1_JER_Up, &b_multilepton_JetHighestEta1_JER_Up);
   fChain->SetBranchAddress("multilepton_JetHighestEta1_JER_Down", &multilepton_JetHighestEta1_JER_Down, &b_multilepton_JetHighestEta1_JER_Down);
   fChain->SetBranchAddress("multilepton_JetHighestEta2_Id", &multilepton_JetHighestEta2_Id, &b_multilepton_JetHighestEta2_Id);
   fChain->SetBranchAddress("multilepton_JetHighestEta2_P4", &multilepton_JetHighestEta2_P4, &b_multilepton_JetHighestEta2_P4);
   fChain->SetBranchAddress("multilepton_JetHighestEta2_CSV", &multilepton_JetHighestEta2_CSV, &b_multilepton_JetHighestEta2_CSV);
   fChain->SetBranchAddress("multilepton_JetHighestEta2_JEC_Up", &multilepton_JetHighestEta2_JEC_Up, &b_multilepton_JetHighestEta2_JEC_Up);
   fChain->SetBranchAddress("multilepton_JetHighestEta2_JEC_Down", &multilepton_JetHighestEta2_JEC_Down, &b_multilepton_JetHighestEta2_JEC_Down);
   fChain->SetBranchAddress("multilepton_JetHighestEta2_JER_Up", &multilepton_JetHighestEta2_JER_Up, &b_multilepton_JetHighestEta2_JER_Up);
   fChain->SetBranchAddress("multilepton_JetHighestEta2_JER_Down", &multilepton_JetHighestEta2_JER_Down, &b_multilepton_JetHighestEta2_JER_Down);
   fChain->SetBranchAddress("multilepton_JetClosestMw1_Id", &multilepton_JetClosestMw1_Id, &b_multilepton_JetClosestMw1_Id);
   fChain->SetBranchAddress("multilepton_JetClosestMw1_P4", &multilepton_JetClosestMw1_P4, &b_multilepton_JetClosestMw1_P4);
   fChain->SetBranchAddress("multilepton_JetClosestMw1_CSV", &multilepton_JetClosestMw1_CSV, &b_multilepton_JetClosestMw1_CSV);
   fChain->SetBranchAddress("multilepton_JetClosestMw1_JEC_Up", &multilepton_JetClosestMw1_JEC_Up, &b_multilepton_JetClosestMw1_JEC_Up);
   fChain->SetBranchAddress("multilepton_JetClosestMw1_JEC_Down", &multilepton_JetClosestMw1_JEC_Down, &b_multilepton_JetClosestMw1_JEC_Down);
   fChain->SetBranchAddress("multilepton_JetClosestMw1_JER_Up", &multilepton_JetClosestMw1_JER_Up, &b_multilepton_JetClosestMw1_JER_Up);
   fChain->SetBranchAddress("multilepton_JetClosestMw1_JER_Down", &multilepton_JetClosestMw1_JER_Down, &b_multilepton_JetClosestMw1_JER_Down);
   fChain->SetBranchAddress("multilepton_JetClosestMw2_Id", &multilepton_JetClosestMw2_Id, &b_multilepton_JetClosestMw2_Id);
   fChain->SetBranchAddress("multilepton_JetClosestMw2_P4", &multilepton_JetClosestMw2_P4, &b_multilepton_JetClosestMw2_P4);
   fChain->SetBranchAddress("multilepton_JetClosestMw2_CSV", &multilepton_JetClosestMw2_CSV, &b_multilepton_JetClosestMw2_CSV);
   fChain->SetBranchAddress("multilepton_JetClosestMw2_JEC_Up", &multilepton_JetClosestMw2_JEC_Up, &b_multilepton_JetClosestMw2_JEC_Up);
   fChain->SetBranchAddress("multilepton_JetClosestMw2_JEC_Down", &multilepton_JetClosestMw2_JEC_Down, &b_multilepton_JetClosestMw2_JEC_Down);
   fChain->SetBranchAddress("multilepton_JetClosestMw2_JER_Up", &multilepton_JetClosestMw2_JER_Up, &b_multilepton_JetClosestMw2_JER_Up);
   fChain->SetBranchAddress("multilepton_JetClosestMw2_JER_Down", &multilepton_JetClosestMw2_JER_Down, &b_multilepton_JetClosestMw2_JER_Down);
   fChain->SetBranchAddress("multilepton_JetLowestMjj1_Id", &multilepton_JetLowestMjj1_Id, &b_multilepton_JetLowestMjj1_Id);
   fChain->SetBranchAddress("multilepton_JetLowestMjj1_P4", &multilepton_JetLowestMjj1_P4, &b_multilepton_JetLowestMjj1_P4);
   fChain->SetBranchAddress("multilepton_JetLowestMjj1_CSV", &multilepton_JetLowestMjj1_CSV, &b_multilepton_JetLowestMjj1_CSV);
   fChain->SetBranchAddress("multilepton_JetLowestMjj1_JEC_Up", &multilepton_JetLowestMjj1_JEC_Up, &b_multilepton_JetLowestMjj1_JEC_Up);
   fChain->SetBranchAddress("multilepton_JetLowestMjj1_JEC_Down", &multilepton_JetLowestMjj1_JEC_Down, &b_multilepton_JetLowestMjj1_JEC_Down);
   fChain->SetBranchAddress("multilepton_JetLowestMjj1_JER_Up", &multilepton_JetLowestMjj1_JER_Up, &b_multilepton_JetLowestMjj1_JER_Up);
   fChain->SetBranchAddress("multilepton_JetLowestMjj1_JER_Down", &multilepton_JetLowestMjj1_JER_Down, &b_multilepton_JetLowestMjj1_JER_Down);
   fChain->SetBranchAddress("multilepton_JetLowestMjj2_Id", &multilepton_JetLowestMjj2_Id, &b_multilepton_JetLowestMjj2_Id);
   fChain->SetBranchAddress("multilepton_JetLowestMjj2_P4", &multilepton_JetLowestMjj2_P4, &b_multilepton_JetLowestMjj2_P4);
   fChain->SetBranchAddress("multilepton_JetLowestMjj2_CSV", &multilepton_JetLowestMjj2_CSV, &b_multilepton_JetLowestMjj2_CSV);
   fChain->SetBranchAddress("multilepton_JetLowestMjj2_JEC_Up", &multilepton_JetLowestMjj2_JEC_Up, &b_multilepton_JetLowestMjj2_JEC_Up);
   fChain->SetBranchAddress("multilepton_JetLowestMjj2_JEC_Down", &multilepton_JetLowestMjj2_JEC_Down, &b_multilepton_JetLowestMjj2_JEC_Down);
   fChain->SetBranchAddress("multilepton_JetLowestMjj2_JER_Up", &multilepton_JetLowestMjj2_JER_Up, &b_multilepton_JetLowestMjj2_JER_Up);
   fChain->SetBranchAddress("multilepton_JetLowestMjj2_JER_Down", &multilepton_JetLowestMjj2_JER_Down, &b_multilepton_JetLowestMjj2_JER_Down);
   fChain->SetBranchAddress("multilepton_JetHighestPt1_2ndPair_Id", &multilepton_JetHighestPt1_2ndPair_Id, &b_multilepton_JetHighestPt1_2ndPair_Id);
   fChain->SetBranchAddress("multilepton_JetHighestPt1_2ndPair_P4", &multilepton_JetHighestPt1_2ndPair_P4, &b_multilepton_JetHighestPt1_2ndPair_P4);
   fChain->SetBranchAddress("multilepton_JetHighestPt1_2ndPair_CSV", &multilepton_JetHighestPt1_2ndPair_CSV, &b_multilepton_JetHighestPt1_2ndPair_CSV);
   fChain->SetBranchAddress("multilepton_JetHighestPt1_2ndPair_JEC_Up", &multilepton_JetHighestPt1_2ndPair_JEC_Up, &b_multilepton_JetHighestPt1_2ndPair_JEC_Up);
   fChain->SetBranchAddress("multilepton_JetHighestPt1_2ndPair_JEC_Down", &multilepton_JetHighestPt1_2ndPair_JEC_Down, &b_multilepton_JetHighestPt1_2ndPair_JEC_Down);
   fChain->SetBranchAddress("multilepton_JetHighestPt1_2ndPair_JER_Up", &multilepton_JetHighestPt1_2ndPair_JER_Up, &b_multilepton_JetHighestPt1_2ndPair_JER_Up);
   fChain->SetBranchAddress("multilepton_JetHighestPt1_2ndPair_JER_Down", &multilepton_JetHighestPt1_2ndPair_JER_Down, &b_multilepton_JetHighestPt1_2ndPair_JER_Down);
   fChain->SetBranchAddress("multilepton_JetHighestPt2_2ndPair_Id", &multilepton_JetHighestPt2_2ndPair_Id, &b_multilepton_JetHighestPt2_2ndPair_Id);
   fChain->SetBranchAddress("multilepton_JetHighestPt2_2ndPair_P4", &multilepton_JetHighestPt2_2ndPair_P4, &b_multilepton_JetHighestPt2_2ndPair_P4);
   fChain->SetBranchAddress("multilepton_JetHighestPt2_2ndPair_CSV", &multilepton_JetHighestPt2_2ndPair_CSV, &b_multilepton_JetHighestPt2_2ndPair_CSV);
   fChain->SetBranchAddress("multilepton_JetHighestPt2_2ndPair_JEC_Up", &multilepton_JetHighestPt2_2ndPair_JEC_Up, &b_multilepton_JetHighestPt2_2ndPair_JEC_Up);
   fChain->SetBranchAddress("multilepton_JetHighestPt2_2ndPair_JEC_Down", &multilepton_JetHighestPt2_2ndPair_JEC_Down, &b_multilepton_JetHighestPt2_2ndPair_JEC_Down);
   fChain->SetBranchAddress("multilepton_JetHighestPt2_2ndPair_JER_Up", &multilepton_JetHighestPt2_2ndPair_JER_Up, &b_multilepton_JetHighestPt2_2ndPair_JER_Up);
   fChain->SetBranchAddress("multilepton_JetHighestPt2_2ndPair_JER_Down", &multilepton_JetHighestPt2_2ndPair_JER_Down, &b_multilepton_JetHighestPt2_2ndPair_JER_Down);
   fChain->SetBranchAddress("multilepton_JetClosestMw1_2ndPair_Id", &multilepton_JetClosestMw1_2ndPair_Id, &b_multilepton_JetClosestMw1_2ndPair_Id);
   fChain->SetBranchAddress("multilepton_JetClosestMw1_2ndPair_P4", &multilepton_JetClosestMw1_2ndPair_P4, &b_multilepton_JetClosestMw1_2ndPair_P4);
   fChain->SetBranchAddress("multilepton_JetClosestMw1_2ndPair_CSV", &multilepton_JetClosestMw1_2ndPair_CSV, &b_multilepton_JetClosestMw1_2ndPair_CSV);
   fChain->SetBranchAddress("multilepton_JetClosestMw1_2ndPair_JEC_Up", &multilepton_JetClosestMw1_2ndPair_JEC_Up, &b_multilepton_JetClosestMw1_2ndPair_JEC_Up);
   fChain->SetBranchAddress("multilepton_JetClosestMw1_2ndPair_JEC_Down", &multilepton_JetClosestMw1_2ndPair_JEC_Down, &b_multilepton_JetClosestMw1_2ndPair_JEC_Down);
   fChain->SetBranchAddress("multilepton_JetClosestMw1_2ndPair_JER_Up", &multilepton_JetClosestMw1_2ndPair_JER_Up, &b_multilepton_JetClosestMw1_2ndPair_JER_Up);
   fChain->SetBranchAddress("multilepton_JetClosestMw1_2ndPair_JER_Down", &multilepton_JetClosestMw1_2ndPair_JER_Down, &b_multilepton_JetClosestMw1_2ndPair_JER_Down);
   fChain->SetBranchAddress("multilepton_JetClosestMw2_2ndPair_Id", &multilepton_JetClosestMw2_2ndPair_Id, &b_multilepton_JetClosestMw2_2ndPair_Id);
   fChain->SetBranchAddress("multilepton_JetClosestMw2_2ndPair_P4", &multilepton_JetClosestMw2_2ndPair_P4, &b_multilepton_JetClosestMw2_2ndPair_P4);
   fChain->SetBranchAddress("multilepton_JetClosestMw2_2ndPair_CSV", &multilepton_JetClosestMw2_2ndPair_CSV, &b_multilepton_JetClosestMw2_2ndPair_CSV);
   fChain->SetBranchAddress("multilepton_JetClosestMw2_2ndPair_JEC_Up", &multilepton_JetClosestMw2_2ndPair_JEC_Up, &b_multilepton_JetClosestMw2_2ndPair_JEC_Up);
   fChain->SetBranchAddress("multilepton_JetClosestMw2_2ndPair_JEC_Down", &multilepton_JetClosestMw2_2ndPair_JEC_Down, &b_multilepton_JetClosestMw2_2ndPair_JEC_Down);
   fChain->SetBranchAddress("multilepton_JetClosestMw2_2ndPair_JER_Up", &multilepton_JetClosestMw2_2ndPair_JER_Up, &b_multilepton_JetClosestMw2_2ndPair_JER_Up);
   fChain->SetBranchAddress("multilepton_JetClosestMw2_2ndPair_JER_Down", &multilepton_JetClosestMw2_2ndPair_JER_Down, &b_multilepton_JetClosestMw2_2ndPair_JER_Down);
   fChain->SetBranchAddress("multilepton_JetLowestMjj1_2ndPair_Id", &multilepton_JetLowestMjj1_2ndPair_Id, &b_multilepton_JetLowestMjj1_2ndPair_Id);
   fChain->SetBranchAddress("multilepton_JetLowestMjj1_2ndPair_P4", &multilepton_JetLowestMjj1_2ndPair_P4, &b_multilepton_JetLowestMjj1_2ndPair_P4);
   fChain->SetBranchAddress("multilepton_JetLowestMjj1_2ndPair_CSV", &multilepton_JetLowestMjj1_2ndPair_CSV, &b_multilepton_JetLowestMjj1_2ndPair_CSV);
   fChain->SetBranchAddress("multilepton_JetLowestMjj1_2ndPair_JEC_Up", &multilepton_JetLowestMjj1_2ndPair_JEC_Up, &b_multilepton_JetLowestMjj1_2ndPair_JEC_Up);
   fChain->SetBranchAddress("multilepton_JetLowestMjj1_2ndPair_JEC_Down", &multilepton_JetLowestMjj1_2ndPair_JEC_Down, &b_multilepton_JetLowestMjj1_2ndPair_JEC_Down);
   fChain->SetBranchAddress("multilepton_JetLowestMjj1_2ndPair_JER_Up", &multilepton_JetLowestMjj1_2ndPair_JER_Up, &b_multilepton_JetLowestMjj1_2ndPair_JER_Up);
   fChain->SetBranchAddress("multilepton_JetLowestMjj1_2ndPair_JER_Down", &multilepton_JetLowestMjj1_2ndPair_JER_Down, &b_multilepton_JetLowestMjj1_2ndPair_JER_Down);
   fChain->SetBranchAddress("multilepton_JetLowestMjj2_2ndPair_Id", &multilepton_JetLowestMjj2_2ndPair_Id, &b_multilepton_JetLowestMjj2_2ndPair_Id);
   fChain->SetBranchAddress("multilepton_JetLowestMjj2_2ndPair_P4", &multilepton_JetLowestMjj2_2ndPair_P4, &b_multilepton_JetLowestMjj2_2ndPair_P4);
   fChain->SetBranchAddress("multilepton_JetLowestMjj2_2ndPair_CSV", &multilepton_JetLowestMjj2_2ndPair_CSV, &b_multilepton_JetLowestMjj2_2ndPair_CSV);
   fChain->SetBranchAddress("multilepton_JetLowestMjj2_2ndPair_JEC_Up", &multilepton_JetLowestMjj2_2ndPair_JEC_Up, &b_multilepton_JetLowestMjj2_2ndPair_JEC_Up);
   fChain->SetBranchAddress("multilepton_JetLowestMjj2_2ndPair_JEC_Down", &multilepton_JetLowestMjj2_2ndPair_JEC_Down, &b_multilepton_JetLowestMjj2_2ndPair_JEC_Down);
   fChain->SetBranchAddress("multilepton_JetLowestMjj2_2ndPair_JER_Up", &multilepton_JetLowestMjj2_2ndPair_JER_Up, &b_multilepton_JetLowestMjj2_2ndPair_JER_Up);
   fChain->SetBranchAddress("multilepton_JetLowestMjj2_2ndPair_JER_Down", &multilepton_JetLowestMjj2_2ndPair_JER_Down, &b_multilepton_JetLowestMjj2_2ndPair_JER_Down);
   fChain->SetBranchAddress("multilepton_h0_Id", &multilepton_h0_Id, &b_multilepton_h0_Id);
   fChain->SetBranchAddress("multilepton_h0_P4", &multilepton_h0_P4, &b_multilepton_h0_P4);
   fChain->SetBranchAddress("multilepton_h0_Label", &multilepton_h0_Label, &b_multilepton_h0_Label);
   fChain->SetBranchAddress("multilepton_t1_Id", &multilepton_t1_Id, &b_multilepton_t1_Id);
   fChain->SetBranchAddress("multilepton_t1_P4", &multilepton_t1_P4, &b_multilepton_t1_P4);
   fChain->SetBranchAddress("multilepton_t1_Label", &multilepton_t1_Label, &b_multilepton_h0_Label);
   fChain->SetBranchAddress("multilepton_t2_Id", &multilepton_t2_Id, &b_multilepton_t2_Id);
   fChain->SetBranchAddress("multilepton_t2_P4", &multilepton_t2_P4, &b_multilepton_t2_P4);
   fChain->SetBranchAddress("multilepton_t2_Label", &multilepton_t2_Label, &b_multilepton_h0_Label);
   fChain->SetBranchAddress("multilepton_mET", &multilepton_mET, &b_multilepton_mET);
   fChain->SetBranchAddress("multilepton_mETcov00", &multilepton_mETcov00, &b_multilepton_mETcov00);
   fChain->SetBranchAddress("multilepton_mETcov01", &multilepton_mETcov01, &b_multilepton_mETcov01);
   fChain->SetBranchAddress("multilepton_mETcov10", &multilepton_mETcov10, &b_multilepton_mETcov10);
   fChain->SetBranchAddress("multilepton_mETcov11", &multilepton_mETcov11, &b_multilepton_mETcov11);
   fChain->SetBranchAddress("multilepton_mET_Matched", &multilepton_mET_Matched, &b_multilepton_mET_Matched);
   fChain->SetBranchAddress("multilepton_mHT", &multilepton_mHT, &b_multilepton_mHT);
   fChain->SetBranchAddress("multilepton_Ptot", &multilepton_Ptot, &b_multilepton_Ptot);
   Notify();
}

Bool_t DelphesLevelAnalyzer::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void DelphesLevelAnalyzer::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t DelphesLevelAnalyzer::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef DelphesLevelAnalyzer_cxx
