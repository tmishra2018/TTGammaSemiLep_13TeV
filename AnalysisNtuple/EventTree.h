#ifndef EVENTTREE_H
#define EVENTTREE_H

#include<TFile.h>
#include<TTree.h>
#include<TChain.h>

#include<vector>

using namespace std;
const Int_t maxP = 600;

class EventTree{
public:
        EventTree(int nFiles, bool xRootDAccess, string year, char** fileNames);
	~EventTree();
	Long64_t GetEntries();
	Int_t GetEntry(Long64_t entry);
	
	TChain* chain;

	// include all variables just in case
	Int_t    run_;
	Long64_t event_;
	Int_t    lumis_;

	Float_t  genWeight_;
	/* Float_t  pdf_[7]; */
	/* Float_t  pthat_; */
	/* Float_t  processID_; */

	UInt_t nLHEScaleWeight_;
	Float_t LHEScaleWeight_[200];

	UInt_t nLHEPdfWeight_;
	Float_t LHEPdfWeight_[200];

	bool isData_;

	/* Int_t    nHLT_; */
	/* Int_t    HLT_[maxP]; */
	/* ULong64_t    HLTEleMuX; */

/* 	Float_t  bspotPos_[3]; */
	Int_t    nVtx_;
	Int_t    nGoodVtx_;

/* 	vector<Float_t>* vtx_x_; */
/* 	vector<Float_t>* vtx_y_; */
/* 	vector<Float_t>* vtx_z_; */
	
/* 	vector<int>* vtxNTrk_; */
/* 	vector<float>* vtxNDF_; */
/* 	vector<float>* vtxD0_; */

        Float_t    pvNDOF_;
        Float_t    pvX_;
        Float_t    pvY_;
        Float_t    pvZ_;
        Float_t    pvChi2_;

/* 	Bool_t    isPVGood_; */
/* 	Int_t    nGoodVtx; */
/* 	Int_t    nVtxBS_; */
/* 	vector<float>*  vtxbs_x_; */
/* 	vector<float>*  vtxbs_y_; */
/* 	vector<float>*  vtxbs_z_; */
/* 	vector<float>*  vtxbsPtMod_; */
/* 	vector<float>*  vtxbsSumPt2_; */
/* 	std::vector<std::vector<Int_t> >*   vtxbsTkIndex_; */
/* 	std::vector<std::vector<Float_t> >* vtxbsTkWeight_; */
/* 	Int_t    nTrk_; */
/* 	vector<float>*  trkP_x_; */
/* 	vector<float>*  trkP_y_; */
/* 	vector<float>*  trkP_z_; */
/* 	vector<float>*  trkVtx_x_; */
/* 	vector<float>*  trkVtx_y_; */
/* 	vector<float>*  trkVtx_z_; */
/* 	vector<float>*  trkd0_; */
/* 	vector<float>*  trkd0Err_; */
/* 	vector<float>*  trkdz_; */
/* 	vector<float>*  trkdzErr_; */
/* 	vector<float>*  trkPtErr_; */
/* 	vector<int>*    trkQuality_; */
/* 	Int_t    nGoodTrk_; */
/* 	Int_t    IsTracksGood_; */
/* 	Float_t  centrality_[5]; */


	// genParticle

        Int_t    nGenPart_;
        
        Float_t   GenPart_pt_[200];
        Float_t   GenPart_eta_[200];
        Float_t   GenPart_phi_[200];
        Float_t   GenPart_mass_[200];
        Int_t     GenPart_genPartIdxMother_[200];
        Int_t     GenPart_pdgId_[200];
        Int_t     GenPart_status_[200];
        Int_t     GenPart_statusFlags_[200];


        Int_t    nGenJet_;
        
        Float_t   GenJet_pt_[200];
        Float_t   GenJet_eta_[200];
        Float_t   GenJet_phi_[200];
        Float_t   GenJet_mass_[200];

	/* Int_t    nMC_; */
	/* vector<int>* mcPID; */
	/* vector<float>* mcVtx_x; */
	/* vector<float>* mcVtx_y; */
	/* vector<float>* mcVtx_z; */
	/* vector<float>* mcPt; */
	/* vector<float>*  mcMass; */
	/* vector<float>*  mcEta; */
	/* vector<float>*  mcPhi; */
	/* vector<float>*  mcE; */
	/* vector<float>*  mcEt; */
	/* vector<int>*    mcGMomPID; */
	/* vector<int>*    mcMomPID; */
	/* vector<float>*  mcMomPt; */
	/* vector<float>*  mcMomMass; */
	/* vector<float>*  mcMomEta; */
	/* vector<float>*  mcMomPhi; */
	/* //vector<int>*    mcIndex; */
	/* vector<int>*    mcDecayType; */
	/* vector<int>*    mcParentage; */
	/* vector<int>*    mcStatus; */
        /* vector<UShort_t>* mcStatusFlag; */
        /* Float_t        pdfWeight_; */
	/* vector<float>* pdfSystWeight_; */
	/* vector<float>* genScaleSystWeights_; */

	// PU
	Int_t    nPU_;  
	Float_t  nPUTrue_;  

	Float_t  MET_pt_;
	Float_t  MET_phi_;

	Float_t  GenMET_pt_;
	Float_t  GenMET_phi_;

	/* Float_t  pfMETsumEt_; */
	/* Float_t  pfMETmEtSig_; */
	/* Float_t  pfMETSig_; */
	/* // pfMET (Type 0+1) */
	/* Float_t  pfType01MET_; */
	/* Float_t  pfType01METPhi_; */
	/* Float_t  pfType01METsumEt_; */
	/* Float_t  pfType01METmEtSig_; */
	/* Float_t  pfType01METSig_; */
	/* // reco pf met */
	/* Float_t  recoPfMET_; */
	/* Float_t  recoPfMETPhi_; */
	/* Float_t  recoPfMETsumEt_; */
	/* Float_t  recoPfMETmEtSig_; */
	/* Float_t  recoPfMETSig_; */
	/* // track MET */
	/* Float_t  trkMETxPV_; */
	/* Float_t  trkMETyPV_; */
	/* Float_t  trkMETPhiPV_; */
	/* Float_t  trkMETPV_; */
	/* vector<float>* trkMETx_; */
	/* vector<float>* trkMETy_; */
	/* vector<float>* trkMETPhi_; */
	/* vector<float>* trkMET_; */
	/* // MET filters */
	/* Int_t    metFilters_[10]; */
	// Electron

	UInt_t          nEle_;
	Float_t         elePhi_[10];
	Float_t         elePt_[10];
	Float_t         eleEta_[10];
	Float_t         eleDeltaEtaSC_[10];
	Int_t           eleCharge_[10];
	Float_t         eleMass_[10];
	Float_t         elePFRelIso_[10];
	Float_t         elePFRelChIso_[10];
	Bool_t          eleIDcutbased_[10];
	Float_t         eleD0_[10];
	Float_t         eleDz_[10];

