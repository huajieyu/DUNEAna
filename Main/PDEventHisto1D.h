/**
 * \file PDEventHisto1D.h
 *
 * \ingroup DataTypes
 * 
 * \brief Class def header for a class PDEventHisto1D
 *
 * @author jiangl
 */

/** \addtogroup DataTypes

    @{*/
#ifndef __MAIN_PDEVENTHISTO1D_H__
#define __MAIN_PDEVENTHISTO1D_H__
#include <iostream>
#include <sstream>
#include <string>
#include <ctime>
#include <vector>
#include <map>
#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include <fstream>
#include <math.h>
#include <algorithm>

#include <TChain.h>
#include "THStack.h"
#include "TLegend.h"
#include "TEfficiency.h"
#include "TGraphAsymmErrors.h"
#include "TGraph.h"
#include <TString.h>
#include <TH1D.h>
#include <TH2D.h>
#include <TLatex.h>
#include <TCanvas.h>
#include <TFile.h>
namespace Main {

  /**
     \class PDEventHisto1D
     User defined class PDEventHisto1D ... these comments are used to generate
     doxygen documentation!
  */
  class PDEventHisto1D{
    
  public:
    
    /// Default constructor
    PDEventHisto1D(){}
    
    /// Default destructor
    ~PDEventHisto1D(){}
    ///  
    void InitializeBootstraps();
    void InitializeHistograms();

    
    TH1D *h_orimom_proton;
    TH1D *h_orimom_neutron;
    TH1D *h_orimom_pionpm;
    TH1D *h_orimom_pion0;
    TH1D *h_orimom_kaon;
    TH1D *h_orimom_electron;
    TH1D *h_orimom_muon;
    TH1D *h_orimom_photon;
    TH1D *h_orimom_other;


    TH1D *h_chi2_phypo_proton;
    TH1D *h_chi2_phypo_pionpm;
    TH1D *h_chi2_phypo_muon;
    TH1D *h_chi2_phypo_electron;
    TH1D *h_chi2_phypo_kaon;
    TH1D *h_chi2_phypo_other;
    TH1D *h_chi2_phypo_mc;

    TH1D *h_recomom_selected_proton;
    TH1D *h_recomom_selected_pionpm;
    TH1D *h_recomom_selected_muon;
    TH1D *h_recomom_selected_electron;
    TH1D *h_recomom_selected_kaon;
    TH1D *h_recomom_selected_other;

    TH1D *h_recopimom_selected_proton;
    TH1D *h_recopimom_selected_pionpm;
    TH1D *h_recopimom_selected_muon;
    TH1D *h_recopimom_selected_electron;
    TH1D *h_recopimom_selected_kaon;
    TH1D *h_recopimom_selected_other;




    TH1D *h_mom_gentruep;
    TH1D *h_thetax_gentruep;
    TH1D *h_mom_recotruep;
    TH1D *h_mom_recotruep_test;
    TH1D *h_thetax_recotruep_test;
    TH1D *h_mom_nonrecop;

    TH1D *h_mom_selectedtruep;
    TH1D *h_mom_trkscoretruep;
    TH1D *h_mom_tmdqdxtruep;
    TH1D *h_mom_chi2truep;

    TH1D *h_mom_selectedtruepipm;
    TH1D *h_mom_trkscoretruepipm;
    TH1D *h_mom_tmdqdxtruepipm;
    TH1D *h_mom_chi2truepipm;

 
    TH1D *h_tmdqdx;
    TH1D *h_tmdqdx_proton;
    TH1D *h_tmdqdx_pionpm;

    TH2D *h_tmdqdxvsrange_proton;
    TH2D *h_tmdqdxvsrange_pionpm;


    TH1D  *h_trackscore_proton;
    TH1D  *h_trackscore_electron;
    TH1D  *h_trackscore_pionpm;
    TH1D  *h_trackscore_photon;
    TH1D  *h_trackscore_muon;
    TH1D  *h_trackscore_pion0;
    TH1D  *h_trackscore_other;

    TH1D  *h_trktovtx;
    TH1D  *h_trktovtx_true;

    TH2D  *h_nonrecop_momvsnhits;

    TH1D  *h_lownhitsp_thetax;
    TH1D  *h_lownhitsp_thetay;
    TH1D  *h_lownhitsp_thetaz;

    TH1D  *h_lownhitsp_startX;
    TH1D  *h_lownhitsp_startY;;
    TH1D  *h_lownhitsp_startZ;

    TH1D  *h_lownhitsp_endX;
    TH1D  *h_lownhitsp_endY;;
    TH1D  *h_lownhitsp_endZ;

    TH1D  *h_chi2cutp_thetax;
    TH1D  *h_chi2cutp_thetay;
    TH1D  *h_chi2cutp_thetaz;



    TH1D  *h_mom_gentruepion0;
    TH1D  *h_mom_recotruepion0;
    TH1D  *h_mom_recotruenonpi0;

    TH1D  *h_mom_gentruepionpm;
    TH1D  *h_mom_recotruepionpm;

    TH1D  *h_Tk_selectedp;

    TH1D  *h_sel_Emissing;
    TH1D  *h_sel_Pmissing;
    TH1D  *h_sel_Ptmissing;
    TH1D  *h_sel_Plongit;   
 
