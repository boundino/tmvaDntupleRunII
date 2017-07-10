float ptmin;
float ptmax;

TString inputSname;
TString inputBname;
TString mycut;
TString mycuts;
TString mycutb;
TString mycutg;
TString colsyst;

TString inputSname_PP = "/data/HeavyFlavourRun2/MC2015/Dntuple/pp/ntD_EvtBase_20160513_DfinderMC_pp_20160502_dPt0tkPt0p5_D0Dstar_prompt_Dpt2Dy1p1tkPt0p7tkEta2Decay2p9Dalpha0p14Skim_pthatweight.root";
TString inputBname_PP = "/data/jisun/ppMB2015fullstats/skim_Dntuple_crab_pp_MinimumBias1to20_AOD_D0Dsy1p1_tkpt0p5eta2p0_04122016.root";

TString inputSname_PbPb="/data/HeavyFlavourRun2/MC2015/Dntuple/PbPb/ntD_EvtBase_20160513_DfinderMC_PbPb_20160502_dPt1tkPt0p5_D0_prompt_Dpt2Dy1p1tkPt0p7tkEta2Decay2p9Dalpha0p14Skim_pthatweight.root";
TString inputBname_PbPb="/data/wangj/Data2015/Dntuple/PbPb/HF2and_skim_MB1to7_highpuritytk_D0_tkpt0p7eta1p5_goldenjson_02222016_1p.root";

TString mycut_PP = "abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&Dy>-1.&&Dy<1.&&Dtrk1highPurity&&Dtrk2highPurity&&Dtrk1Pt>1.0&&Dtrk2Pt>1.0&&Dtrk1PtErr/Dtrk1Pt<0.3&&Dtrk2PtErr/Dtrk2Pt<0.3&&abs(Dtrk1Eta)<1.5&&abs(Dtrk2Eta)<1.5&&(DlxyBS/DlxyBSErr)>2.5&&Dalpha<0.12&&(DsvpvDistance/DsvpvDisErr)>2.9";
TString mycuts_PP = Form("(%s)&&Dgen==23333",mycut_PP.Data());
TString mycutb_PP = Form("(%s)&&abs(Dmass-1.865)>0.1&&abs(Dmass-1.865)<0.15",mycut_PP.Data());
TString mycutg_PP = "((GisSignal==1||GisSignal==2)&&(Gy>-1&&Gy<1))";

TString mycut_PbPb="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&&abs(PVz)<15&&Dy>-1.&&Dy<1.&&Dtrk1highPurity&&Dtrk2highPurity&&Dtrk1Pt>1.0&&Dtrk2Pt>1.0&&Dtrk1PtErr/Dtrk1Pt<0.3&&Dtrk2PtErr/Dtrk2Pt<0.3&&abs(Dtrk1Eta)<1.5&&abs(Dtrk2Eta)<1.5&&(DlxyBS/DlxyBSErr)>2.5&&Dalpha<0.12&&(DsvpvDistance/DsvpvDisErr)>2.9";
TString mycuts_PbPb = Form("(%s)&&Dgen==23333",mycut_PbPb.Data());
TString mycutb_PbPb = Form("(%s)&&abs(Dmass-1.865)>0.1&&abs(Dmass-1.865)<0.15",mycut_PbPb.Data()); 
TString mycutg_PbPb = "((GisSignal==1||GisSignal==2)&&(Gy>-1&&Gy<1))";

