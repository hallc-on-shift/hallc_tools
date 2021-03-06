#if defined(__ROOTCLING__)
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ all typedef;

#pragma link C++ nestedclass;
#pragma link C++ nestedtypedef;

#pragma link C++ namespace hallc;
#pragma link C++ namespace csv;

#pragma link C++ class hallc::SIDIS_Kinematic+;
#pragma link C++ class std::vector<hallc::SIDIS_Kinematic>+;
#pragma link C++ class std::vector<std::pair<double, hallc::SIDIS_Kinematic>>+;

#pragma link C++ class hallc::HallCSetting+;
#pragma link C++ class TargetRates+;
#pragma link C++ class RunPlanTableEntry+;

#pragma link C++ class std::vector<RunPlanTableEntry>+;
#pragma link C++ class std::pair<double,std::vector<RunPlanTableEntry>>+;
#pragma link C++ class std::vector<std::pair<double,std::vector<RunPlanTableEntry>>>+;
#pragma link C++ class std::map<int,RunPlanTableEntry>+;

#pragma link C++ class RunTable+;

#pragma link C++ class hallc::MonitoringHistograms+;
#pragma link C++ class std::vector<hallc::MonitoringHistograms>+;


#endif
