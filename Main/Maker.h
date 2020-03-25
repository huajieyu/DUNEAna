/**
 * \file Maker.h
 *
 * \ingroup Main
 * 
 * \brief Class def header for a class Maker
 *
 * @author jiangl
 */

/** \addtogroup Main

    @{*/
#ifndef __MAIN_MAKER_H__
#define __MAIN_MAKER_H__
#include "PDEventPro.h"
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

#include <TRandom1.h>
#include <TSystem.h>
#include <TBrowser.h>
#include <TApplication.h>
#include <TChain.h>
#include "TThread.h"
#include "THStack.h"
#include "TLegend.h"
#include "TEfficiency.h"
#include "TGraphAsymmErrors.h"
#include "TGraph.h"
#include <TString.h>
#include <TROOT.h>
#include <TStyle.h>
#include <TH1D.h>
#include <TH2D.h>
#include <TLatex.h>
#include <TCanvas.h>
#include "TMath.h"
#include <TVector3.h>
#include "PDEventHisto1D.h"

namespace Main {

  /**
     \class Maker
     User defined class Maker ... these comments are used to generate
     doxygen documentation!
  */
  class Maker{
    
  public:
    
    /// Default constructor
    Maker(){}
    
    /// Default destructor
    ~Maker(){}

    void SetInputFile(std::string);
    void SetInputFile_add(std::string);
    void SetOutputFile(std::string);
    void SetInitialEntry(int);
    void SetEntries(int);
    void SetFVCut(bool); 
    void MakeFile();

 
  private:
    void DrawProgressBar(double progress, double barWidth);
    bool inFV(double x, double y, double z);
    double thetax(double theta, double phi);
    bool FVcuton = false; 

    double Calc_reco_beam_energy(TVector3 momentum, double mass);
    TVector3 Calc_reco_beam_momentum(vector<double>*dedx, TVector3 *dir3);

    std::string filen = "";
    std::string filen_add = "";
    std::string fileoutn = "";
    int _initial_entry = 0;
    int maxEntries = -1;

    PDEventHisto1D *_event_histo_1d;

    bool isProton = false;
    double Ecalcmiss(double Esum, double PTmiss, int np); 
    const double NeutronMass = 0.93956542; 
    const double ProtonMass = 0.938272;


    double cutAPA3_Z = 226.;
    double cut_trackScore = 0.35;
    //daughter Distance cut
    double cut_daughter_track_distance = 10.;
    double cut_daughter_shower_distance_low = 2.;
    double cut_daughter_shower_distance_high = 100.;
    double cut_primary_chi2 = 140.;
    double cut_secondary_chi2 = 50.;
    int cut_nHits_shower_low = 12;
    int cut_nHits_shower_high = 1000;
    //
    //For MC from Owen Goodwins studies
    double xlow = -3.,  xhigh = 7.,  ylow = -8.,  yhigh = 7.;
    double zlow = 27.5,  zhigh = 32.5,  coslow = 0.93;
    //
    //For Data from Owen Goodwin
    double data_xlow = 0., data_xhigh = 10., data_ylow= -5.;
    double data_yhigh= 10., data_zlow=30., data_zhigh=35., data_coslow=.93;

     bool isBeamType(int i);
     bool manual_beamPos_mc(double beam_startX, double beam_startY,
                            double beam_startZ, double beam_dirX,
                            double beam_dirY,   double beam_dirZ, 
                            double true_dirX,   double true_dirY,
                            double true_dirZ,   double true_startX,
                            double true_startY, double true_startZ);
    
     bool endAPA3(double reco_beam_endZ); 
    //
    //Tag PrimaryPion without elastic Scattering
     bool has_shower_nHits_distance(const std::vector<double> &track_score,
                                    const std::vector<int> &nHits,
                                    const std::vector<double> &distance); 
   };
}

#endif
/** @} */ // end of doxygen group 