	Int_t           eleVidWPBitmap_[10];
	Float_t         eleEcalSumEtDr03_[10];
	Float_t         eleHcalSumEtDr03_[10];
	Float_t         eleTrkSumPtDr03_[10];



/* 	Int_t    nEle_; */
/* 	vector<ULong_t>* eleTrg_; //[maxP][16]; */
/* 	vector<int>*    eleClass_; */
/* 	vector<int>*    eleIsEcalDriven_; */
/* 	vector<int>*    eleCharge_; */
/* 	vector<int>*    eleChargeConsistent_; */
/* 	vector<float>*  eleEn_; */
/* 	vector<float>*  eleEcalEn_; */
/* 	vector<float>*  eleSCEn_; */
/* 	vector<float>*  eleESEn_; */
/* 	vector<float>*  eleVtx_x_; */
/* 	vector<float>*  eleVtx_y_; */
/* 	vector<float>*  eleVtx_z_; */
/* 	vector<float>*  eleD0_; */
/* 	vector<float>*  eleDz_; */
/* 	vector<float>*  eleD0GV_; */
/* 	vector<float>*  eleDzGV_; */
/* 	vector<vector<float> >*  eleD0Vtx_; */
/* 	vector<vector<float> >*  eleDzVtx_; */
/* 	vector<float>*  elePt_; */
/* 	vector<float>*  eleEta_; */
/* 	vector<float>*  elePhi_; */
/* 	vector<float>*  eleSCEta_; */
/* 	vector<float>*  eleSCPhi_; */
/* 	vector<float>*  eleCalibPt_; */
/* 	vector<float>*  eleCalibEn_; */
/* 	vector<vector<float> >*  eleEtVtx_; */
/* 	vector<vector<float> >*  eleEtaVtx_; */
/* 	vector<vector<float> >*  elePhiVtx_; */
/* 	vector<float>*  eleSCRawEn_; */
/* 	vector<float>*  eleSCEtaWidth_; */
/* 	vector<float>*  eleSCPhiWidth_; */
/* 	vector<float>*  eleHoverE_; */
/* 	vector<float>*  eleHoverE12_;  */
/* 	vector<float>*  eleEoverP_; */
/* 	vector<float>*  eleEoverPInv_; */
/* 	vector<float>*  elePin_; */
/* 	vector<float>*  elePout_; */
/* 	vector<float>*  eleTrkMomErr_; */
/* 	vector<float>*  eleBrem_; */
/* 	vector<float>*  eledEtaseedAtVtx_; */
/* 	vector<float>*  eledEtaAtVtx_; */
/* 	vector<float>*  eledPhiAtVtx_; */
/* 	vector<float>*  eleSigmaIEtaIEtaFull5x5_; */
/* //	vector<float>*  eleSigmaIEtaIPhi_; */
/* 	vector<float>*  eleSigmaIPhiIPhiFull5x5_; */
/* 	vector<float>*  eleEmax_; */
/* 	vector<float>*  eleE2ndMax_; */
/* 	vector<float>*  eleETop_; */
/* 	vector<float>*  eleEBottom_; */
/* 	vector<float>*  eleELeft_; */
/* 	vector<float>*  eleERight_; */
/* 	vector<float>*  eleSeedE_; */
/* 	vector<float>*  eleSeedEta_; */
/* 	vector<float>*  eleSeedPhi_; */
/* 	vector<float>*  eleCrysEta_; */
/* 	vector<float>*  eleCrysPhi_; */
/* 	vector<int>*    eleCrysIEta_; */
/* 	vector<int>*    eleCrysIPhi_; */
/* 	vector<float>*  eleR9_;   */
/* 	vector<int>*    eleNClus_; */
/* 	vector<float>*  eleE1x5_; */
/* 	vector<float>*  eleE3x3_; */
/* 	vector<float>*  eleE5x5_; */
/* 	vector<float>*  eleE2x5Max_; */
/* 	vector<float>*  eleE2x5Top_; */
/* 	vector<float>*  eleE2x5Bottom_; */
/* 	vector<float>*  eleE2x5Left_; */
/* 	vector<float>*  eleE2x5Right_; */
/* 	vector<float>*  eleRegrE_; */
/* 	vector<float>*  eleRegrEerr_; */
/* 	vector<float>*  elePhoRegrE_; */
/* 	vector<float>*  elePhoRegrEerr_; */
/* 	vector<float>*  eleSeedTime_; */
/* 	vector<int>*    eleRecoFlag_; */
/* 	vector<int>*    elePos_; */
/* 	vector<int>*    eleGenIndex_; */
/* 	vector<int>*    eleGenGMomPID_; */
/* 	vector<int>*    eleGenMomPID_; */
/* 	vector<float>*  eleGenMomPt_; */
/* 	vector<float>*  eleIsoTrkDR03_; */
/* 	vector<float>*  eleIsoEcalDR03_; */
/* 	vector<float>*  eleIsoHcalDR03_; */
/* 	vector<float>*  eleIsoHcalDR0312_; */
/* 	vector<float>*  eleIsoTrkDR04_; */
/* 	vector<float>*  eleIsoEcalDR04_; */
/* 	vector<float>*  eleIsoHcalDR04_; */
/* 	vector<float>*  eleIsoHcalDR0412_; */
/* 	vector<float>*  eleModIsoTrk_; */
/* 	vector<float>*  eleModIsoEcal_; */
/* 	vector<float>*  eleModIsoHcal_; */
/* 	vector<float>*  eleChi2NDF_; */
/* 	vector<int>*    eleMissHits_; */
/* 	vector<int>*    eleConvVeto_; */
/* 	vector<float>*  eleConvDist_; */
/* 	vector<float>*  eleConvDcot_; */
/* 	vector<int>*    eleEtaseedAtVtx_; */
/* 	vector<float>*  eleIP3D_; */
/* 	vector<float>*  eleIP3DErr_; */
/* 	vector<float>*  eleIDMVAHZZ_; */
/* 	vector<unsigned short>*    eleIDbit_; */
/* 	vector<float>*  eleIDMVA_; */
/* 	vector<int>*    eleID2012_0_; */
/* 	vector<int>*    eleID2012_1_; */
/* 	vector<int>*    eleID2012_2_; */
/* 	vector<int>*    eleID2012_3_; */
/* 	Int_t    eleESDetId_[maxP][2]; */
/* 	Float_t  eleESHits_[maxP][3][62]; */
/* 	vector<float>* eleESEffSigmaRR_x_; */
/* 	vector<float>* eleESEffSigmaRR_y_; */
/* 	vector<float>* eleESEffSigmaRR_z_; */
/* 	Float_t  eleESE1_[maxP][2]; */
/* 	Float_t  eleESE3_[maxP][2]; */
/* 	Float_t  eleESE5_[maxP][2]; */
/* 	Float_t  eleESE7_[maxP][2]; */
/* 	Float_t  eleESE11_[maxP][2]; */
/* 	Float_t  eleESE21_[maxP][2]; */
/* 	vector<int>*	   eleNBC_; */
/* 	vector<float>*  eleBrLinear_; */
/* 	vector<float>*  eleCetaCorrE_; */
/* 	vector<float>*  eleCetaCorrEt_; */
/* 	vector<float>*  eleBremCorrE_; */
/* 	vector<float>*  eleBremCorrEt_; */
/* 	vector<float>*  eleFullCorrE_; */
/* 	vector<float>*  eleFullCorrEt_; */
/* 	vector<float>*  elePFChIso_; */
/* 	vector<float>*  elePFPhoIso_; */
/* 	vector<float>*  elePFNeuIso_; */
/* 	vector<float>*  elePFChIso04_; */
/* 	vector<float>*  elePFPhoIso04_; */
/* 	vector<float>*  elePFNeuIso04_; */
/* 	vector<float>*  elePFClusEcalIso_; */
/* 	vector<float>*  elePFClusHcalIso_; */
/* 	vector<float>*  eleDr03TkSumPt_; */
/*         vector<float>*  eleScale_stat_up_; */
/* 	vector<float>*  eleScale_stat_dn_; */
/* 	vector<float>*  eleScale_syst_up_; */
/* 	vector<float>*  eleScale_syst_dn_; */
/* 	vector<float>*  eleScale_gain_up_; */
/* 	vector<float>*  eleScale_gain_dn_; */
/* 	vector<float>*  eleResol_rho_up_; */
/* 	vector<float>*  eleResol_rho_dn_; */
/* 	vector<float>*  eleResol_phi_up_; */
/* 	vector<float>*  eleResol_phi_dn_; */
	// Photon

	UInt_t          nPho_;
	Float_t         phoEt_[10];
	Float_t         phoEta_[10];
	Float_t         phoPhi_[10];
	Bool_t          phoIsEB_[10];
	Bool_t          phoIsEE_[10];
	Float_t         phoPFRelIso_[10];
	Float_t         phoPFRelChIso_[10];
	Bool_t          phoIDcutbased_[10];
	Int_t           phoVidWPBitmap_[10];
	Int_t           phoPixelSeed_[10];


	Float_t         phoR9_[10];
	Float_t         phoSIEIE_[10];
	Float_t         phoHoverE_[10];

