CXX=g++  -std=c++11
INCDIR=.
ROOTINC=$(shell root-config --incdir)
ROOTLIB=$(shell root-config --libs)

all: NtupleClass.o SignalClass.o GlobalClass.o TNtupleAnalyzer.o TSelectionAnalyzer.o PlotterClass.o GaussianKernelSmoother.o FFCalculator.o test Preselection SRHisto CRHisto steerFF convert_inputs

%.o: ViennaTool/%.C
	$(CXX) -I$(INCDIR) -I$(ROOTINC) $(ROOTLIB) -fpic -c $<

%.o: ViennaTool/src/%.cc
	$(CXX) -I$(INCDIR) -I$(ROOTINC) $(ROOTLIB) -fpic -c $<

test: ViennaTool/macros/test.C
	$(CXX) -I$(INCDIR) -I$(ROOTINC) $(ROOTLIB) -o $@ ../tmp/slc6_amd64_gcc493/src/HTTutilities/Jet2TauFakes/src/HTTutilitiesJet2TauFakes/libHTTutilitiesJet2TauFakes.so ViennaTool/macros/test.C

Preselection: ViennaTool/macros/Preselection.C
	$(CXX) -I$(INCDIR) -I$(ROOTINC) $(ROOTLIB) -o $@ NtupleClass.o TNtupleAnalyzer.o ViennaTool/macros/Preselection.C

SRHisto: ViennaTool/macros/SRHisto.C
	$(CXX) -I$(INCDIR) -I$(ROOTINC) $(ROOTLIB) -o $@ SignalClass.o GlobalClass.o PlotterClass.o TSelectionAnalyzer.o ViennaTool/macros/SRHisto.C

CRHisto: ViennaTool/macros/CRHisto.C
	$(CXX) -I$(INCDIR) -I$(ROOTINC) $(ROOTLIB) -o $@ SignalClass.o GlobalClass.o PlotterClass.o TSelectionAnalyzer.o ViennaTool/macros/CRHisto.C

steerFF: ViennaTool/macros/steerFF.C
	$(CXX) -I$(INCDIR) -I$(ROOTINC) $(ROOTLIB) -o $@ SignalClass.o GlobalClass.o PlotterClass.o ../tmp/slc6_amd64_gcc493/src/HTTutilities/Jet2TauFakes/src/HTTutilitiesJet2TauFakes/libHTTutilitiesJet2TauFakes.so ViennaTool/macros/steerFF.C

convert_inputs: ViennaTool/macros/convert_inputs.C
	$(CXX) -I$(INCDIR) -I$(ROOTINC) $(ROOTLIB) -o $@ GaussianKernelSmoother.o ViennaTool/macros/convert_inputs.C


clean:
	rm *.o test Preselection SRHisto CRHisto convert_inputs

