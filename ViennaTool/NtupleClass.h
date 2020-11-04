//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Mar 21 19:40:12 2018 by ROOT version 6.06/01
// from TTree TauCheck/TauCheck
// found on file: /data/higgs/data_2016/ntuples_v2/et/ntuples_SVFIT_merged/BASIS_ntuple_DYXJetsToLL_lowMass_merged_MCSummer16_et_v2.root
//////////////////////////////////////////////////////////

#ifndef NtupleClass_h
#define NtupleClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TLorentzVector.h>

// Header file for the classes stored in the TTree if any.
#include "vector"

class NtupleClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           entry;
   Int_t           run;
   Float_t         lumi;
   ULong64_t       event;
   Double_t         weight;
   Float_t         puweight;
   Float_t         genbosonmass;
   Float_t         generatorWeight;
   Float_t         muonEffTrgWeight;
   Float_t         muonEffIDWeight_1;
   Float_t         muonEffIDWeight_2;
   Float_t         triggerWeight_1;
   Float_t         embeddedDecayModeWeight;
   Float_t         idWeight_1;
   Float_t         isoWeight_1;
   Float_t         idWeight_2;
   Float_t         isoWeight_2;
   Float_t         eleRecoWeight_1;
   Float_t         crossTriggerDataEfficiencyWeight_tight_DeepTau_1;
   Float_t         crossTriggerDataEfficiencyWeight_tight_DeepTau_2;
   Float_t         crossTriggerMCEfficiencyWeight_tight_DeepTau_1;
   Float_t         crossTriggerMCEfficiencyWeight_tight_DeepTau_2;
   Float_t         crossTriggerEMBEfficiencyWeight_tight_DeepTau_1;
   Float_t         crossTriggerEMBEfficiencyWeight_tight_DeepTau_2;
   Float_t         crossTriggerDataEfficiencyWeight_vloose_DeepTau_1;
   Float_t         crossTriggerDataEfficiencyWeight_vloose_DeepTau_2;
   Float_t         crossTriggerMCEfficiencyWeight_vloose_DeepTau_1;
   Float_t         crossTriggerMCEfficiencyWeight_vloose_DeepTau_2;
   Float_t         crossTriggerEMBEfficiencyWeight_vloose_DeepTau_1;
   Float_t         crossTriggerEMBEfficiencyWeight_vloose_DeepTau_2;
   Float_t         trigweight_1;
   Float_t         trigweight_2;
   Float_t         idisoweight_1;
   Float_t         idisoweight_2;
   
   Float_t         numberGeneratedEventsWeight;
   Float_t         crossSectionPerEventWeight;
   Float_t         trackWeight_1;
   Float_t         trackWeight_2;
   Float_t        singleTriggerMCEfficiencyWeightKIT_1;
   Float_t        singleTriggerDataEfficiencyWeightKIT_1;
   Float_t        singleTriggerEmbeddedEfficiencyWeightKIT_1;
   Float_t        crossTriggerMCEfficiencyWeightKIT_1;
   Float_t        crossTriggerDataEfficiencyWeightKIT_1;
   Float_t        crossTriggerEmbeddedEfficiencyWeightKIT_1;

   Bool_t           trg_singlemuon;
   Bool_t           trg_mutaucross;
//    Float_t           trg_mutaucross;
   Bool_t           trg_singleelectron;
//    Float_t           trg_singletau;
   Bool_t           trg_singlemu_22; 
   Bool_t           trg_doubletau;
   Bool_t           isEmbedded;
   Int_t           npv;
   Float_t         npu;
   Float_t         rho;
   Int_t           NUP;
   Float_t           flagMETFilter;
   Int_t           gen_match_1;
   Int_t           gen_match_2;
   Float_t         pt_1;
   Float_t         phi_1;
   Float_t         eta_1;
   Float_t         m_1;
   Float_t           q_1;
   Float_t         d0_1;
   Float_t         dZ_1;
   Float_t         mt_1;
   Float_t         mt_tot_puppi;
   Float_t         iso_1;
   Float_t           againstElectronLooseMVA6_1;
   Float_t           againstElectronMediumMVA6_1;
   Float_t           againstElectronTightMVA6_1;
   Float_t           againstElectronVLooseMVA6_1;
   Float_t           againstElectronVTightMVA6_1;
   Float_t           againstMuonLoose3_1;
   Float_t           againstMuonTight3_1;
   Float_t         byVLooseDeepTau2017v2p1VSe_1;
   Float_t         byVLooseDeepTau2017v2p1VSe_2;
   Float_t         byVLooseDeepTau2017v2p1VSmu_1;
   Float_t         byVLooseDeepTau2017v2p1VSmu_2;
   Float_t         byLooseDeepTau2017v2p1VSe_1;
   Float_t         byLooseDeepTau2017v2p1VSe_2;
   Float_t         byLooseDeepTau2017v2p1VSmu_1;
   Float_t         byLooseDeepTau2017v2p1VSmu_2;
   Float_t         byTightDeepTau2017v2p1VSe_1;
   Float_t         byTightDeepTau2017v2p1VSe_2;
   Float_t         byTightDeepTau2017v2p1VSmu_1;
   Float_t         byTightDeepTau2017v2p1VSmu_2;
   Float_t         byCombinedIsolationDeltaBetaCorrRaw3Hits_1;
   Int_t           byLooseCombinedIsolationDeltaBetaCorr3Hits_1;
   Int_t           byMediumCombinedIsolationDeltaBetaCorr3Hits_1;
   Int_t           byTightCombinedIsolationDeltaBetaCorr3Hits_1;
   Float_t           byVLooseIsolationMVArun2017v2DBoldDMwLT2017_1;
   Float_t           byLooseIsolationMVArun2017v2DBoldDMwLT2017_1;
   Float_t           byMediumIsolationMVArun2017v2DBoldDMwLT2017_1;
   Float_t           byTightIsolationMVArun2017v2DBoldDMwLT2017_1;
   Float_t           byVTightIsolationMVArun2017v2DBoldDMwLT2017_1;
   Float_t           byVLooseIsolationMVArun2017v1DBoldDMwLT2017_1;
   Float_t           byLooseIsolationMVArun2017v1DBoldDMwLT2017_1;
   Float_t           byMediumIsolationMVArun2017v1DBoldDMwLT2017_1;
   Float_t           byTightIsolationMVArun2017v1DBoldDMwLT2017_1;
   Float_t           byVTightIsolationMVArun2017v1DBoldDMwLT2017_1;
//    Int_t           byVLooseIsolationMVArun2v1DBnewDMwLT_1;
//    Int_t           byLooseIsolationMVArun2v1DBnewDMwLT_1;
//    Int_t           byMediumIsolationMVArun2v1DBnewDMwLT_1;
//    Int_t           byTightIsolationMVArun2v1DBnewDMwLT_1;
//    Int_t           byVTightIsolationMVArun2v1DBnewDMwLT_1;
//    Int_t           byRerunMVAIdVLoose_1;
//    Int_t           byRerunMVAIdLoose_1;
//    Int_t           byRerunMVAIdMedium_1;
//    Int_t           byRerunMVAIdTight_1;
//    Int_t           byRerunMVAIdVTight_1;
//    Int_t           byRerunMVAIdVVTight_1;
//    Float_t         idMVANewDM_1;
   Float_t           byVVVLooseDeepTau2017v2p1VSjet_1;
   Float_t           byVVLooseDeepTau2017v2p1VSjet_1;
   Float_t           byVLooseDeepTau2017v2p1VSjet_1;
   Float_t           byLooseDeepTau2017v2p1VSjet_1;
   Float_t           byMediumDeepTau2017v2p1VSjet_1;
   Float_t           byTightDeepTau2017v2p1VSjet_1;
   Float_t           byVTightDeepTau2017v2p1VSjet_1;
   Float_t           byVVTightDeepTau2017v2p1VSjet_1;
   Float_t           byVVVLooseDeepTau2017v2p1VSjet_2;
   Float_t           byVVLooseDeepTau2017v2p1VSjet_2;
   Float_t           byVLooseDeepTau2017v2p1VSjet_2;
   Float_t           byLooseDeepTau2017v2p1VSjet_2;
   Float_t           byMediumDeepTau2017v2p1VSjet_2;
   Float_t           byTightDeepTau2017v2p1VSjet_2;
   Float_t           byVTightDeepTau2017v2p1VSjet_2;
   Float_t           byVVTightDeepTau2017v2p1VSjet_2;
   Float_t           decayModeFindingNewDMs_1;
   Float_t           decayModeFindingNewDMs_2;
   Float_t         chargedIsoPtSum_1;
   Float_t         neutralIsoPtSum_1;
   Float_t         puCorrPtSum_1;
   Int_t           decayMode_1;
   Float_t         id_m_loose_1;
   Float_t         id_m_medium_1;
   Float_t         id_m_tight_1;
   Float_t         id_m_highpt_1;
   Float_t         id_e_cut_veto_1;
   Float_t         id_e_cut_loose_1;
   Float_t         id_e_cut_medium_1;
   Float_t         id_e_cut_tight_1;
   Float_t         pt_2;
   Float_t         phi_2;
   Float_t         eta_2;
   Float_t         m_2;
   Float_t           q_2;
   Float_t         d0_2;
   Float_t         dZ_2;
   Float_t         mt_2;
   Float_t         iso_2;
   Float_t           againstElectronLooseMVA6_2;
   Float_t           againstElectronMediumMVA6_2;
   Float_t           againstElectronTightMVA6_2;
   Float_t           againstElectronVLooseMVA6_2;
   Float_t           againstElectronVTightMVA6_2;
   Float_t           againstMuonLoose3_2;
   Float_t           againstMuonTight3_2;
   Float_t         byCombinedIsolationDeltaBetaCorrRaw3Hits_2;
   Int_t           byLooseCombinedIsolationDeltaBetaCorr3Hits_2;
   Int_t           byMediumCombinedIsolationDeltaBetaCorr3Hits_2;
   Int_t           byTightCombinedIsolationDeltaBetaCorr3Hits_2;
   Float_t           byVLooseIsolationMVArun2017v2DBoldDMwLT2017_2;
   Float_t           byLooseIsolationMVArun2017v2DBoldDMwLT2017_2;
   Float_t           byMediumIsolationMVArun2017v2DBoldDMwLT2017_2;
   Float_t           byTightIsolationMVArun2017v2DBoldDMwLT2017_2;
   Float_t           byVTightIsolationMVArun2017v2DBoldDMwLT2017_2;
   Float_t           byVLooseIsolationMVArun2017v1DBoldDMwLT2017_2;
   Float_t           byLooseIsolationMVArun2017v1DBoldDMwLT2017_2;
   Float_t           byMediumIsolationMVArun2017v1DBoldDMwLT2017_2;
   Float_t           byTightIsolationMVArun2017v1DBoldDMwLT2017_2;
   Float_t           byVTightIsolationMVArun2017v1DBoldDMwLT2017_2;
