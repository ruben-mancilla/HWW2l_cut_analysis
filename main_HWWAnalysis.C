//////////////////////////////////////////////////////////////////////////////////////////
// We create a Tchain to be used in the physical analysis of H-> WW-> lvlv//
#include "TROOT.h"
#include "TChain.h"
#include "TFile.h"
#include "TProof.h"
#include "TString.h"

TChain *main_HWWAnalysis(TString s)
{
  // path to your local directory *or* URL, please change the default one!
  /* Local path example */
  TString path = "/home/rufisica/Documentos/Dataset_Thesis/";

  /* The URL to the ATLAS Open Data website repository */
  //TString path = "http://www.universidad.ch/ATLAS/outreach/open-data-2020/2lep/";

//***************************************************************************************************//
  // adding chains of all MC and data samples
  //***************************************************************************************************//
  
  TChain *f = new TChain("mini");
 
  //////////////////////  MC samples
    
    // diboson
  if (s.Contains("ZqqZll")) {
    TChain *chain_ZqqZll = new TChain("mini");
    chain_ZqqZll->AddFile(path+"MC/mc_363356.ZqqZll.2lep.root");
    f = chain_ZqqZll;
  }
    
  if (s.Contains("WqqZll")) {
    TChain *chain_WqqZll = new TChain("mini");
    chain_WqqZll->AddFile(path+"MC/mc_363358.WqqZll.2lep.root");
    f = chain_WqqZll;
  }
    
  if (s.Contains("WpqqWmlv")) {    
    TChain *chain_WpqqWmlv = new TChain("mini");
    chain_WpqqWmlv->AddFile(path+"MC/mc_363359.WpqqWmlv.2lep.root");
    f = chain_WpqqWmlv;
  }
    
  if (s.Contains("WplvWmqq")) {
    TChain *chain_WplvWmqq = new TChain("mini");
    chain_WplvWmqq->AddFile(path+"MC/mc_363360.WplvWmqq.2lep.root");
    f = chain_WplvWmqq;
  }
    
  if (s.Contains("WlvZqq")) {  
    TChain *chain_WlvZqq = new TChain("mini");
    chain_WlvZqq->AddFile(path+"MC/mc_363489.WlvZqq.2lep.root");
    f = chain_WlvZqq;
  }
 
  if (s.Contains("llll")) {
    TChain *chain_llll = new TChain("mini");
    chain_llll->AddFile(path+"MC/mc_363490.llll.2lep.root");
    f = chain_llll;
  }
    
  if (s.Contains("lllv")) {   
    TChain *chain_lllv = new TChain("mini");
    chain_lllv->AddFile(path+"MC/mc_363491.lllv.2lep.root");
    f = chain_lllv;
  }
    
  if (s.Contains("llvv")) {
    TChain *chain_llvv = new TChain("mini");
    chain_llvv->AddFile(path+"MC/mc_363492.llvv.2lep.root");
    f = chain_llvv;
  }
    
  if (s.Contains("lvvv")) {   
    TChain *chain_lvvv = new TChain("mini");
    chain_lvvv->AddFile(path+"MC/mc_363493.lvvv.2lep.root");
    f = chain_lvvv;
  }
 
  // ggH
  if (s.Contains("ggH125_WW2lep")) {
    TChain *chain_ggH125_WW = new TChain("mini");
    chain_ggH125_WW->AddFile(path+"MC/mc_345324.ggH125_WW2lep.2lep.root");
    f = chain_ggH125_WW;
  }

  // VBF
  if (s.Contains("VBFH125_WW2lep")) {
    TChain *chain_VBFH125_WW = new TChain("mini");
    chain_VBFH125_WW->AddFile(path+"MC/mc_345323.VBFH125_WW2lep.2lep.root");
    f = chain_VBFH125_WW;
  } 
  
  return f;
    
}