	Int_t           phoGenPartIdx_[10];

/* 	Int_t    nPho_; */
/* 	vector<ULong_t>* phoTrg_; */
/* 	vector<ULong_t>* phoTrgFilter_; */
/* 	vector<bool>*   phoIsPhoton_; */
/* 	vector<float>*  phoE_; */
/* 	vector<float>*  phoEt_; */
/* 	vector<float>*  phoEta_; */
/* 	vector<float>*  phoPhi_; */
/* 	vector<float>*  phoCalibEt_; */
/* 	vector<float>*  phoCalibE_; */
/* 	vector<unsigned short>*    phoIDbit_; */
/* 	vector<vector<float> >*  phoEtVtx_; */
/* 	vector<vector<float> >*  phoEtaVtx_; */
/* 	vector<vector<float> >*  phoPhiVtx_; */
/* 	vector<float>*  phoVtx_x_; */
/* 	vector<float>*  phoVtx_y_; */
/* 	vector<float>*  phoVtx_z_; */
/* 	vector<float>*  phoSCPos_x_; */
/* 	vector<float>*  phoSCPos_y_; */
/* 	vector<float>*  phoSCPos_z_; */
/* 	vector<float>*  phoR9_; */
/* 	vector<float>*  phoCetaCorrE_; */
/* 	vector<float>*  phoCetaCorrEt_; */
/* 	vector<float>*  phoBremCorrE_; */
/* 	vector<float>*  phoBremCorrEt_; */
/* 	vector<float>*  phoFullCorrE_; */
/* 	vector<float>*  phoFullCorrEt_; */
/* 	vector<float>*  phoTrkIsoSolidDR03_; */
/* 	vector<float>*  phoTrkIsoHollowDR03_; */
/* 	vector<float>*  phoEcalIsoDR03_; */
/* 	vector<float>*  phoHcalIsoSolidDR03_; */
/* 	vector<float>*  phoHcalIsoDR03_; */
/* 	vector<float>*  phoHcalIsoDR0312_; */
/* 	vector<float>*  phoTrkIsoSolidDR04_; */
/* 	vector<float>*  phoTrkIsoHollowDR04_; */
/* 	vector<float>*  phoEcalIsoDR04_; */
/* 	vector<float>*  phoHcalIsoDR04_; */
/* 	vector<float>*  phoHcalIsoDR0412_; */
/* 	vector<float>*  phoHcalIsoSolidDR04_; */
/*         vector<float>*  phoScale_stat_up_; */
/*         vector<float>*  phoScale_stat_dn_; */
/*         vector<float>*  phoScale_syst_up_; */
/*         vector<float>*  phoScale_syst_dn_; */
/*         vector<float>*  phoScale_gain_up_; */
/*         vector<float>*  phoScale_gain_dn_; */
/*         vector<float>*  phoResol_rho_up_; */
/*         vector<float>*  phoResol_rho_dn_; */
/*         vector<float>*  phoResol_phi_up_; */
/*         vector<float>*  phoResol_phi_dn_;	 */
/* 	vector<vector<float> >*  phoCiCTrkIsoDR03_; */
/* 	vector<vector<float> >*  phoCiCTrkIsoDR04_; */
/* 	vector<float>*  phoCiCdRtoTrk_; */
/* 	vector<float>*  phoHoverE_; */
/* 	vector<float>*  phoHoverEBCdepth1_; */
/* 	vector<float>*  phoHoverEBCdepth2_; */
/* 	vector<float>*  phoHoverE12_; */
/* 	vector<int>*    phoNClus_; */
/* 	vector<float>*  phoSigmaIEtaIEtaFull5x5_; */
/* 	vector<float>*  phoSigmaIEtaIPhi_; */
/* 	vector<float>*  phoSigmaIPhiIPhi_; */
/* 	vector<float>*  phoEmax_; */
/* 	vector<float>*  phoE2ndMax_; */
/* 	vector<float>*  phoE3x3_; */
/* 	vector<float>*  phoE5x5_; */
/* 	vector<float>*  phoE2x5Max_; */
/* 	vector<float>*  phoE2x5Top_; */
/* 	vector<float>*  phoE2x5Bottom_; */
/* 	vector<float>*  phoE2x5Left_; */
/* 	vector<float>*  phoE2x5Right_; */
/* 	vector<float>*  phoE5x1_; */
/* 	vector<float>*  phoE1x5_; */
/* 	vector<float>*  phoE3x1_; */
/* 	vector<float>*  phoE1x3_; */
/* 	vector<float>*  phoE2x2_; */
/* 	vector<float>*  phoETop_; */
/* 	vector<float>*  phoEBottom_; */
/* 	vector<float>*  phoELeft_; */
/* 	vector<float>*  phoERight_; */
/* 	vector<float>*  phoSeedEta_; */
/* 	vector<float>*  phoSeedPhi_; */
/* 	vector<float>*  phoSeedE_; */
/* 	vector<float>*  phoCrysEta_; */
/* 	vector<float>*  phoCrysPhi_; */
/* 	vector<int>*    phoCrysIEta_; */
/* 	vector<int>*    phoCrysIPhi_; */
/* 	vector<float>*  phoRegrE_; */
/* 	vector<float>*  phoRegrEerr_; */
/* 	vector<float>*  phoPFChIso_; */
/* 	vector<float>*  phoPFPhoIso_; */
/* 	vector<float>*  phoPFNeuIso_; */
/* 	vector<vector<float>>*  phoPFRandConeChIso_; */
/* 	vector<vector<float>>*  phoPFRandConePhi_; */
/* //	vector<float>*  phoPFChIsoFrix7_; */
/* //	vector<float>*  phoPFPhoIso_; */
/* 	vector<float>*  phoSCRNeuIso_; */
/* 	vector<float>*  phoPFChIsoFrix704_; */
/* 	vector<float>*  phoPFPhoIso04_; */
/* 	vector<float>*  phoSCRNeuIso04_; */
/* 	//vector<float>*  phoPFChIsoFrix6_; */
/* 	//vector<float>*  phoPFPhoIsoFrix6_; */
/* 	vector<float>*  phoRandConeNeuIso_; */
/* 	vector<float>*  phoPFChIsoFrix604_; */
/* 	vector<float>*  phoPFPhoIsoFrix604_; */
/* 	vector<float>*  phoRandConeNeuIso04_; */
/* 	vector<float>*  phoSeedTime_; */
/* 	vector<float>*  phoLICTD_; */
/* 	vector<float>*  phoCiCPF4phopfIso005_; */
/* 	vector<float>*  phoCiCPF4phopfIso01_; */
/* 	vector<float>*  phoCiCPF4phopfIso02_; */
/* 	vector<float>*  phoCiCPF4phopfIso03_; */
/* 	vector<float>*  phoCiCPF4phopfIso04_; */
/* 	vector<float>*  phoCiCPF4phopfIso05_; */
/* 	vector<float>*  phoCiCPF4phopfIso06_; */
/* 	vector<float>*  phoCiCPF4phopfIso07_; */
/* 	vector<float>*  phoCiCPF4phopfIso08_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIso005_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIso01_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIso02_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIso03_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIso04_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIso05_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIso06_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIso07_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIso08_; */
	
/* 	vector<float>*  phoCiCPF4phopfIsoNoVETO005_; */
/* 	vector<float>*  phoCiCPF4phopfIsoNoVETO01_; */
/* 	vector<float>*  phoCiCPF4phopfIsoNoVETO02_; */
/* 	vector<float>*  phoCiCPF4phopfIsoNoVETO03_; */
/* 	vector<float>*  phoCiCPF4phopfIsoNoVETO04_; */
/* 	vector<float>*  phoCiCPF4phopfIsoNoVETO05_; */
/* 	vector<float>*  phoCiCPF4phopfIsoNoVETO06_; */
/* 	vector<float>*  phoCiCPF4phopfIsoNoVETO07_; */
/* 	vector<float>*  phoCiCPF4phopfIsoNoVETO08_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIsoNoVETO005_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIsoNoVETO01_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIsoNoVETO02_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIsoNoVETO03_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIsoNoVETO04_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIsoNoVETO05_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIsoNoVETO06_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIsoNoVETO07_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIsoNoVETO08_; */
	
/* 	vector<vector<float> >*  phoCiCPF4chgpfIso02AppVeto_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIso03AppVeto_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIso04AppVeto_; */
/* 	vector<float>*  phoCiCPF4phopfIso03AppVeto_; */
/* 	vector<float>*  phoCiCPF4phopfIso04AppVeto_; */
/* 	vector<float>*  phoCiCPF4phopfIso03AppVetoClean_; */
/* 	vector<float>*  phoCiCPF4phopfIso04AppVetoClean_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIso03Mod_; */
/* 	vector<vector<float> >*  phoCiCPF4chgpfIso04Mod_; */
	
/* 	vector<int>*    phoSeedDetId1_; */
/* 	vector<int>*    phoSeedDetId2_; */
/* 	vector<int>*    phoRecoFlag_; */
/* 	vector<int>*    phoPos_; */
/* 	vector<int>*    phoGenIndex_; */
/* 	vector<int>*    phoGenGMomPID_; */
/* 	vector<int>*    phoGenMomPID_; */
/* 	vector<float>*  phoGenMomPt_; */
/* 	vector<float>*  phoSCE_; */
/* 	vector<float>*  phoSCRawE_; */
/* 	vector<float>*  phoESEn_; */
/* 	vector<float>*  phoSCEta_; */
/* 	vector<float>*  phoSCPhi_; */
/* 	vector<float>*  phoSCEtaWidth_; */
/* 	vector<float>*  phoSCPhiWidth_; */
/* 	vector<float>*  phoSCBrem_; */
/* 	vector<int>*    phoOverlap_; */
/* 	vector<int>*    phohasPixelSeed_; */
/* 	//vector<int>*    phoSeedBCE_; */
/* 	vector<int>*    phoEleVeto_; */
/* 	Int_t    phoESDetId_[maxP][2]; */
/* 	Float_t  phoESHits_[maxP][3][62]; */
/* 	vector<float>*  phoESEffSigmaRR_x_; */
/* 	vector<float>*  phoESEffSigmaRR_y_; */
/* 	vector<float>*  phoESEffSigmaRR_z_; */
/* 	Float_t  phoESE1_[maxP][2]; */
/* 	Float_t  phoESE3_[maxP][2]; */
/* 	Float_t  phoESE5_[maxP][2]; */
/* 	Float_t  phoESE7_[maxP][2]; */
/* 	Float_t  phoESE11_[maxP][2]; */
/* 	Float_t  phoESE21_[maxP][2]; */
/* 	vector<int>*    phoNConv_; */
/* 	vector<int>*    phoConvNTrks_; */
/* 	vector<float>*  phoConvInvMass_; */
/* 	vector<float>*  phoConvCotTheta_; */
/* 	vector<float>*  phoConvEoverP_; */
/* 	vector<float>*  phoConvZofPVfromTrks_; */
/* 	vector<float>*  phoConvMinDist_; */
/* 	vector<float>*  phoConvdPhiAtVtx_; */
/* 	vector<float>*  phoConvdPhiAtCalo_; */
/* 	vector<float>*  phoConvdEtaAtCalo_; */
/* 	vector<float>*  phoConvTrkd0_x_; */
/* 	vector<float>*  phoConvTrkd0_y_; */
/* 	vector<float>*  phoConvTrkPin_x_; */
/* 	vector<float>*  phoConvTrkPin_y_; */
/* 	vector<float>*  phoConvTrkPout_x_; */
/* 	vector<float>*  phoConvTrkPout_y_; */
/* 	vector<float>*  phoConvTrkdz_x_; */
/* 	vector<float>*  phoConvTrkdz_y_; */
/* 	vector<float>*  phoConvTrkdzErr_x_; */
/* 	vector<float>*  phoConvTrkdzErr_y_; */
/* 	vector<float>*  phoConvChi2_; */
/* 	vector<float>*  phoConvChi2Prob_; */
/* 	vector<float>*  phoConvCharge1_; */
/* 	vector<float>*  phoConvCharge2_; */
/* 	vector<int>*    phoConvValidVtx_; */
/* 	vector<float>*  phoConvLikeLihood_; */
/* 	vector<float>*  phoConvP4_0_; */
/* 	vector<float>*  phoConvP4_1_; */
/* 	vector<float>*  phoConvP4_2_; */
/* 	vector<float>*  phoConvP4_3_; */
/* 	vector<float>*  phoConvVtx_x_; */
/* 	vector<float>*  phoConvVtx_y_; */
/* 	vector<float>*  phoConvVtx_z_; */
/* 	vector<float>*  phoConvVtxErr_x_; */
/* 	vector<float>*  phoConvVtxErr_y_; */
/* 	vector<float>*  phoConvVtxErr_z_; */
/* 	vector<float>*  phoConvPairMomentum_x_; */
/* 	vector<float>*  phoConvPairMomentum_y_; */
/* 	vector<float>*  phoConvPairMomentum_z_; */
/* 	vector<float>*  phoConvRefittedMomentum_x_; */
/* 	vector<float>*  phoConvRefittedMomentum_y_; */
/* 	vector<float>*  phoConvRefittedMomentum_z_; */
/* 	vector<int>*    SingleLegConv_; */
/* 	vector<float>*  phoPFConvRefitMom_x_; */
/* 	vector<float>*  phoPFConvRefitMom_y_; */
/* 	vector<float>*  phoPFConvRefitMom_z_; */
/* 	vector<vector<float> >* phoPFConvMom_x_; */
/* 	vector<vector<float> >* phoPFConvMom_y_; */
/* 	vector<vector<float> >* phoPFConvMom_z_; */
/* 	vector<vector<float> >* phoPFConvVtx_x_; */
/* 	vector<vector<float> >* phoPFConvVtx_y_; */
/* 	vector<vector<float> >* phoPFConvVtx_z_; */
/* 	vector<float>*  phoCaloPos_x_; */
/* 	vector<float>*  phoCaloPos_y_; */
/* 	vector<float>*  phoCaloPos_z_; */
	