//    Int_t           byVLooseIsolationMVArun2v1DBnewDMwLT_2;
//    Int_t           byLooseIsolationMVArun2v1DBnewDMwLT_2;
//    Int_t           byMediumIsolationMVArun2v1DBnewDMwLT_2;
//    Int_t           byTightIsolationMVArun2v1DBnewDMwLT_2;
//    Int_t           byVTightIsolationMVArun2v1DBnewDMwLT_2;
//    Int_t           byRerunMVAIdVLoose_2;
//    Int_t           byRerunMVAIdLoose_2;
//    Int_t           byRerunMVAIdMedium_2;
//    Int_t           byRerunMVAIdTight_2;
//    Int_t           byRerunMVAIdVTight_2;
//    Int_t           byRerunMVAIdVVTight_2;
//    Float_t         idMVANewDM_2;
   Float_t         chargedIsoPtSum_2;
   Float_t         neutralIsoPtSum_2;
   Float_t         puCorrPtSum_2;
   Int_t           decayMode_2;
   Float_t         pzetavis;
   Float_t         pzetamiss;
   Float_t         pt_tt;
   Float_t         mt_tot;
   Float_t         m_vis;
  
  
   Float_t         topPtReweightWeight;
   Float_t         topPtReweightWeightRun1;
   Float_t         topPtReweightWeightRun2;
   Float_t         prefiringweight;
   Float_t         eleTauFakeRateWeight;
   Float_t         muTauFakeRateWeight;
   Float_t         zPtReweightWeight;

   // std::vector<TLorentzVector> *addlepton_p4; //added
   // std::vector<double>  *addlepton_iso; 	  //added
   // std::vector<int> 	*addlepton_pdgId;	  // added
   // std::vector<int> 	*addlepton_tauID;	  // added
   // std::vector<int> 	*addlepton_tauDM;	  // added
   // std::vector<int> 	*addlepton_tauAntiEle;	  // added
   // std::vector<int> 	*addlepton_tauAntiMu;	  // added
   // std::vector<double> 	*addlepton_tauCombIso;	  // added
   // std::vector<int> 	*addlepton_mc_match;	  // added
   // std::vector<double> 	*addlepton_mvis;	  // added
   
   Bool_t          passesTauLepVetos;
   Bool_t          dilepton_veto;
   Bool_t          extraelec_veto;
   Bool_t          extramuon_veto;
   Float_t         met;
   Float_t         metphi;
   Float_t         metcov00;
   Float_t         metcov01;
   Float_t         metcov10;
   Float_t         metcov11;
   Float_t         mjj;
//    Float_t         mjjUp;
//    Float_t         mjjDown;
   Float_t         jdeta;
//    Float_t         jdetaUp;
//    Float_t         jdetaDown;
   Int_t           njetingap;
   Int_t           njetingap20;
   Float_t         dijetpt;
   Float_t         dijetphi;
   Float_t         jdphi;
   Int_t           nbtag;
   Int_t           njets;
   Int_t           npartons;
//    Int_t           njetsUp;
//    Int_t           njetsDown;
   Int_t           njetspt20;
   Int_t           njetspt20eta2p4;

   Float_t         jpt_1;
   Float_t         taujet_pt_1;
   Float_t         taujet_pt_2;
   Float_t         taujet_eta_1;
   Float_t         taujet_eta_2;
   
//    Float_t         jptUp_1;
//    Float_t         jptDown_1;
   Float_t         jeta_1;
   Float_t         jphi_1;
   Float_t         jm_1;
   Float_t         jrawf_1;
   Float_t         jmva_1;
   Float_t         jcsv_1;
   Float_t         jpt_2;
//    Float_t         jptUp_2;
//    Float_t         jptDown_2;
   Float_t         jeta_2;
   Float_t         jphi_2;
   Float_t         jm_2;
   Float_t         jrawf_2;
   Float_t         jmva_2;
   Float_t         jcsv_2;
   Float_t         bpt_1;
   Float_t         beta_1;
   Float_t         bphi_1;
   Float_t         brawf_1;
   Float_t         bmva_1;
   Float_t         bcsv_1;
   Float_t         bpt_2;
   Float_t         beta_2;
   Float_t         bphi_2;
   Float_t         brawf_2;
   Float_t         bmva_2;
   Float_t         bcsv_2;
   Float_t         m_sv;
//    Float_t         m_sv_unc;
//    Float_t         mt_sv;
//    Float_t         mt_sv_unc;
   // Float_t         pt_sv;
