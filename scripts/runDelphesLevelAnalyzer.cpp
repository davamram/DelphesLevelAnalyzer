#include "../include/DelphesLevelAnalyzer.h"
using namespace std;
int main(){
TFile* fInput = new TFile("data/input.root");
TTree* tInput=(TTree*) fInput->Get("Tree");
DelphesLevelAnalyzer* analyzer =new DelphesLevelAnalyzer(tInput);
analyzer->Loop();
return 0;
}