	//new PF Variables stored when Matched to Reco:
	vector<int>*    PFRecoMatch_;
	vector<int>*    PFEleMatch_;
	vector<int>*    PFEleVeto_;    
	vector<float>*  PFPreShowerE1_;
	vector<float>*  PFPreShowerE2_;
	vector<float>*  MustacheEin_;
	vector<float>*  MustacheEOut_;
	vector<float>*  MustacheEtOut_;
	vector<float>*  PFLowestClustE_;
	vector<float>*  PFClustdEta_;
	vector<float>*  PFClustdPhi_;
	vector<float>*  PFClustRMSPhi_;
	vector<float>*  PFClustRMSPhiMust_;
	vector<float>*  PFClustEneCorr_;
	vector<int>*    pho_hasSLConvPf_;
	vector<int>*    pho_hasConvPf_;
	vector<float>*  pho_pfconvVtxZ_;
	vector<float>*  pho_pfconvVtxZErr_;
	vector<int>*    pho_nSLConv_;
	vector<vector<float> >*  pho_pfSLConvPos_x_;
	vector<vector<float> >*  pho_pfSLConvPos_y_;
	vector<vector<float> >*  pho_pfSLConvPos_z_;
	vector<vector<float> >*  pho_pfSLConvVtxZ_;

	// Muon
	UInt_t          nMuon_;
	Float_t         muPhi_[10];
	Float_t         muPt_[10];
	Float_t         muEta_[10];
	Int_t           muCharge_[10];
	Float_t         muMass_[10];
	Float_t         muPFRelIso_[10];
	Bool_t          muMediumId_[10];
	Bool_t          muSoftId_[10];
	Bool_t          muTightId_[10];

	/* Int_t nMu_; */
	/* vector<Int_t>*    muCharge_; */
	/* vector<Float_t>*  muPt_; */
	/* vector<Float_t>*  muEta_; */
	/* vector<Float_t>*  muPhi_; */
	/* vector<Float_t>*  muMass_; */
	/* vector<Float_t>*  muPFRelIso_; */
	/* vector<Bool_t>*   muTightID_; */
	/* vector<Bool_t>*   muMediumID_; */
	/* vector<Bool_t>*   muSoftID_; */
	