//    Float_t         pt_sv_unc;

   // List of branches
   TBranch        *b_entry;   //!
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_event;   //!
   TBranch        *b_weight;   //!
   TBranch        *b_puweight;   //!
   TBranch        *b_genbosonmass;
   TBranch        *b_generatorWeight;
   TBranch        *b_muonEffTrgWeight;
   TBranch        *b_muonEffIDWeight_1;
   TBranch        *b_muonEffIDWeight_2;

   TBranch        *b_triggerWeight_1;
   TBranch        *b_embeddedDecayModeWeight;
   TBranch        *b_idWeight_1;
   TBranch        *b_isoWeight_1;
   TBranch        *b_idWeight_2;
   TBranch        *b_isoWeight_2;
   TBranch        *b_eleRecoWeight_1;   
   TBranch        *b_trigweight_1;   //!
   TBranch        *b_trigweight_2;   //!
   TBranch        *b_idisoweight_1;   //!
   TBranch        *b_idisoweight_2;   //!
   

   TBranch         *b_numberGeneratedEventsWeight;
   TBranch         *b_crossSectionPerEventWeight;
   TBranch         *b_trackWeight_1;
   TBranch         *b_trackWeight_2;

   TBranch        *b_singleTriggerMCEfficiencyWeightKIT_1;
   TBranch        *b_singleTriggerDataEfficiencyWeightKIT_1;
   TBranch        *b_singleTriggerEmbeddedEfficiencyWeightKIT_1;
   TBranch        *b_crossTriggerMCEfficiencyWeightKIT_1;
   TBranch        *b_crossTriggerDataEfficiencyWeightKIT_1;
   TBranch        *b_crossTriggerEmbeddedEfficiencyWeightKIT_1;

   TBranch        *b_trg_singlemuon;   //!
   TBranch        *b_trg_mutaucross;   //!
   TBranch        *b_trg_singleelectron;   //!
   TBranch        *b_trg_doubletau;   //!
   TBranch        *b_trg_singlemu_22;   //!

   TBranch        *b_isEmbedded;   //!
   TBranch        *b_crossTriggerDataEfficiencyWeight_tight_DeepTau_1;   //!
   TBranch        *b_crossTriggerDataEfficiencyWeight_tight_DeepTau_2;   //!
   TBranch        *b_crossTriggerMCEfficiencyWeight_tight_DeepTau_1;   //!
   TBranch        *b_crossTriggerMCEfficiencyWeight_tight_DeepTau_2;   //!
   TBranch        *b_crossTriggerEMBEfficiencyWeight_tight_DeepTau_1;   //!
   TBranch        *b_crossTriggerEMBEfficiencyWeight_tight_DeepTau_2;   //!
   TBranch        *b_crossTriggerDataEfficiencyWeight_vloose_DeepTau_1;   //!
   TBranch        *b_crossTriggerDataEfficiencyWeight_vloose_DeepTau_2;   //!
   TBranch        *b_crossTriggerMCEfficiencyWeight_vloose_DeepTau_1;   //!
   TBranch        *b_crossTriggerMCEfficiencyWeight_vloose_DeepTau_2;   //!
   TBranch        *b_crossTriggerEMBEfficiencyWeight_vloose_DeepTau_1;   //!
   TBranch        *b_crossTriggerEMBEfficiencyWeight_vloose_DeepTau_2;   //!
   TBranch        *b_npv;   //!
   TBranch        *b_npu;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_NUP;   //!
   TBranch        *b_flagMETFilter;   //!
   TBranch        *b_gen_match_1;   //!
   TBranch        *b_gen_match_2;   //!
   TBranch        *b_pt_1;   //!
   TBranch        *b_phi_1;   //!
   TBranch        *b_eta_1;   //!
   TBranch        *b_m_1;   //!
   TBranch        *b_q_1;   //!
   TBranch        *b_d0_1;   //!
   TBranch        *b_dZ_1;   //!
   TBranch        *b_mt_1;   //!
   TBranch        *b_mt_tot_puppi;
   TBranch        *b_iso_1;   //!
   TBranch        *b_againstElectronLooseMVA6_1;   //!
   TBranch        *b_againstElectronMediumMVA6_1;   //!
   TBranch        *b_againstElectronTightMVA6_1;   //!
   TBranch        *b_againstElectronVLooseMVA6_1;   //!
   TBranch        *b_againstElectronVTightMVA6_1;   //!
   TBranch        *b_againstMuonLoose3_1;   //!
   TBranch        *b_againstMuonTight3_1;   //!
   TBranch        *b_byVLooseDeepTau2017v2p1VSe_1;
   TBranch        *b_byVLooseDeepTau2017v2p1VSe_2;
   TBranch        *b_byVLooseDeepTau2017v2p1VSmu_1;
   TBranch        *b_byVLooseDeepTau2017v2p1VSmu_2;
   TBranch        *b_byLooseDeepTau2017v2p1VSe_1;
   TBranch        *b_byLooseDeepTau2017v2p1VSe_2;
   TBranch        *b_byLooseDeepTau2017v2p1VSmu_1;
   TBranch        *b_byLooseDeepTau2017v2p1VSmu_2;
   TBranch        *b_byTightDeepTau2017v2p1VSe_1;
   TBranch        *b_byTightDeepTau2017v2p1VSe_2;
   TBranch        *b_byTightDeepTau2017v2p1VSmu_1;
   TBranch        *b_byTightDeepTau2017v2p1VSmu_2;
   TBranch        *b_byCombinedIsolationDeltaBetaCorrRaw3Hits_1;   //!
   TBranch        *b_byLooseCombinedIsolationDeltaBetaCorr3Hits_1;   //!
   TBranch        *b_byMediumCombinedIsolationDeltaBetaCorr3Hits_1;   //!
   TBranch        *b_byTightCombinedIsolationDeltaBetaCorr3Hits_1;   //!
   TBranch        *b_byVLooseIsolationMVArun2017v2DBoldDMwLT2017_1;   //!
   TBranch        *b_byLooseIsolationMVArun2017v2DBoldDMwLT2017_1;   //!
   TBranch        *b_byMediumIsolationMVArun2017v2DBoldDMwLT2017_1;   //!
   TBranch        *b_byTightIsolationMVArun2017v2DBoldDMwLT2017_1;   //!
   TBranch        *b_byVTightIsolationMVArun2017v2DBoldDMwLT2017_1;   //!
   TBranch        *b_byVLooseIsolationMVArun2017v1DBoldDMwLT2017_1;   //!
   TBranch        *b_byLooseIsolationMVArun2017v1DBoldDMwLT2017_1;   //!
   TBranch        *b_byMediumIsolationMVArun2017v1DBoldDMwLT2017_1;   //!
   TBranch        *b_byTightIsolationMVArun2017v1DBoldDMwLT2017_1;   //!
   TBranch        *b_byVTightIsolationMVArun2017v1DBoldDMwLT2017_1;   //!

   TBranch        *b_byVVVLooseDeepTau2017v2p1VSjet_1;
   TBranch        *b_byVVLooseDeepTau2017v2p1VSjet_1;
   TBranch        *b_byVLooseDeepTau2017v2p1VSjet_1;
   TBranch        *b_byLooseDeepTau2017v2p1VSjet_1;
   TBranch        *b_byMediumDeepTau2017v2p1VSjet_1;
   TBranch        *b_byTightDeepTau2017v2p1VSjet_1;
   TBranch        *b_byVTightDeepTau2017v2p1VSjet_1;
   TBranch        *b_byVVTightDeepTau2017v2p1VSjet_1;
   TBranch        *b_byVVVLooseDeepTau2017v2p1VSjet_2;
   TBranch        *b_byVVLooseDeepTau2017v2p1VSjet_2;
   TBranch        *b_byVLooseDeepTau2017v2p1VSjet_2;
   TBranch        *b_byLooseDeepTau2017v2p1VSjet_2;
   TBranch        *b_byMediumDeepTau2017v2p1VSjet_2;
   TBranch        *b_byTightDeepTau2017v2p1VSjet_2;
   TBranch        *b_byVTightDeepTau2017v2p1VSjet_2;
   TBranch        *b_byVVTightDeepTau2017v2p1VSjet_2;

   TBranch        *b_decayModeFindingNewDMs_1;   //!
   TBranch        *b_decayModeFindingNewDMs_2;   //!


//    TBranch        *b_byVLooseIsolationMVArun2v1DBnewDMwLT_1;   //!
//    TBranch        *b_byLooseIsolationMVArun2v1DBnewDMwLT_1;   //!
//    TBranch        *b_byMediumIsolationMVArun2v1DBnewDMwLT_1;   //!
//    TBranch        *b_byTightIsolationMVArun2v1DBnewDMwLT_1;   //!
//    TBranch        *b_byVTightIsolationMVArun2v1DBnewDMwLT_1;   //!
//    TBranch        *b_byRerunMVAIdVLoose_1;   //!
//    TBranch        *b_byRerunMVAIdLoose_1;   //!
//    TBranch        *b_byRerunMVAIdMedium_1;   //!
//    TBranch        *b_byRerunMVAIdTight_1;   //!
//    TBranch        *b_byRerunMVAIdVTight_1;   //!
//    TBranch        *b_byRerunMVAIdVVTight_1;   //!
//    TBranch        *b_idMVANewDM_1;   //!
   TBranch        *b_chargedIsoPtSum_1;   //!
   TBranch        *b_neutralIsoPtSum_1;   //!
   TBranch        *b_puCorrPtSum_1;   //!
   TBranch        *b_decayMode_1;   //!
   TBranch        *b_id_m_loose_1;   //!
   TBranch        *b_id_m_medium_1;   //!
   TBranch        *b_id_m_tight_1;   //!
   TBranch        *b_id_m_highpt_1;   //!
   TBranch        *b_id_e_cut_veto_1;   //!
   TBranch        *b_id_e_cut_loose_1;   //!
   TBranch        *b_id_e_cut_medium_1;   //!
   TBranch        *b_id_e_cut_tight_1;   //!
   TBranch        *b_pt_2;   //!
   TBranch        *b_phi_2;   //!
   TBranch        *b_eta_2;   //!
   TBranch        *b_m_2;   //!
   TBranch        *b_q_2;   //!
   TBranch        *b_d0_2;   //!
   TBranch        *b_dZ_2;   //!
   TBranch        *b_mt_2;   //!
   TBranch        *b_iso_2;   //!
   TBranch        *b_againstElectronLooseMVA6_2;   //!
   TBranch        *b_againstElectronMediumMVA6_2;   //!
   TBranch        *b_againstElectronTightMVA6_2;   //!
   TBranch        *b_againstElectronVLooseMVA6_2;   //!
   TBranch        *b_againstElectronVTightMVA6_2;   //!
   TBranch        *b_againstMuonLoose3_2;   //!
   TBranch        *b_againstMuonTight3_2;   //!
   TBranch        *b_byCombinedIsolationDeltaBetaCorrRaw3Hits_2;   //!
   TBranch        *b_byLooseCombinedIsolationDeltaBetaCorr3Hits_2;   //!
   TBranch        *b_byMediumCombinedIsolationDeltaBetaCorr3Hits_2;   //!
   TBranch        *b_byTightCombinedIsolationDeltaBetaCorr3Hits_2;   //!
   TBranch        *b_byVLooseIsolationMVArun2017v2DBoldDMwLT2017_2;   //!
   TBranch        *b_byLooseIsolationMVArun2017v2DBoldDMwLT2017_2;   //!
   TBranch        *b_byMediumIsolationMVArun2017v2DBoldDMwLT2017_2;   //!
   TBranch        *b_byTightIsolationMVArun2017v2DBoldDMwLT2017_2;   //!
   TBranch        *b_byVTightIsolationMVArun2017v2DBoldDMwLT2017_2;   //!
   TBranch        *b_byVLooseIsolationMVArun2017v1DBoldDMwLT2017_2;   //!
   TBranch        *b_byLooseIsolationMVArun2017v1DBoldDMwLT2017_2;   //!
   TBranch        *b_byMediumIsolationMVArun2017v1DBoldDMwLT2017_2;   //!
   TBranch        *b_byTightIsolationMVArun2017v1DBoldDMwLT2017_2;   //!
   TBranch        *b_byVTightIsolationMVArun2017v1DBoldDMwLT2017_2;   //!