    TH1D  *h_sig_Emissing;
    TH1D  *h_sig_Pmissing;
    TH1D  *h_sig_Ptmissing;
    TH1D  *h_sig_Plongit;

    TH2D  *h_sig_pvsnmult;
    TH2D  *h_PiAbs_sig_true_totalKE_protonvsneutron;

    TH1D  *h_PiAbs_sig_proton_mom;
    TH1D  *h_PiAbs_sig_proton_costheta;


    TH1D  *h_PiAbs_sig_neutron_mom;
    TH1D  *h_PiAbs_sig_neutron_costheta;
  

    TH1D  *h_PiAbs_sig_true_Ptmissing;
    TH1D  *h_PiAbs_sig_true_Ptmissing_onlyproton;

    TH1D  *h_chxbac_Emissing;
    TH1D  *h_chxbac_Pmissing;
    TH1D  *h_chxbac_Ptmissing;
    TH1D  *h_chxbac_Plongit;

    TH1D  *h_reabac_Emissing;
    TH1D  *h_reabac_Pmissing;
    TH1D  *h_reabac_Ptmissing;
    TH1D  *h_reabac_Plongit;
 
    TH1D  *h_PiAbs_sel_pmom;
    TH1D  *h_PiAbs_sig_pmom;
    TH1D  *h_PiAbs_chxbac_pmom;
    TH1D  *h_PiAbs_reabac_pmom;
    
    TH1D  *h_PiAbs_sel_pcostheta;
    TH1D  *h_PiAbs_sig_pcostheta;
    TH1D  *h_PiAbs_chxbac_pcostheta;
    TH1D  *h_PiAbs_reabac_pcostheta;

    TH1D  *h_PiAbs_sel_ptheta;
    TH1D  *h_PiAbs_sig_ptheta;
    TH1D  *h_PiAbs_chxbac_ptheta;
    TH1D  *h_PiAbs_reabac_ptheta;


    TH1D  *h_PiAbs_sel_pphi;
    TH1D  *h_PiAbs_sig_pphi;
    TH1D  *h_PiAbs_chxbac_pphi;
    TH1D  *h_PiAbs_reabac_pphi;

    TH1D  *h_PiAbs_sel_pcosthetax;


    TH1D  *h_PiAbs_sel_pmult;
    TH1D  *h_PiAbs_sig_pmult;
    TH1D  *h_PiAbs_chxbac_pmult;
    TH1D  *h_PiAbs_reabac_pmult;

    TH1D  *h_PiAbs_sig_energeticproton_reco_mom;
    TH1D  *h_PiAbs_sig_energeticproton_reco_costheta;
    TH1D  *h_PiAbs_sig_energeticproton_reco_phi;

    TH2D  *h_PiAbs_sig_energeticproton_truevsreco_mom;
    TH2D  *h_PiAbs_sig_energeticproton_truevsreco_costheta;
    TH2D  *h_PiAbs_sig_energeticproton_truevsreco_phi;



    TH1D  *h_PiAbs_sig_energeticproton_mom;
    TH1D  *h_PiAbs_sig_energeticproton_costheta;
    TH1D  *h_PiAbs_sig_energeticproton_phi;

    TH1D  *h_PiAbs_gen_sig_energeticproton_mom;
    TH1D  *h_PiAbs_gen_sig_energeticproton_costheta;
    TH1D  *h_PiAbs_gen_sig_energeticproton_phi;


    TH1D  *h_PiAbs_sel_energeticproton_mom;
    TH1D  *h_PiAbs_sel_energeticproton_costheta;
    TH1D  *h_PiAbs_sel_energeticproton_phi;
    TH1D  *h_PiAbs_sel_energeticproton_costhetax;

   


    TH1D  *h_PiAbs_chxbac_energeticproton_mom;
    TH1D  *h_PiAbs_chxbac_energeticproton_costheta;
    TH1D  *h_PiAbs_chxbac_energeticproton_phi;

    TH1D  *h_PiAbs_reabac_energeticproton_mom;
    TH1D  *h_PiAbs_reabac_energeticproton_costheta;
    TH1D  *h_PiAbs_reabac_energeticproton_phi;




 
    TH2D  *h_PiAbs_sig_truevsreco_pmult;

 
    TH1D  *h_PiAbs_sig_nmult;   

    TH1D  *h_reco_pionpm_rea;
    TH1D  *h_reco_photon_rea;

    TH1D  *h_grand_daughter_beam_dist;
    TH1D  *h_daughter_beam_dist;

    TH1D  *h_reco_grand_daughter_beam_dist;
    TH1D  *h_reco_daughter_beam_dist;
    TH1D  *h_reco_grand_daughter_angle;
    TH1D  *h_reco_daughter_angle;

    TH1D  *h_reco_daughter_deltax;
    TH1D  *h_reco_daughter_deltay;
    TH1D  *h_reco_daughter_deltaz;


    TH2D  *h_reco_daughter_distvsangle;

    TH1D  *h_gdfromproton;
    TH1D  *h_gdfromother;

    TH2D  *h_selproton_momreso;
    TH2D  *h_selproton_costhetareso;
 
    TH1D  *h_ngamma_frompi0;
    TH1D  *h_pgamma_frompi0;
    //TH1D  *selected_signal_percut;
    //TH1D  *selected_percut;


  protected:

  };
}

#endif
/** @} */ // end of doxygen group 