	//Taus
	Int_t nTau_;
	// decay mode discriminators
	vector<bool> tauDecayModeFinding_;
	vector<bool> tauAgainstElectronLooseMVA3_;
	// discriminators against light leptons
	vector<bool> tauAgainstElectronMediumMVA3_;
	vector<bool> tauAgainstElectronTightMVA3_;
	vector<bool> tauAgainstElectronVTightMVA3_;
	vector<bool> tauAgainstElectronDeadECAL_;
	vector<bool> tauAgainstMuonLoose2_;
	vector<bool> tauAgainstMuonMedium2_;
	vector<bool> tauAgainstMuonTight2_;
	// isolation
	vector<bool> tauCombinedIsolationDeltaBetaCorrRaw3Hits_;
	vector<bool> tauLooseCombinedIsolationDeltaBetaCorr3Hits_;
	vector<bool> tauMediumCombinedIsolationDeltaBetaCorr3Hits_;
	vector<bool> tauTightCombinedIsolationDeltaBetaCorr3Hits_;
	// kinematics
	vector<float>* tauEta_;
	vector<float>* tauPhi_;
	vector<float>* tauPt_;
	vector<float>* tauEt_;
	vector<float>* tauCharge_;
	vector<int>*   tauDecayMode_;
	vector<float>* tauEMFraction_;
	vector<float>* tauHCAL3x3OverPLead_;
	vector<float>* tauHCALMaxOverPLead_;
	vector<float>* tauHCALTotOverPLead_;
	vector<float>* tauIsolationPFChargedHadrCandsPtSum_;
	vector<float>* tauIsolationPFGammaCandsEtSum_;
	vector<float>* tauLeadPFChargedHadrCandsignedSipt_;
	vector<bool>  tauLeadChargedHadronExists_;
	vector<float>* tauLeadChargedHadronEta_;
	vector<float>* tauLeadChargedHadronPhi_;
	vector<float>* tauLeadChargedHadronPt_;
	
	//PFPhotons  
	Int_t    nPFPho_;  
	vector<float>* PFPhoE_;  
	vector<float>* PFPhoEt_;  
	vector<float>* PFPhoEta_;  
	vector<float>* PFPhoPhi_;  
	vector<int>*   PFPhoType_;
	vector<float>* PFPhoIso_;
	
	// develop-based variables, ignore 
	Int_t    nPFPhoClust_[maxP];
	Float_t  PFPhoMaxEtaWidth_[maxP];
	Float_t  PFPhoMaxPhiWidth_[maxP];  
	Int_t    nPFPho_clust; 
	Int_t    nPFPhoCrys_[maxP][20]; 
	Float_t  PFPho_clusteta_[maxP][20];  
	Float_t  PFPho_clustphi_[maxP][20];  
	Float_t  PFPho_clustE_[maxP][20];
	Float_t  PFPho_clustSCEfrac_[maxP][20];
	Float_t  PFPho_clustH_[maxP][20];
	Float_t  PFPho_clustEseed_[maxP][20];
	Float_t  PFPho_clustEtop_[maxP][20];
	Float_t  PFPho_clustEbottom_[maxP][20];
	Float_t  PFPho_clustEleft_[maxP][20];
	Float_t  PFPho_clustEright_[maxP][20];
	Float_t  PFPho_clustE3x3_[maxP][20];
	Float_t  PFPho_clustE3x1_[maxP][20];
	Float_t  PFPho_clustE1x3_[maxP][20];
	Float_t  PFPho_clustE5x5_[maxP][20];
	Float_t  PFPho_clustE5x1_[maxP][20];
	Float_t  PFPho_clustE1x5_[maxP][20];
	Float_t  PFPho_clustE2x5Max_[maxP][20];
	Float_t  PFPho_clustE2x5Top_[maxP][20];
	Float_t  PFPho_clustE2x5Bottom_[maxP][20];
	Float_t  PFPho_clustE2x5Left_[maxP][20];
	Float_t  PFPho_clustE2x5Right_[maxP][20];
	Float_t  PFPho_clustER9_[maxP][20];
	Float_t  PFPho_clustEt_[maxP][20];
	Float_t  PFPho_sigIetaIeta_[maxP][20];
	Float_t  PFPho_sigIphiIphi_[maxP][20];
	Float_t  PFPho_crysphi_[maxP][20];
	Float_t  PFPho_cryseta_[maxP][20];
	Float_t  PFPho_crysphifix_[maxP][20]; 	 
	Float_t  PFPho_crysetafix_[maxP][20]; 	 
	Float_t  PFPho_modphifix_[maxP][20]; 	 
	Float_t  PFPho_modetafix_[maxP][20]; 	 
	Float_t  PFPho_Smodphifix_[maxP][20]; 	 
	Float_t  PFPho_Smodetafix_[maxP][20];
	Float_t  PFPho_crysphiTilt_[maxP][20]; 	 
	Float_t  PFPho_crysthetaTilt_[maxP][20];
	
	Float_t  PFPho_crysxfix_[maxP][20]; 	 
	Float_t  PFPho_crysyfix_[maxP][20]; 	 
	Float_t  PFPho_modxfix_[maxP][20]; 	 
	Float_t  PFPho_modyfix_[maxP][20]; 	 
	Float_t  PFPho_Smodxfix_[maxP][20]; 	 
	Float_t  PFPho_Smodyfix_[maxP][20];
	Float_t  PFPho_ES1Energy_[maxP][20];
	Float_t  PFPho_ES2Energy_[maxP][20];
	Int_t    nPFPho_ES1clust;
	Int_t    nPFPhoES1Clust_[maxP];
	Float_t  PFPho_ES1clustE_[maxP][30];
	Float_t  PFPho_ES1Clust_perEEclust_[maxP][30];
	Int_t    nPFPho_ES1Clust_perEEclust_[maxP][20];
	Int_t    PFPho_ES1size_perEEclust_[maxP][20];
	Float_t  PFPho_ES1weightedX_perEEclust_[maxP][20]; 
	Float_t  PFPho_ES1linkD_perEEclust_[maxP][20];
	Float_t  PFPho_ES1clustx_[maxP][30];
	Float_t  PFPho_ES1clusty_[maxP][30];
	Float_t  PFPho_ES1clustLinkDist_[maxP][30];
	Float_t  PFPho_ES1clusteta_[maxP][30];
	Float_t  PFPho_ES1clustphi_[maxP][30];
	Float_t  PFPho_ES1clustz_[maxP][30];
	Int_t    PFPho_ES1_stripsDetId_[maxP][30][30];
	Float_t  PFPho_ES1_stripsX_[maxP][30][30];
	Float_t  PFPho_ES1_stripsY_[maxP][30][30];
	Float_t  PFPho_ES1_stripsZ_[maxP][30][30];
	Float_t  PFPho_ES1_stripsEta_[maxP][30][30];
	Float_t  PFPho_ES1_stripsPhi_[maxP][30][30];
	Float_t  PFPho_ES1_stripsFrac_[maxP][30][30];
	Float_t  PFPho_ES1_stripsE_[maxP][30][30];
	Int_t    PFPho_ES1size_[maxP][30];
	Float_t  PFPho_weightedXst_perES1clust_[maxP][30];
	