//    TBranch        *b_byVLooseIsolationMVArun2v1DBnewDMwLT_2;   //!
//    TBranch        *b_byLooseIsolationMVArun2v1DBnewDMwLT_2;   //!
//    TBranch        *b_byMediumIsolationMVArun2v1DBnewDMwLT_2;   //!
//    TBranch        *b_byTightIsolationMVArun2v1DBnewDMwLT_2;   //!
//    TBranch        *b_byVTightIsolationMVArun2v1DBnewDMwLT_2;   //!
//    TBranch        *b_byRerunMVAIdVLoose_2;   //!
//    TBranch        *b_byRerunMVAIdLoose_2;   //!
//    TBranch        *b_byRerunMVAIdMedium_2;   //!
//    TBranch        *b_byRerunMVAIdTight_2;   //!
//    TBranch        *b_byRerunMVAIdVTight_2;   //!
//    TBranch        *b_byRerunMVAIdVVTight_2;   //!
//    TBranch        *b_idMVANewDM_2;   //!
   TBranch        *b_chargedIsoPtSum_2;   //!
   TBranch        *b_neutralIsoPtSum_2;   //!
   TBranch        *b_puCorrPtSum_2;   //!
   TBranch        *b_decayMode_2;   //!
   TBranch        *b_pzetavis;   //!
   TBranch        *b_pzetamiss;   //!
   TBranch        *b_pt_tt;   //!
   TBranch        *b_mt_tot;   //!
   TBranch        *b_m_vis;   //!
   
   
   TBranch        *b_passesTauLepVetos;   //!
   TBranch        *b_dilepton_veto;   //!
   TBranch        *b_extraelec_veto;   //!
   TBranch        *b_extramuon_veto;   //!
   TBranch        *b_met;   //!
   TBranch        *b_metphi;   //!
   TBranch        *b_metcov00;   //!
   TBranch        *b_metcov01;   //!
   TBranch        *b_metcov10;   //!
   TBranch        *b_metcov11;   //!
   TBranch        *b_mjj;   //!
//    TBranch        *b_mjjUp;   //!
//    TBranch        *b_mjjDown;   //!
   TBranch        *b_jdeta;   //!
//    TBranch        *b_jdetaUp;   //!
//    TBranch        *b_jdetaDown;   //!
   TBranch        *b_njetingap;   //!
   TBranch        *b_njetingap20;   //!
   TBranch        *b_dijetpt;   //!
   TBranch        *b_dijetphi;   //!
   TBranch        *b_jdphi;   //!
   TBranch        *b_nbtag;   //!
   TBranch        *b_npartons;   //!
   TBranch        *b_njets;   //!
//    TBranch        *b_njetsUp;   //!
//    TBranch        *b_njetsDown;   //!
   TBranch        *b_njetspt20;   //!
   TBranch        *b_njetspt20eta2p4;   //!
   TBranch        *b_jpt_1;   //!
   TBranch        *b_taujet_pt_1;   //!
   TBranch        *b_taujet_pt_2;   //!
   TBranch        *b_taujet_eta_1;   //!
   TBranch        *b_taujet_eta_2;   //!
   
//    TBranch        *b_jptUp_1;   //!
//    TBranch        *b_jptDown_1;   //!
   TBranch        *b_jeta_1;   //!
   TBranch        *b_jphi_1;   //!
   TBranch        *b_jm_1;   //!
   TBranch        *b_jrawf_1;   //!
   TBranch        *b_jmva_1;   //!
   TBranch        *b_jcsv_1;   //!
   TBranch        *b_jpt_2;   //!
//    TBranch        *b_jptUp_2;   //!
//    TBranch        *b_jptDown_2;   //!
   TBranch        *b_jeta_2;   //!
   TBranch        *b_jphi_2;   //!
   TBranch        *b_jm_2;   //!
   TBranch        *b_jrawf_2;   //!
   TBranch        *b_jmva_2;   //!
   TBranch        *b_jcsv_2;   //!
   TBranch        *b_bpt_1;   //!
   TBranch        *b_beta_1;   //!
   TBranch        *b_bphi_1;   //!
   TBranch        *b_brawf_1;   //!
   TBranch        *b_bmva_1;   //!
   TBranch        *b_bcsv_1;   //!
   TBranch        *b_bpt_2;   //!
   TBranch        *b_beta_2;   //!
   TBranch        *b_bphi_2;   //!
   TBranch        *b_brawf_2;   //!
   TBranch        *b_bmva_2;   //!
   TBranch        *b_bcsv_2;   //!
   TBranch        *b_m_sv;   //!
//    TBranch        *b_m_sv_unc;   //!
//    TBranch        *b_mt_sv;   //!
//    TBranch        *b_mt_sv_unc;   //!
   // TBranch        *b_pt_sv;   //!
//    TBranch        *b_pt_sv_unc;   //!
   TBranch        *b_topPtReweightWeight;   //!
   TBranch        *b_topPtReweightWeightRun1;   //!
   TBranch        *b_topPtReweightWeightRun2;   //!
   TBranch        *b_prefiringweight;
   TBranch        *b_eleTauFakeRateWeight;   //!
   TBranch        *b_muTauFakeRateWeight;   //!
   TBranch        *b_zPtReweightWeight;   //!

   NtupleClass(TTree *tree=0);
   virtual ~NtupleClass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef NtupleClass_cxx
NtupleClass::NtupleClass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/data/higgs/data_2016/ntuples_v2/et/ntuples_SVFIT_merged/BASIS_ntuple_DYXJetsToLL_lowMass_merged_MCSummer16_et_v2.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/data/higgs/data_2016/ntuples_v2/et/ntuples_SVFIT_merged/BASIS_ntuple_DYXJetsToLL_lowMass_merged_MCSummer16_et_v2.root");
      }
      f->GetObject("TauCheck",tree);

   }
   Init(tree);
}

NtupleClass::~NtupleClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t NtupleClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t NtupleClass::LoadTree(Long64_t entry)
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

void NtupleClass::Init(TTree *tree)
{ 
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   // addlepton_p4 = 0;	//added
   // addlepton_iso = 0;	//added
   // addlepton_pdgId = 0;	//added
   // addlepton_tauID = 0;	//added
   // addlepton_tauDM = 0;	//added
   // addlepton_tauAntiEle = 0;	//added
   // addlepton_tauAntiMu = 0;	//added
   // addlepton_tauCombIso = 0;	//added
   // addlepton_mc_match = 0;	//added
   // addlepton_mvis = 0;	//added

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("weight", &weight, &b_weight);
   fChain->SetBranchAddress("puweight", &puweight, &b_puweight);
   fChain->SetBranchAddress("genbosonmass", &genbosonmass, &b_genbosonmass);
   fChain->SetBranchAddress("generatorWeight", &generatorWeight, &b_generatorWeight);
   fChain->SetBranchAddress("muonEffTrgWeight", &muonEffTrgWeight, &b_muonEffTrgWeight);
   fChain->SetBranchAddress("muonEffIDWeight_1", &muonEffIDWeight_1, &b_muonEffIDWeight_1);
   fChain->SetBranchAddress("muonEffIDWeight_2", &muonEffIDWeight_2, &b_muonEffIDWeight_2);
   fChain->SetBranchAddress("triggerWeight_1", &triggerWeight_1, &b_triggerWeight_1);
   fChain->SetBranchAddress("embeddedDecayModeWeight", &embeddedDecayModeWeight, &b_embeddedDecayModeWeight);
   fChain->SetBranchAddress("idWeight_1", &idWeight_1, &b_idWeight_1);
   fChain->SetBranchAddress("isoWeight_1", &isoWeight_1, &b_isoWeight_1);
   fChain->SetBranchAddress("idWeight_2", &idWeight_2, &b_idWeight_2);
   fChain->SetBranchAddress("isoWeight_2", &isoWeight_2, &b_isoWeight_2);
   fChain->SetBranchAddress("eleRecoWeight_1", &eleRecoWeight_1, &b_eleRecoWeight_1);
   fChain->SetBranchAddress("trigweight_1", &trigweight_1, &b_trigweight_1);
   fChain->SetBranchAddress("trigweight_2", &trigweight_2, &b_trigweight_2);
   fChain->SetBranchAddress("idisoweight_1", &idisoweight_1, &b_idisoweight_1);
   fChain->SetBranchAddress("idisoweight_2", &idisoweight_2, &b_idisoweight_2);
   fChain->SetBranchAddress("topPtReweightWeight", &topPtReweightWeight, &b_topPtReweightWeight);
   fChain->SetBranchAddress("topPtReweightWeightRun1", &topPtReweightWeightRun1, &b_topPtReweightWeightRun1);
   fChain->SetBranchAddress("topPtReweightWeightRun2", &topPtReweightWeightRun2, &b_topPtReweightWeightRun2);
   fChain->SetBranchAddress("prefiringweight", &prefiringweight, &b_prefiringweight);
   fChain->SetBranchAddress("numberGeneratedEventsWeight", &numberGeneratedEventsWeight, &b_numberGeneratedEventsWeight);
   fChain->SetBranchAddress("crossSectionPerEventWeight", &crossSectionPerEventWeight, &b_crossSectionPerEventWeight);
   fChain->SetBranchAddress("trackWeight_1", &trackWeight_1, &b_trackWeight_1);
   fChain->SetBranchAddress("trackWeight_2", &trackWeight_2, &b_trackWeight_2);
   fChain->SetBranchAddress("singleTriggerMCEfficiencyWeightKIT_1", &singleTriggerMCEfficiencyWeightKIT_1, &b_singleTriggerMCEfficiencyWeightKIT_1);
   fChain->SetBranchAddress("singleTriggerDataEfficiencyWeightKIT_1", &singleTriggerDataEfficiencyWeightKIT_1, &b_singleTriggerDataEfficiencyWeightKIT_1);
   fChain->SetBranchAddress("singleTriggerEmbeddedEfficiencyWeightKIT_1", &singleTriggerEmbeddedEfficiencyWeightKIT_1, &b_singleTriggerEmbeddedEfficiencyWeightKIT_1);
   fChain->SetBranchAddress("singleTriggerEmbeddedEfficiencyWeightKIT_1", &singleTriggerEmbeddedEfficiencyWeightKIT_1, &b_singleTriggerEmbeddedEfficiencyWeightKIT_1);
   fChain->SetBranchAddress("crossTriggerMCEfficiencyWeightKIT_1", &crossTriggerMCEfficiencyWeightKIT_1, &b_crossTriggerMCEfficiencyWeightKIT_1);
   fChain->SetBranchAddress("crossTriggerDataEfficiencyWeightKIT_1", &crossTriggerDataEfficiencyWeightKIT_1, &b_crossTriggerDataEfficiencyWeightKIT_1);
   fChain->SetBranchAddress("crossTriggerEmbeddedEfficiencyWeightKIT_1", &crossTriggerEmbeddedEfficiencyWeightKIT_1, &b_crossTriggerEmbeddedEfficiencyWeightKIT_1);

   fChain->SetBranchAddress("eleTauFakeRateWeight", &eleTauFakeRateWeight, &b_eleTauFakeRateWeight);

   fChain->SetBranchAddress("muTauFakeRateWeight", &muTauFakeRateWeight, &b_muTauFakeRateWeight);
   fChain->SetBranchAddress("zPtReweightWeight", &zPtReweightWeight, &b_zPtReweightWeight);
   
   fChain->SetBranchAddress("trg_singlemuon", &trg_singlemuon, &b_trg_singlemuon);
   fChain->SetBranchAddress("trg_mutaucross", &trg_mutaucross, &b_trg_mutaucross);
   fChain->SetBranchAddress("trg_singleelectron", &trg_singleelectron, &b_trg_singleelectron);
   fChain->SetBranchAddress("trg_doubletau", &trg_doubletau, &b_trg_doubletau);
   fChain->SetBranchAddress("isEmbedded", &isEmbedded, &b_isEmbedded);
   fChain->SetBranchAddress("crossTriggerDataEfficiencyWeight_tight_DeepTau_1", &crossTriggerDataEfficiencyWeight_tight_DeepTau_1, &b_crossTriggerDataEfficiencyWeight_tight_DeepTau_1);
   fChain->SetBranchAddress("crossTriggerDataEfficiencyWeight_tight_DeepTau_2", &crossTriggerDataEfficiencyWeight_tight_DeepTau_2, &b_crossTriggerDataEfficiencyWeight_tight_DeepTau_2);
   fChain->SetBranchAddress("crossTriggerMCEfficiencyWeight_tight_DeepTau_1", &crossTriggerMCEfficiencyWeight_tight_DeepTau_1, &b_crossTriggerMCEfficiencyWeight_tight_DeepTau_1);
   fChain->SetBranchAddress("crossTriggerMCEfficiencyWeight_tight_DeepTau_2", &crossTriggerMCEfficiencyWeight_tight_DeepTau_2, &b_crossTriggerMCEfficiencyWeight_tight_DeepTau_2);
   fChain->SetBranchAddress("crossTriggerEMBEfficiencyWeight_tight_DeepTau_1", &crossTriggerEMBEfficiencyWeight_tight_DeepTau_1, &b_crossTriggerEMBEfficiencyWeight_tight_DeepTau_1);
   fChain->SetBranchAddress("crossTriggerEMBEfficiencyWeight_tight_DeepTau_2", &crossTriggerEMBEfficiencyWeight_tight_DeepTau_2, &b_crossTriggerEMBEfficiencyWeight_tight_DeepTau_2);
   fChain->SetBranchAddress("crossTriggerDataEfficiencyWeight_vloose_DeepTau_1", &crossTriggerDataEfficiencyWeight_vloose_DeepTau_1, &b_crossTriggerDataEfficiencyWeight_vloose_DeepTau_1);
   fChain->SetBranchAddress("crossTriggerDataEfficiencyWeight_vloose_DeepTau_2", &crossTriggerDataEfficiencyWeight_vloose_DeepTau_2, &b_crossTriggerDataEfficiencyWeight_vloose_DeepTau_2);
   fChain->SetBranchAddress("crossTriggerMCEfficiencyWeight_vloose_DeepTau_1", &crossTriggerMCEfficiencyWeight_vloose_DeepTau_1, &b_crossTriggerMCEfficiencyWeight_vloose_DeepTau_1);
   fChain->SetBranchAddress("crossTriggerMCEfficiencyWeight_vloose_DeepTau_2", &crossTriggerMCEfficiencyWeight_vloose_DeepTau_2, &b_crossTriggerMCEfficiencyWeight_vloose_DeepTau_2);
   fChain->SetBranchAddress("crossTriggerEMBEfficiencyWeight_vloose_DeepTau_1", &crossTriggerEMBEfficiencyWeight_vloose_DeepTau_1, &b_crossTriggerEMBEfficiencyWeight_vloose_DeepTau_1);
   fChain->SetBranchAddress("crossTriggerEMBEfficiencyWeight_vloose_DeepTau_2", &crossTriggerEMBEfficiencyWeight_vloose_DeepTau_2, &b_crossTriggerEMBEfficiencyWeight_vloose_DeepTau_2);
   fChain->SetBranchAddress("npv", &npv, &b_npv);
   fChain->SetBranchAddress("npu", &npu, &b_npu);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("NUP", &NUP, &b_NUP);
   fChain->SetBranchAddress("flagMETFilter", &flagMETFilter, &b_flagMETFilter);
   fChain->SetBranchAddress("gen_match_1", &gen_match_1, &b_gen_match_1);
   fChain->SetBranchAddress("gen_match_2", &gen_match_2, &b_gen_match_2);
   fChain->SetBranchAddress("pt_1", &pt_1, &b_pt_1);
   fChain->SetBranchAddress("phi_1", &phi_1, &b_phi_1);
   fChain->SetBranchAddress("eta_1", &eta_1, &b_eta_1);
   fChain->SetBranchAddress("m_1", &m_1, &b_m_1);
   fChain->SetBranchAddress("q_1", &q_1, &b_q_1);
   fChain->SetBranchAddress("d0_1", &d0_1, &b_d0_1);
   fChain->SetBranchAddress("dZ_1", &dZ_1, &b_dZ_1);
   fChain->SetBranchAddress("mt_1_puppi", &mt_1, &b_mt_1);
   fChain->SetBranchAddress("mt_tot_puppi", &mt_tot_puppi, &b_mt_tot_puppi);
   fChain->SetBranchAddress("iso_1", &iso_1, &b_iso_1);
   fChain->SetBranchAddress("againstElectronLooseMVA6_1", &againstElectronLooseMVA6_1, &b_againstElectronLooseMVA6_1);
   fChain->SetBranchAddress("againstElectronMediumMVA6_1", &againstElectronMediumMVA6_1, &b_againstElectronMediumMVA6_1);
   fChain->SetBranchAddress("againstElectronTightMVA6_1", &againstElectronTightMVA6_1, &b_againstElectronTightMVA6_1);
   fChain->SetBranchAddress("againstElectronVLooseMVA6_1", &againstElectronVLooseMVA6_1, &b_againstElectronVLooseMVA6_1);
   fChain->SetBranchAddress("againstElectronVTightMVA6_1", &againstElectronVTightMVA6_1, &b_againstElectronVTightMVA6_1);
   fChain->SetBranchAddress("againstMuonLoose3_1", &againstMuonLoose3_1, &b_againstMuonLoose3_1);
   fChain->SetBranchAddress("againstMuonTight3_1", &againstMuonTight3_1, &b_againstMuonTight3_1);
   fChain->SetBranchAddress("byVLooseDeepTau2017v2p1VSe_1", &byVLooseDeepTau2017v2p1VSe_1, &b_byVLooseDeepTau2017v2p1VSe_1);
   fChain->SetBranchAddress("byVLooseDeepTau2017v2p1VSe_2", &byVLooseDeepTau2017v2p1VSe_2, &b_byVLooseDeepTau2017v2p1VSe_2);
   fChain->SetBranchAddress("byVLooseDeepTau2017v2p1VSmu_1", &byVLooseDeepTau2017v2p1VSmu_1, &b_byVLooseDeepTau2017v2p1VSmu_1);
   fChain->SetBranchAddress("byVLooseDeepTau2017v2p1VSmu_2", &byVLooseDeepTau2017v2p1VSmu_2, &b_byVLooseDeepTau2017v2p1VSmu_2);
   fChain->SetBranchAddress("byLooseDeepTau2017v2p1VSe_1", &byLooseDeepTau2017v2p1VSe_1, &b_byLooseDeepTau2017v2p1VSe_1);
   fChain->SetBranchAddress("byLooseDeepTau2017v2p1VSe_2", &byLooseDeepTau2017v2p1VSe_2, &b_byLooseDeepTau2017v2p1VSe_2);
   fChain->SetBranchAddress("byLooseDeepTau2017v2p1VSmu_1", &byLooseDeepTau2017v2p1VSmu_1, &b_byLooseDeepTau2017v2p1VSmu_1);
   fChain->SetBranchAddress("byLooseDeepTau2017v2p1VSmu_2", &byLooseDeepTau2017v2p1VSmu_2, &b_byLooseDeepTau2017v2p1VSmu_2);
   fChain->SetBranchAddress("byTightDeepTau2017v2p1VSe_1", &byTightDeepTau2017v2p1VSe_1, &b_byTightDeepTau2017v2p1VSe_1);
   fChain->SetBranchAddress("byTightDeepTau2017v2p1VSe_2", &byTightDeepTau2017v2p1VSe_2, &b_byTightDeepTau2017v2p1VSe_2);
   fChain->SetBranchAddress("byTightDeepTau2017v2p1VSmu_1", &byTightDeepTau2017v2p1VSmu_1, &b_byTightDeepTau2017v2p1VSmu_1);
   fChain->SetBranchAddress("byTightDeepTau2017v2p1VSmu_2", &byTightDeepTau2017v2p1VSmu_2, &b_byTightDeepTau2017v2p1VSmu_2);   
   fChain->SetBranchAddress("byCombinedIsolationDeltaBetaCorrRaw3Hits_1", &byCombinedIsolationDeltaBetaCorrRaw3Hits_1, &b_byCombinedIsolationDeltaBetaCorrRaw3Hits_1);
   fChain->SetBranchAddress("byLooseCombinedIsolationDeltaBetaCorr3Hits_1", &byLooseCombinedIsolationDeltaBetaCorr3Hits_1, &b_byLooseCombinedIsolationDeltaBetaCorr3Hits_1);
   fChain->SetBranchAddress("byMediumCombinedIsolationDeltaBetaCorr3Hits_1", &byMediumCombinedIsolationDeltaBetaCorr3Hits_1, &b_byMediumCombinedIsolationDeltaBetaCorr3Hits_1);
   fChain->SetBranchAddress("byTightCombinedIsolationDeltaBetaCorr3Hits_1", &byTightCombinedIsolationDeltaBetaCorr3Hits_1, &b_byTightCombinedIsolationDeltaBetaCorr3Hits_1);
   fChain->SetBranchAddress("byVLooseIsolationMVArun2017v2DBoldDMwLT2017_1", &byVLooseIsolationMVArun2017v2DBoldDMwLT2017_1, &b_byVLooseIsolationMVArun2017v2DBoldDMwLT2017_1);
   fChain->SetBranchAddress("byLooseIsolationMVArun2017v2DBoldDMwLT2017_1", &byLooseIsolationMVArun2017v2DBoldDMwLT2017_1, &b_byLooseIsolationMVArun2017v2DBoldDMwLT2017_1);
   fChain->SetBranchAddress("byMediumIsolationMVArun2017v2DBoldDMwLT2017_1", &byMediumIsolationMVArun2017v2DBoldDMwLT2017_1, &b_byMediumIsolationMVArun2017v2DBoldDMwLT2017_1);
   fChain->SetBranchAddress("byTightIsolationMVArun2017v2DBoldDMwLT2017_1", &byTightIsolationMVArun2017v2DBoldDMwLT2017_1, &b_byTightIsolationMVArun2017v2DBoldDMwLT2017_1);
   fChain->SetBranchAddress("byVTightIsolationMVArun2017v2DBoldDMwLT2017_1", &byVTightIsolationMVArun2017v2DBoldDMwLT2017_1, &b_byVTightIsolationMVArun2017v2DBoldDMwLT2017_1);
   fChain->SetBranchAddress("byVLooseIsolationMVArun2017v1DBoldDMwLT2017_1", &byVLooseIsolationMVArun2017v1DBoldDMwLT2017_1, &b_byVLooseIsolationMVArun2017v1DBoldDMwLT2017_1);
   fChain->SetBranchAddress("byLooseIsolationMVArun2017v1DBoldDMwLT2017_1", &byLooseIsolationMVArun2017v1DBoldDMwLT2017_1, &b_byLooseIsolationMVArun2017v1DBoldDMwLT2017_1);
   fChain->SetBranchAddress("byMediumIsolationMVArun2017v1DBoldDMwLT2017_1", &byMediumIsolationMVArun2017v1DBoldDMwLT2017_1, &b_byMediumIsolationMVArun2017v1DBoldDMwLT2017_1);
   fChain->SetBranchAddress("byTightIsolationMVArun2017v1DBoldDMwLT2017_1", &byTightIsolationMVArun2017v1DBoldDMwLT2017_1, &b_byTightIsolationMVArun2017v1DBoldDMwLT2017_1);
   fChain->SetBranchAddress("byVTightIsolationMVArun2017v1DBoldDMwLT2017_1", &byVTightIsolationMVArun2017v1DBoldDMwLT2017_1, &b_byVTightIsolationMVArun2017v1DBoldDMwLT2017_1);
//    fChain->SetBranchAddress("byVLooseIsolationMVArun2v1DBnewDMwLT_1", &byVLooseIsolationMVArun2v1DBnewDMwLT_1, &b_byVLooseIsolationMVArun2v1DBnewDMwLT_1);
//    fChain->SetBranchAddress("byLooseIsolationMVArun2v1DBnewDMwLT_1", &byLooseIsolationMVArun2v1DBnewDMwLT_1, &b_byLooseIsolationMVArun2v1DBnewDMwLT_1);
//    fChain->SetBranchAddress("byMediumIsolationMVArun2v1DBnewDMwLT_1", &byMediumIsolationMVArun2v1DBnewDMwLT_1, &b_byMediumIsolationMVArun2v1DBnewDMwLT_1);
//    fChain->SetBranchAddress("byTightIsolationMVArun2v1DBnewDMwLT_1", &byTightIsolationMVArun2v1DBnewDMwLT_1, &b_byTightIsolationMVArun2v1DBnewDMwLT_1);
//    fChain->SetBranchAddress("byVTightIsolationMVArun2v1DBnewDMwLT_1", &byVTightIsolationMVArun2v1DBnewDMwLT_1, &b_byVTightIsolationMVArun2v1DBnewDMwLT_1);
//    fChain->SetBranchAddress("byRerunMVAIdVLoose_1", &byRerunMVAIdVLoose_1, &b_byRerunMVAIdVLoose_1);
//    fChain->SetBranchAddress("byRerunMVAIdLoose_1", &byRerunMVAIdLoose_1, &b_byRerunMVAIdLoose_1);
//    fChain->SetBranchAddress("byRerunMVAIdMedium_1", &byRerunMVAIdMedium_1, &b_byRerunMVAIdMedium_1);
//    fChain->SetBranchAddress("byRerunMVAIdTight_1", &byRerunMVAIdTight_1, &b_byRerunMVAIdTight_1);
//    fChain->SetBranchAddress("byRerunMVAIdVTight_1", &byRerunMVAIdVTight_1, &b_byRerunMVAIdVTight_1);
//    fChain->SetBranchAddress("byRerunMVAIdVVTight_1", &byRerunMVAIdVVTight_1, &b_byRerunMVAIdVVTight_1);
//    fChain->SetBranchAddress("idMVANewDM_1", &idMVANewDM_1, &b_idMVANewDM_1);
   fChain->SetBranchAddress("chargedIsoPtSum_1", &chargedIsoPtSum_1, &b_chargedIsoPtSum_1);
   fChain->SetBranchAddress("neutralIsoPtSum_1", &neutralIsoPtSum_1, &b_neutralIsoPtSum_1);
   fChain->SetBranchAddress("puCorrPtSum_1", &puCorrPtSum_1, &b_puCorrPtSum_1);
   fChain->SetBranchAddress("decayMode_1", &decayMode_1, &b_decayMode_1);
   fChain->SetBranchAddress("id_m_loose_1", &id_m_loose_1, &b_id_m_loose_1);
   fChain->SetBranchAddress("id_m_medium_1", &id_m_medium_1, &b_id_m_medium_1);
   fChain->SetBranchAddress("id_m_tight_1", &id_m_tight_1, &b_id_m_tight_1);
   fChain->SetBranchAddress("id_m_highpt_1", &id_m_highpt_1, &b_id_m_highpt_1);
   fChain->SetBranchAddress("id_e_cut_veto_1", &id_e_cut_veto_1, &b_id_e_cut_veto_1);
   fChain->SetBranchAddress("id_e_cut_loose_1", &id_e_cut_loose_1, &b_id_e_cut_loose_1);
   fChain->SetBranchAddress("id_e_cut_medium_1", &id_e_cut_medium_1, &b_id_e_cut_medium_1);
   fChain->SetBranchAddress("id_e_cut_tight_1", &id_e_cut_tight_1, &b_id_e_cut_tight_1);
   fChain->SetBranchAddress("pt_2", &pt_2, &b_pt_2);
   fChain->SetBranchAddress("phi_2", &phi_2, &b_phi_2);
   fChain->SetBranchAddress("eta_2", &eta_2, &b_eta_2);
   fChain->SetBranchAddress("m_2", &m_2, &b_m_2);
   fChain->SetBranchAddress("q_2", &q_2, &b_q_2);
   fChain->SetBranchAddress("d0_2", &d0_2, &b_d0_2);
   fChain->SetBranchAddress("dZ_2", &dZ_2, &b_dZ_2);
   fChain->SetBranchAddress("mt_2", &mt_2, &b_mt_2);
   fChain->SetBranchAddress("iso_2", &iso_2, &b_iso_2);
   fChain->SetBranchAddress("againstElectronLooseMVA6_2", &againstElectronLooseMVA6_2, &b_againstElectronLooseMVA6_2);
   fChain->SetBranchAddress("againstElectronMediumMVA6_2", &againstElectronMediumMVA6_2, &b_againstElectronMediumMVA6_2);
   fChain->SetBranchAddress("againstElectronTightMVA6_2", &againstElectronTightMVA6_2, &b_againstElectronTightMVA6_2);
   fChain->SetBranchAddress("againstElectronVLooseMVA6_2", &againstElectronVLooseMVA6_2, &b_againstElectronVLooseMVA6_2);
   fChain->SetBranchAddress("againstElectronVTightMVA6_2", &againstElectronVTightMVA6_2, &b_againstElectronVTightMVA6_2);
   fChain->SetBranchAddress("againstMuonLoose3_2", &againstMuonLoose3_2, &b_againstMuonLoose3_2);
   fChain->SetBranchAddress("againstMuonTight3_2", &againstMuonTight3_2, &b_againstMuonTight3_2);
   fChain->SetBranchAddress("byCombinedIsolationDeltaBetaCorrRaw3Hits_2", &byCombinedIsolationDeltaBetaCorrRaw3Hits_2, &b_byCombinedIsolationDeltaBetaCorrRaw3Hits_2);
   fChain->SetBranchAddress("byLooseCombinedIsolationDeltaBetaCorr3Hits_2", &byLooseCombinedIsolationDeltaBetaCorr3Hits_2, &b_byLooseCombinedIsolationDeltaBetaCorr3Hits_2);
   fChain->SetBranchAddress("byMediumCombinedIsolationDeltaBetaCorr3Hits_2", &byMediumCombinedIsolationDeltaBetaCorr3Hits_2, &b_byMediumCombinedIsolationDeltaBetaCorr3Hits_2);
   fChain->SetBranchAddress("byTightCombinedIsolationDeltaBetaCorr3Hits_2", &byTightCombinedIsolationDeltaBetaCorr3Hits_2, &b_byTightCombinedIsolationDeltaBetaCorr3Hits_2);
   fChain->SetBranchAddress("byVLooseIsolationMVArun2017v2DBoldDMwLT2017_2", &byVLooseIsolationMVArun2017v2DBoldDMwLT2017_2, &b_byVLooseIsolationMVArun2017v2DBoldDMwLT2017_2);
   fChain->SetBranchAddress("byLooseIsolationMVArun2017v2DBoldDMwLT2017_2", &byLooseIsolationMVArun2017v2DBoldDMwLT2017_2, &b_byLooseIsolationMVArun2017v2DBoldDMwLT2017_2);
   fChain->SetBranchAddress("byMediumIsolationMVArun2017v2DBoldDMwLT2017_2", &byMediumIsolationMVArun2017v2DBoldDMwLT2017_2, &b_byMediumIsolationMVArun2017v2DBoldDMwLT2017_2);
   fChain->SetBranchAddress("byTightIsolationMVArun2017v2DBoldDMwLT2017_2", &byTightIsolationMVArun2017v2DBoldDMwLT2017_2, &b_byTightIsolationMVArun2017v2DBoldDMwLT2017_2);
   fChain->SetBranchAddress("byVTightIsolationMVArun2017v2DBoldDMwLT2017_2", &byVTightIsolationMVArun2017v2DBoldDMwLT2017_2, &b_byVTightIsolationMVArun2017v2DBoldDMwLT2017_2);
   fChain->SetBranchAddress("byVLooseIsolationMVArun2017v1DBoldDMwLT2017_2", &byVLooseIsolationMVArun2017v1DBoldDMwLT2017_2, &b_byVLooseIsolationMVArun2017v1DBoldDMwLT2017_2);
   fChain->SetBranchAddress("byLooseIsolationMVArun2017v1DBoldDMwLT2017_2", &byLooseIsolationMVArun2017v1DBoldDMwLT2017_2, &b_byLooseIsolationMVArun2017v1DBoldDMwLT2017_2);
   fChain->SetBranchAddress("byMediumIsolationMVArun2017v1DBoldDMwLT2017_2", &byMediumIsolationMVArun2017v1DBoldDMwLT2017_2, &b_byMediumIsolationMVArun2017v1DBoldDMwLT2017_2);
   fChain->SetBranchAddress("byTightIsolationMVArun2017v1DBoldDMwLT2017_2", &byTightIsolationMVArun2017v1DBoldDMwLT2017_2, &b_byTightIsolationMVArun2017v1DBoldDMwLT2017_2);
   fChain->SetBranchAddress("byVTightIsolationMVArun2017v1DBoldDMwLT2017_2", &byVTightIsolationMVArun2017v1DBoldDMwLT2017_2, &b_byVTightIsolationMVArun2017v1DBoldDMwLT2017_2);
   fChain->SetBranchAddress("byVVVLooseDeepTau2017v2p1VSjet_1", &byVVVLooseDeepTau2017v2p1VSjet_1, &b_byVVVLooseDeepTau2017v2p1VSjet_1);
   fChain->SetBranchAddress("byVVLooseDeepTau2017v2p1VSjet_1", &byVVLooseDeepTau2017v2p1VSjet_1, &b_byVVLooseDeepTau2017v2p1VSjet_1);
   fChain->SetBranchAddress("byVLooseDeepTau2017v2p1VSjet_1", &byVLooseDeepTau2017v2p1VSjet_1, &b_byVLooseDeepTau2017v2p1VSjet_1);
   fChain->SetBranchAddress("byLooseDeepTau2017v2p1VSjet_1", &byLooseDeepTau2017v2p1VSjet_1, &b_byLooseDeepTau2017v2p1VSjet_1);
                             
   fChain->SetBranchAddress("byMediumDeepTau2017v2p1VSjet_1", &byMediumDeepTau2017v2p1VSjet_1, &b_byMediumDeepTau2017v2p1VSjet_1);
   fChain->SetBranchAddress("byTightDeepTau2017v2p1VSjet_1", &byTightDeepTau2017v2p1VSjet_1, &b_byTightDeepTau2017v2p1VSjet_1);
   fChain->SetBranchAddress("byVTightDeepTau2017v2p1VSjet_1", &byVTightDeepTau2017v2p1VSjet_1, &b_byVTightDeepTau2017v2p1VSjet_1);
   fChain->SetBranchAddress("byVVTightDeepTau2017v2p1VSjet_1", &byVVTightDeepTau2017v2p1VSjet_1, &b_byVVTightDeepTau2017v2p1VSjet_1);
   fChain->SetBranchAddress("byVVVLooseDeepTau2017v2p1VSjet_2", &byVVVLooseDeepTau2017v2p1VSjet_2, &b_byVVVLooseDeepTau2017v2p1VSjet_2);
   fChain->SetBranchAddress("byVVLooseDeepTau2017v2p1VSjet_2", &byVVLooseDeepTau2017v2p1VSjet_2, &b_byVVLooseDeepTau2017v2p1VSjet_2);
   fChain->SetBranchAddress("byVLooseDeepTau2017v2p1VSjet_2", &byVLooseDeepTau2017v2p1VSjet_2, &b_byVLooseDeepTau2017v2p1VSjet_2);
   fChain->SetBranchAddress("byLooseDeepTau2017v2p1VSjet_2", &byLooseDeepTau2017v2p1VSjet_2, &b_byLooseDeepTau2017v2p1VSjet_2);
   fChain->SetBranchAddress("byMediumDeepTau2017v2p1VSjet_2", &byMediumDeepTau2017v2p1VSjet_2, &b_byMediumDeepTau2017v2p1VSjet_2);
   fChain->SetBranchAddress("byTightDeepTau2017v2p1VSjet_2", &byTightDeepTau2017v2p1VSjet_2, &b_byTightDeepTau2017v2p1VSjet_2);
   fChain->SetBranchAddress("byVTightDeepTau2017v2p1VSjet_2", &byVTightDeepTau2017v2p1VSjet_2, &b_byVTightDeepTau2017v2p1VSjet_2);
   fChain->SetBranchAddress("byVVTightDeepTau2017v2p1VSjet_2", &byVVTightDeepTau2017v2p1VSjet_2, &b_byVVTightDeepTau2017v2p1VSjet_2);
   fChain->SetBranchAddress("decayModeFindingNewDMs_1", &decayModeFindingNewDMs_1, &b_decayModeFindingNewDMs_1);
   fChain->SetBranchAddress("decayModeFindingNewDMs_2", &decayModeFindingNewDMs_2, &b_decayModeFindingNewDMs_2);


//    fChain->SetBranchAddress("byVLooseIsolationMVArun2v1DBnewDMwLT_2", &byVLooseIsolationMVArun2v1DBnewDMwLT_2, &b_byVLooseIsolationMVArun2v1DBnewDMwLT_2);
//    fChain->SetBranchAddress("byLooseIsolationMVArun2v1DBnewDMwLT_2", &byLooseIsolationMVArun2v1DBnewDMwLT_2, &b_byLooseIsolationMVArun2v1DBnewDMwLT_2);
//    fChain->SetBranchAddress("byMediumIsolationMVArun2v1DBnewDMwLT_2", &byMediumIsolationMVArun2v1DBnewDMwLT_2, &b_byMediumIsolationMVArun2v1DBnewDMwLT_2);
//    fChain->SetBranchAddress("byTightIsolationMVArun2v1DBnewDMwLT_2", &byTightIsolationMVArun2v1DBnewDMwLT_2, &b_byTightIsolationMVArun2v1DBnewDMwLT_2);
//    fChain->SetBranchAddress("byVTightIsolationMVArun2v1DBnewDMwLT_2", &byVTightIsolationMVArun2v1DBnewDMwLT_2, &b_byVTightIsolationMVArun2v1DBnewDMwLT_2);
//    fChain->SetBranchAddress("byRerunMVAIdVLoose_2", &byRerunMVAIdVLoose_2, &b_byRerunMVAIdVLoose_2);
//    fChain->SetBranchAddress("byRerunMVAIdLoose_2", &byRerunMVAIdLoose_2, &b_byRerunMVAIdLoose_2);
//    fChain->SetBranchAddress("byRerunMVAIdMedium_2", &byRerunMVAIdMedium_2, &b_byRerunMVAIdMedium_2);
//    fChain->SetBranchAddress("byRerunMVAIdTight_2", &byRerunMVAIdTight_2, &b_byRerunMVAIdTight_2);
//    fChain->SetBranchAddress("byRerunMVAIdVTight_2", &byRerunMVAIdVTight_2, &b_byRerunMVAIdVTight_2);
//    fChain->SetBranchAddress("byRerunMVAIdVVTight_2", &byRerunMVAIdVVTight_2, &b_byRerunMVAIdVVTight_2);
//    fChain->SetBranchAddress("idMVANewDM_2", &idMVANewDM_2, &b_idMVANewDM_2);
   fChain->SetBranchAddress("chargedIsoPtSum_2", &chargedIsoPtSum_2, &b_chargedIsoPtSum_2);
   fChain->SetBranchAddress("neutralIsoPtSum_2", &neutralIsoPtSum_2, &b_neutralIsoPtSum_2);
   fChain->SetBranchAddress("puCorrPtSum_2", &puCorrPtSum_2, &b_puCorrPtSum_2);
   fChain->SetBranchAddress("decayMode_2", &decayMode_2, &b_decayMode_2);
   fChain->SetBranchAddress("pzetavis", &pzetavis, &b_pzetavis);
   fChain->SetBranchAddress("pzetamiss", &pzetamiss, &b_pzetamiss);
   fChain->SetBranchAddress("pt_tt", &pt_tt, &b_pt_tt);
   fChain->SetBranchAddress("mt_tot", &mt_tot, &b_mt_tot);
   fChain->SetBranchAddress("m_vis", &m_vis, &b_m_vis);
   
   
   fChain->SetBranchAddress("passesTauLepVetos", &passesTauLepVetos, &b_passesTauLepVetos);
   fChain->SetBranchAddress("dilepton_veto", &dilepton_veto, &b_dilepton_veto);
   fChain->SetBranchAddress("extraelec_veto", &extraelec_veto, &b_extraelec_veto);
   fChain->SetBranchAddress("extramuon_veto", &extramuon_veto, &b_extramuon_veto);
   fChain->SetBranchAddress("met", &met, &b_met);
   fChain->SetBranchAddress("metphi", &metphi, &b_metphi);
   fChain->SetBranchAddress("metcov00", &metcov00, &b_metcov00);
   fChain->SetBranchAddress("metcov01", &metcov01, &b_metcov01);
   fChain->SetBranchAddress("metcov10", &metcov10, &b_metcov10);
   fChain->SetBranchAddress("metcov11", &metcov11, &b_metcov11);
   fChain->SetBranchAddress("mjj", &mjj, &b_mjj);
// //    fChain->SetBranchAddress("mjjUp", &mjjUp, &b_mjjUp);
//    fChain->SetBranchAddress("mjjDown", &mjjDown, &b_mjjDown);
   fChain->SetBranchAddress("jdeta", &jdeta, &b_jdeta);
//    fChain->SetBranchAddress("jdetaUp", &jdetaUp, &b_jdetaUp);
//    fChain->SetBranchAddress("jdetaDown", &jdetaDown, &b_jdetaDown);
   fChain->SetBranchAddress("njetingap", &njetingap, &b_njetingap);
   fChain->SetBranchAddress("njetingap20", &njetingap20, &b_njetingap20);
   fChain->SetBranchAddress("dijetpt", &dijetpt, &b_dijetpt);
   fChain->SetBranchAddress("dijetphi", &dijetphi, &b_dijetphi);
   fChain->SetBranchAddress("jdphi", &jdphi, &b_jdphi);
   fChain->SetBranchAddress("nbtag", &nbtag, &b_nbtag);
   fChain->SetBranchAddress("njets", &njets, &b_njets);
   fChain->SetBranchAddress("npartons", &npartons, &b_npartons);
//    fChain->SetBranchAddress("njetsUp", &njetsUp, &b_njetsUp);
//    fChain->SetBranchAddress("njetsDown", &njetsDown, &b_njetsDown);
   fChain->SetBranchAddress("njetspt20", &njetspt20, &b_njetspt20);
   fChain->SetBranchAddress("njetspt20eta2p4", &njetspt20eta2p4, &b_njetspt20eta2p4);
   fChain->SetBranchAddress("jpt_1", &jpt_1, &b_jpt_1);
   fChain->SetBranchAddress("taujet_pt_1", &taujet_pt_1, &b_taujet_pt_1);
   fChain->SetBranchAddress("taujet_pt_2", &taujet_pt_2, &b_taujet_pt_2);
   fChain->SetBranchAddress("taujet_eta_1", &taujet_eta_1, &b_taujet_eta_1);
   fChain->SetBranchAddress("taujet_eta_2", &taujet_eta_2, &b_taujet_eta_2);
//    fChain->SetBranchAddress("jptUp_1", &jptUp_1, &b_jptUp_1);
//    fChain->SetBranchAddress("jptDown_1", &jptDown_1, &b_jptDown_1);
   fChain->SetBranchAddress("jeta_1", &jeta_1, &b_jeta_1);
   fChain->SetBranchAddress("jphi_1", &jphi_1, &b_jphi_1);
   fChain->SetBranchAddress("jm_1", &jm_1, &b_jm_1);
   fChain->SetBranchAddress("jrawf_1", &jrawf_1, &b_jrawf_1);
   fChain->SetBranchAddress("jmva_1", &jmva_1, &b_jmva_1);
   fChain->SetBranchAddress("jcsv_1", &jcsv_1, &b_jcsv_1);
   fChain->SetBranchAddress("jpt_2", &jpt_2, &b_jpt_2);
//    fChain->SetBranchAddress("jptUp_2", &jptUp_2, &b_jptUp_2);
//    fChain->SetBranchAddress("jptDown_2", &jptDown_2, &b_jptDown_2);
   fChain->SetBranchAddress("jeta_2", &jeta_2, &b_jeta_2);
   fChain->SetBranchAddress("jphi_2", &jphi_2, &b_jphi_2);
   fChain->SetBranchAddress("jm_2", &jm_2, &b_jm_2);
   fChain->SetBranchAddress("jrawf_2", &jrawf_2, &b_jrawf_2);
   fChain->SetBranchAddress("jmva_2", &jmva_2, &b_jmva_2);
   fChain->SetBranchAddress("jcsv_2", &jcsv_2, &b_jcsv_2);
   fChain->SetBranchAddress("bpt_1", &bpt_1, &b_bpt_1);
   fChain->SetBranchAddress("beta_1", &beta_1, &b_beta_1);
   fChain->SetBranchAddress("bphi_1", &bphi_1, &b_bphi_1);
   fChain->SetBranchAddress("brawf_1", &brawf_1, &b_brawf_1);
   fChain->SetBranchAddress("bmva_1", &bmva_1, &b_bmva_1);
   fChain->SetBranchAddress("bcsv_1", &bcsv_1, &b_bcsv_1);
   fChain->SetBranchAddress("bpt_2", &bpt_2, &b_bpt_2);
   fChain->SetBranchAddress("beta_2", &beta_2, &b_beta_2);
   fChain->SetBranchAddress("bphi_2", &bphi_2, &b_bphi_2);
   fChain->SetBranchAddress("brawf_2", &brawf_2, &b_brawf_2);
   fChain->SetBranchAddress("bmva_2", &bmva_2, &b_bmva_2);
   fChain->SetBranchAddress("bcsv_2", &bcsv_2, &b_bcsv_2);
   fChain->SetBranchAddress("m_sv", &m_sv, &b_m_sv);
//    fChain->SetBranchAddress("m_sv_unc", &m_sv_unc, &b_m_sv_unc);
//    fChain->SetBranchAddress("mt_sv", &mt_sv, &b_mt_sv);
//    fChain->SetBranchAddress("mt_sv_unc", &mt_sv_unc, &b_mt_sv_unc);
   // fChain->SetBranchAddress("pt_sv", &pt_sv, &b_pt_sv);
//    fChain->SetBranchAddress("pt_sv_unc", &pt_sv_unc, &b_pt_sv_unc);
   Notify();
}

Bool_t NtupleClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void NtupleClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t NtupleClass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef NtupleClass_cxx