	Int_t    nPFPho_ES2clust;
	Int_t    nPFPhoES2Clust_[maxP];
	Float_t  PFPho_ES2clustE_[maxP][30];
	Float_t  PFPho_ES2Clust_perEEclust_[maxP][30];
	Int_t    nPFPho_ES2Clust_perEEclust_[maxP][20];
	Int_t    PFPho_ES2size_perEEclust_[maxP][20];
	Float_t  PFPho_ES2weightedY_perEEclust_[maxP][20];
	Float_t  PFPho_ES_siphiiphi_[maxP][20];
	Float_t  PFPho_ES_sietaieta_[maxP][20];
	Float_t  PFPho_ES2linkD_perEEclust_[maxP][20];
	Float_t  PFPho_ES2clustx_[maxP][30];
	Float_t  PFPho_ES2clusty_[maxP][30];
	Float_t  PFPho_ES2clustLinkDist_[maxP][30];
	Float_t  PFPho_ES2clusteta_[maxP][30];
	Float_t  PFPho_ES2clustphi_[maxP][30];
	Float_t  PFPho_ES2clustz_[maxP][30];
	Int_t    PFPho_ES2_stripsDetId_[maxP][30][30];
	Float_t  PFPho_ES2_stripsX_[maxP][30][30];
	Float_t  PFPho_ES2_stripsY_[maxP][30][30];
	Float_t  PFPho_ES2_stripsZ_[maxP][30][30];
	Float_t  PFPho_ES2_stripsEta_[maxP][30][30];
	Float_t  PFPho_ES2_stripsPhi_[maxP][30][30];
	Float_t  PFPho_ES2_stripsFrac_[maxP][30][30];
	Float_t  PFPho_ES2_stripsE_[maxP][30][30];
	Int_t    PFPho_ES2size_[maxP][30];
	Float_t  PFPho_weightedYst_perES2clust_[maxP][30];
	
	Int_t    PFPho_crysIphi_[maxP][20];
	Int_t    PFPho_crysIeta_[maxP][20];
	Int_t    PFPho_crysIX_[maxP][20];
	Int_t    PFPho_crysIY_[maxP][20];
	Float_t  PFPhoMustEout_[maxP];
	Float_t  PFPhoMustEin_[maxP];  
	Float_t  PFPhoMustEtOut_[maxP];
	Float_t  PFPhoMustExcl_[maxP];
	Int_t    hasGSF_[maxP];
	Float_t  PFPhoGSFPin_[maxP][3];  
	Float_t  PFPhoGSFPout_[maxP];  
	Float_t  PFPhoGSFChi2NDF_[maxP];  
	Int_t    PFPhoCharge_[maxP];  
	Float_t  PFPhoGsf_In_[maxP][3];
	Float_t  PFPhoGsf_Theta_[maxP];
	Float_t  PFPhoGsf_ThetaErr_[maxP];  
	Float_t  PFPhoGsfeta_In_[maxP];  
	Float_t  PFPhoGsfeta_Out_[maxP];  
	Float_t  PFPhoGsfphi_In_[maxP];  
	Float_t  PFPhoGsfphi_Out_[maxP];
	Int_t    nPFPho_tks;  
	Int_t    nPFPhoTks_[maxP];
	Int_t    PFPho_tkq_[maxP][20];  
	Float_t  PFPho_tketa_[maxP][20];  
	Float_t  PFPho_tkphi_[maxP][20];  
	Float_t  PFPho_tkpt_[maxP][20];  
	Float_t  PFPho_tkR_[maxP][20];  
	Float_t  PFPho_tkZ_[maxP][20];
	Float_t  PFPho_tkTheta_[maxP][20];
	Float_t  PFPho_tkerreta_[maxP][20];
	Float_t  PFPho_tkerrphi_[maxP][20];
	Float_t  PFPho_tkerrthet_[maxP][20];
	Float_t  PFPho_tkPos_[maxP][20][3];
	Int_t    PFPhoIsConv_[maxP];  
	Float_t  PFPhoTrkIsoHollowDR04_[maxP];  
	Float_t  PFPhoEcalIsoDR04_[maxP];  
	Float_t  PFPhoHcalIsoDR04_[maxP];  
	Float_t  PFPhoHoverE_[maxP];  
	Int_t    isIsoPFPho_[maxP];  
	Float_t  PFPhoR9_[maxP];
	Float_t  PFPhoIetaIeta_[maxP]; 
	Float_t  PFPhoE5x5_[maxP];
	Float_t  PFPhoE3x3_[maxP];
	Int_t    nPFPhoIso_[maxP];
	Float_t  PFPho_isoeta_[maxP][50];  
	Float_t  PFPho_isophi_[maxP][50];  
	Float_t  PFPho_isodeltaR_[maxP][50];  
	Float_t  PFPho_isovalue_[maxP][50];    
	Float_t  PFPho_isotype_[maxP][50]; 
	
	//PFElectrons:  
	Int_t    nPFEle_;
	Int_t    nPFEleClust_[maxP];
	Float_t  PFElePt_[maxP];  
	Float_t  PFEleEta_[maxP];  
	Float_t  PFElePhi_[maxP];
	Float_t  PFEleMaxEtaWidth_[maxP];
	Float_t  PFEleMaxPhiWidth_[maxP];
	Int_t    nPFEle_clust;  
	Int_t    nPFEleCrys_[maxP][20];
	Float_t  PFEle_clusteta_[maxP][20];  
	Float_t  PFEle_clustphi_[maxP][20];  
	Float_t  PFEle_clustE_[maxP][20];
	Float_t  PFEle_clustSCEfrac_[maxP][20];
	Float_t  PFEle_clustEt_[maxP][20];
	Float_t  PFEle_clustH_[maxP][20];
	Float_t  PFEle_clustEseed_[maxP][20];
	Float_t  PFEle_clustEtop_[maxP][20];
	Float_t  PFEle_clustEbottom_[maxP][20];
	Float_t  PFEle_clustEleft_[maxP][20];
	Float_t  PFEle_clustEright_[maxP][20];
	Float_t  PFEle_clustE3x3_[maxP][20];
	Float_t  PFEle_clustE3x1_[maxP][20];
	Float_t  PFEle_clustE1x3_[maxP][20];
	Float_t  PFEle_clustE5x5_[maxP][20];
	Float_t  PFEle_clustE5x1_[maxP][20];
	Float_t  PFEle_clustE1x5_[maxP][20];
	Float_t  PFEle_clustE2x5Max_[maxP][20];
	Float_t  PFEle_clustE2x5Top_[maxP][20];
	Float_t  PFEle_clustE2x5Bottom_[maxP][20];
	Float_t  PFEle_clustE2x5Left_[maxP][20];
	Float_t  PFEle_clustE2x5Right_[maxP][20];
	Float_t  PFEle_clustER9_[maxP][20];
	Int_t    PFEle_crysIphi_[maxP][20];
	Int_t    PFEle_crysIeta_[maxP][20];
	Int_t    PFEle_crysIX_[maxP][20];
	Int_t    PFEle_crysIY_[maxP][20];
	Float_t  PFEle_crysphiTilt_[maxP][20]; 	 
	Float_t  PFEle_crysthetaTilt_[maxP][20];
	Float_t  PFEle_sigIetaIeta_[maxP][20];
	Float_t  PFEle_sigIphiIphi_[maxP][20];
	Float_t  PFEle_crysx_[maxP][20];
	Float_t  PFEle_crysy_[maxP][20];
	Float_t  PFEle_crysxfix_[maxP][20]; 	 
	Float_t  PFEle_crysyfix_[maxP][20]; 	 
	Float_t  PFEle_modxfix_[maxP][20]; 	 
	Float_t  PFEle_modyfix_[maxP][20]; 	 
	Float_t  PFEle_Smodxfix_[maxP][20]; 	 
	Float_t  PFEle_Smodyfix_[maxP][20];
	Float_t  PFEle_cryseta_[maxP][20];
	Float_t  PFEle_crysphi_[maxP][20];
	Float_t  PFEle_crysetafix_[maxP][20]; 	 
	Float_t  PFEle_crysphifix_[maxP][20]; 	 
	Float_t  PFEle_modetafix_[maxP][20]; 	 
	Float_t  PFEle_modphifix_[maxP][20]; 	 
	Float_t  PFEle_Smodetafix_[maxP][20]; 	 
	Float_t  PFEle_Smodphifix_[maxP][20];
	Float_t  PFEle_ES1Energy_[maxP][20];
	Float_t  PFEle_ES2Energy_[maxP][20];
	Int_t    nPFEle_ES1clust;
	Int_t    nPFEleES1Clust_[maxP];
	Float_t  PFEle_ES1clustE_[maxP][30];
	Float_t  PFEle_ES1clusteta_[maxP][30];
	Float_t  PFEle_ES1clustphi_[maxP][30];
	Float_t  PFEle_ES1clustx_[maxP][30];
	Float_t  PFEle_ES1clusty_[maxP][30];
	Float_t  PFEle_ES1clustz_[maxP][30];
	Int_t    nPFEle_ES2clust;
	Int_t    nPFEleES2Clust_[maxP];
	Float_t  PFEle_ES2clustE_[maxP][30];
	Float_t  PFEle_ES2clusteta_[maxP][30];
	Float_t  PFEle_ES2clustphi_[maxP][30];
	Float_t  PFEle_ES2clustx_[maxP][30];
	Float_t  PFEle_ES2clusty_[maxP][30];
	Float_t  PFEle_ES2clustz_[maxP][30];
	Float_t  PFEleMustEtOut_[maxP];
	Float_t  PFEleMustExcl_[maxP];
	Float_t  PFEleMustEout_[maxP];
	Float_t  PFEleMustEin_[maxP];  
	Float_t  PFEleHoverE_[maxP];  
	Float_t  PFEleEoverP_[maxP];  
	Float_t  PFElePin_[maxP][3];  
	Float_t  PFElePout_[maxP];  
	Float_t  PFEleChi2NDF_[maxP];  
	Int_t    PFEleCharge_[maxP];  
	Float_t  PFEleEn_[maxP];  
	Float_t  PFEleSCEta_[maxP];  
	Float_t  PFEleSCPhi_[maxP];  
	Float_t  PFEleSCRawEn_[maxP];
	Float_t  PFGsf_In_[maxP][3];
	Float_t  PFGsf_Theta_[maxP];
	Float_t  PFGsf_ThetaErr_[maxP];  
	Float_t  PFGsfeta_In_[maxP];  
	Float_t  PFGsfeta_Out_[maxP];  
	Float_t  PFGsfphi_In_[maxP];  
	Float_t  PFGsfphi_Out_[maxP];  
	Int_t    nPFEleIso_[maxP];
	Float_t  PFEle_isoeta_[maxP][50];  
	Float_t  PFEle_isophi_[maxP][50];  
	Float_t  PFEle_isodeltaR_[maxP][50];  
	Float_t  PFEle_isovalue_[maxP][50];    
	Float_t  PFEle_isotype_[maxP][50]; 
	//PFHadrons:  //charged:  
	Int_t    nPFchad_;  
	Int_t    PFhad_charge_[maxP];  
	Float_t  PFchad_Eta_[maxP];  
	Float_t  PFchad_Phi_[maxP];  
	Float_t  PFchad_Pt_[maxP];  
	Float_t  PFchad_E_[maxP];  
	Float_t  PFchad_P_[maxP];  
	Float_t  PFchad_Ecal_[maxP];  
	Float_t  PFchad_Hcal_[maxP];  
	//neutral:  
	Int_t    nPFnhad_;  
	Float_t  PFnhad_Eta_[maxP];  
	Float_t  PFnhad_Phi_[maxP]; 
	Float_t  PFnhad_Pt_[maxP];  
	Float_t  PFnhad_E_[maxP];  
	Float_t  PFnhad_P_[maxP];  
	Float_t  PFnhad_Hcal_[maxP];    
	//PFClusters  //ECAL:  
	Int_t    nPFEcal_;  
	Float_t  PFEcal_eta_[maxP];  
	Float_t  PFEcal_phi_[maxP];  
	Float_t  PFEcal_energy_[maxP];    
	// rho correction
	Float_t  rho25_;
	Float_t  rho25_neu_;
	Float_t  rho25_muPFiso_;
	Float_t  rho25_elePFiso_;
	Float_t  rho2011_;
	Float_t  rho_;
	
	/* //QGtag */
	/* Float_t  QGTag_MLP_; */
	/* Float_t  QGTag_likelihood_; */
	
	/* //SubJet */
	/* Int_t nCA8Jet_; */
	/* vector<float>*  CA8JetPt_; */
	/* vector<float>*  CA8JetEta_; */
	/* vector<float>*  CA8JetPhi_; */
	/* vector<float>*  CA8JetMass_; */
	/* vector<float>*  CA8JetArea_; */
	/* vector<float>*  CA8Jet_tau1_; */
	/* vector<float>*  CA8Jet_tau2_; */
	/* vector<float>*  CA8Jet_tau3_; */
	/* vector<float>*  CA8prunedJetMass_; */
	/* vector<int>*    CA8prunedJet_nSubJets_; */
	/* vector<vector<float> >*  CA8prunedJet_SubjetPt_; */
	/* vector<vector<float> >*  CA8prunedJet_SubjetEta_; */
	/* vector<vector<float> >*  CA8prunedJet_SubjetPhi_; */
	/* vector<vector<float> >*  CA8prunedJet_SubjetMass_; */



	// Jet

        UInt_t          nJet_;
	Float_t         jetPt_[40];
	Float_t         jetEta_[40];
	Float_t         jetPhi_[40];
	Float_t         jetMass_[40];
	Float_t         jetRawFactor_[40];
	Int_t           jetID_[40];
	Float_t         jetArea_[40];

	Float_t         jetBtagCMVA_[40];
	Float_t         jetBtagCSVV2_[40];
	Float_t         jetBtagDeepB_[40];
	Float_t         jetBtagDeepC_[40];
	Float_t         jetBtagDeepFlavB_[40];

	Int_t           jetHadFlvr_[40];

	Int_t           jetGenJetIdx_[40];
	
	/* // Jet */
	/* Int_t    nJet_; */
        /* Int_t    nfwdJet_; */
	/* vector<ULong_t>* jetTrg_; */
	/* vector<int>*    jetAlgo_; */
	/* vector<float>*  jetEn_; */
	/* vector<float>*  jetPt_; */
        /* vector<float>*  fwdJetPt_; */
	/* vector<float>*  jetEta_; */
	/* vector<float>*  jetPhi_; */
	/* vector<float>*  jetEt_; */
	/* vector<float>*  jetCHF_; */
	/* vector<float>*  jetNHF_; */
	/* vector<float>*  jetCEF_; */
	/* vector<float>*  jetNEF_; */
	/* vector<int>*    jetNCH_; */
	/* vector<int>*    jetNNP_; */
	/* vector<float>*  jetMUF_; */
	/* vector<float>*  jetHFHAE_; */
	/* vector<float>*  jetHFEME_; */
	/* vector<int>*    jetNConstituents_; */
	/* vector<float>*  jetRawPt_; */
	/* vector<float>*  jetRawEn_; */
	/* vector<float>*  jetCharge_; */
	/* vector<float>*  jetArea_; */
	/* vector<float>*  jetP4Smear_; */
	/* vector<float>*  jetP4SmearUp_; */
	/* vector<float>*  jetP4SmearDo_; */
	/* vector<float>*  AK8JetCHF_; */
	/* vector<float>*  AK8JetNHF_; */
	/* vector<float>*  AK8JetCEF_; */
	/* vector<float>*  AK8JetNEF_; */
	/* vector<int>*    AK8JetNCH_; */
	/* /\* vector<float>*  jetHFHAE_; *\/ */
	/* /\* vector<float>*  jetHFEME_; *\/ */
	/* vector<int>*    jetHadFlvr_; */
	/* vector<int>*    jetPartonID_; */
	/* vector<int>*    AK8Jetnconstituents_; */
	/* vector<float>*  jetpfCombinedMVAV2BJetTags_; // recommended */
	/* vector<float>*  jetCSV2BJetTags_; */
	/* vector<float>*  jetDeepCSVTags_b_; */
	/* vector<float>*  jetDeepCSVTags_bb_; */
	/* vector<float>*  jetDeepCSVTags_c_; */
	/* vector<float>*  jetDeepCSVTags_cc_; */
	/* vector<float>*  jetDeepCSVTags_udsg_; */
	/* vector<float>*  jetJetProbabilityBJetTags_; */
	/* vector<float>*  jetJetBProbabilityBJetTags_; */
	/* vector<vector<float> >*  jetBetaStar_; */
	/* //vector<int>*    jetGenJetIndex_; */
	/* vector<float>*  jetGenJetEn_; */
	/* vector<float>*  jetGenJetPt_; */
	/* vector<float>*  jetGenJetEta_; */
	/* vector<float>*  jetGenJetPhi_; */
	/* vector<int>*    jetGenPartonID_; */
	/* vector<float>*  jetGenEn_; */
	/* vector<float>*  jetGenPt_; */
	/* vector<float>*  jetGenEta_; */
	/* vector<float>*  jetGenPhi_; */
	/* vector<int>*    jetGenPartonMomID_; */
	
	/* // Jet ID MVA variables */
	/* vector<vector<float> >*  jetMVAs_; */
	/* vector<vector<int> >*    jetWPLevels_; */
	
	/* vector<vector<float> >* jetMVAsExt_simple_; */
	/* vector<vector<float> >* jetMVAsExt_full_; */
	/* vector<vector<float> >* jetMVAsExt_cutBased_; */
	/* vector<vector<float> >* jetMVAsExt_philv1_; */
	/* vector<vector<int> >* jetWPLevelsExt_simple_; */
	/* vector<vector<int> >* jetWPLevelsExt_full_; */
	/* vector<vector<int> >* jetWPLevelsExt_cutBased_; */
	/* vector<vector<int> >* jetWPLevelsExt_philv1_; */
	
	/* //std::vector<PileupJetIdAlgo* > pujetIDalgos_; */
	/* vector<float>* jetDRMean_; */
	/* vector<float>* jetDR2Mean_; */
	/* vector<float>* jetDZ_; */
	/* vector<float>* jetFrac01_; */
	/* vector<float>* jetFrac02_; */
	/* vector<float>* jetFrac03_; */
	/* vector<float>* jetFrac04_; */
	/* vector<float>* jetFrac05_; */
	/* vector<float>* jetFrac06_; */
	/* vector<float>* jetFrac07_; */
	/* vector<float>* jetBeta_; */
	/* vector<float>* jetBetaStarCMG_; */
	/* vector<float>* jetBetaStarClassic_; */
	/* vector<vector<float> >* jetBetaExt_; */
	/* vector<vector<float> >* jetBetaStarCMGExt_; */
	/* vector<vector<float> >* jetBetaStarClassicExt_; */
	/* vector<float>* jetNNeutrals_; */
	/* vector<float>* jetNCharged_; */
	/* vector<bool>*  jetPFLooseId_; */
	/* vector<int>*  jetID_; */
	/* // b-jet regression variables */
	/* vector<float>* jetMt_; */
	/* vector<float>* jetJECUnc_; */
	/* vector<float>* jetLeadTrackPt_; */
	/* vector<float>* jetVtxPt_; */
	/* vector<float>* jetVtxMass_; */
	/* vector<float>* jetVtx3dL_; */
	/* vector<float>* jetVtx3deL_; */
	/* vector<float>* jetSoftLeptPt_; */
	/* vector<float>* jetSoftLeptPtRel_; */
	/* vector<float>* jetSoftLeptdR_; */
	/* vector<float>* jetSoftLeptIdlooseMu_; */
	/* vector<float>* jetSoftLeptIdEle95_; */
	/* vector<float>* jetDPhiMETJet_; */
	/* vector<float>* jetPuJetIdL_; */
	/* vector<float>* jetPuJetIdM_; */
	/* vector<float>* jetPuJetIdT_; */
	/* // Low Pt Jets */
	/* Int_t   nLowPtJet_; */
	/* vector<float>* jetLowPtEn_; */
	/* vector<float>* jetLowPtPt_; */
	/* vector<float>* jetLowPtEta_; */
	/* vector<float>* jetLowPtPhi_; */
	/* vector<float>* jetLowPtCharge_; */
	/* vector<float>* jetLowPtEt_; */
	/* vector<float>* jetLowPtRawPt_; */
	/* vector<float>* jetLowPtRawEn_; */
	/* vector<float>* jetLowPtArea_; */
	/* vector<float>* jetLowPtGenJetEn_; */
	/* vector<float>* jetLowPtGenJetPt_; */
	/* vector<float>* jetLowPtGenJetEta_; */
	/* vector<float>* jetLowPtGenJetPhi_; */
	/* vector<int>*   jetLowPtPartonID_; */
	/* vector<int>*   jetLowPtGenPartonID_; */
	/* vector<float>* jetLowPtGenEn_; */
	/* vector<float>* jetLowPtGenPt_; */
	/* vector<float>* jetLowPtGenEta_; */
	/* vector<float>* jetLowPtGenPhi_; */
	/* vector<bool>* jetPFLooseID_;	 */

	// Converted Photon Collection
	/* Int_t    nConv_; */
	/* vector<int>*    convBarrel_; */
	/* vector<int>*    convScInd_; */
	/* vector<float>*  convP4_x_; */
	/* vector<float>*  convP4_y_; */
	/* vector<float>*  convP4_z_; */
	/* vector<float>*  convP4_E_; */
	/* vector<float>*  convVtx_x_; */
	/* vector<float>*  convVtx_y_; */
	/* vector<float>*  convVtx_z_; */
	/* vector<float>*  convVtxErr_x_; */
	/* vector<float>*  convVtxErr_y_; */
	/* vector<float>*  convVtxErr_z_; */
	/* vector<float>*  convPairMomentum_x_; */
	/* vector<float>*  convPairMomentum_y_; */
	/* vector<float>*  convPairMomentum_z_; */
	/* vector<float>*  convRefittedMomentum_x_; */
	/* vector<float>*  convRefittedMomentum_y_; */
	/* vector<float>*  convRefittedMomentum_z_; */
	/* vector<int>*    convNTracks_; */
	/* vector<float>*  convPairInvMass_; */
	/* vector<float>*  convPairCotThetaSep_; */
	/* vector<float>*  convEoverP_; */
	/* vector<float>*  convDistOfMinApproach_; */
	/* vector<float>*  convDPhiTrksAtVtx_; */
	/* vector<float>*  convDPhiTrksAtEcal_; */
	/* vector<float>*  convDEtaTrksAtEcal_; */
	/* vector<float>*  convDxy_; */
	/* vector<float>*  convDz_; */
	/* vector<float>*  convLxy_; */
	/* vector<float>*  convLz_; */
	/* vector<float>*  convZofPrimVtxFromTrks_; */
	/* vector<int>*    convNHitsBeforeVtx_0_; */
	/* vector<int>*    convNHitsBeforeVtx_1_; */
	/* vector<int>*    convNSharedHits_; */
	/* vector<int>*    convValidVtx_; */
	/* vector<float>*  convMVALikelihood_; */
	/* // vertex quantities  */
	/* vector<float>*  convChi2_; */
	/* vector<float>*  convChi2Probability_; */
	/* // per track quantities */
	/* vector<float>*  convTk1Dz_; */
	/* vector<float>*  convTk2Dz_; */
	/* vector<float>*  convTk1DzErr_; */
	/* vector<float>*  convTk2DzErr_; */
	/* vector<int>*    convCh1Ch2_; */
	/* vector<float>*  convTk1D0_; */
	/* vector<float>*  convTk1Pout_; */
	/* vector<float>*  convTk1Pin_; */
	/* vector<float>*  convTk2D0_; */
	/* vector<float>*  convTk2Pout_; */
	/* vector<float>*  convTk2Pin_; */
	
	/* std::vector<std::vector<Float_t> >* phoPFIsoChargedVec; */
	/* std::vector<Float_t>* phoPFIsoNeutralVec; */
	/* std::vector<Float_t>* phoPFIsoPhotonVec; */

        Bool_t   HLT_Ele32_eta2p1_WPTight_Gsf_;
        Bool_t   HLT_IsoMu24_;
        Bool_t   HLT_IsoTkMu24_;
        Bool_t   HLT_Ele32_WPTight_Gsf_L1DoubleEG_;
        Bool_t   HLT_IsoMu24_eta2p1_;
        Bool_t   HLT_IsoMu27_;

        Bool_t   HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_;
        Bool_t   HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_;
        Bool_t   HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_;
        Bool_t   HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_;
        Bool_t   HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_;
        Bool_t   HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_;




};
#endif
