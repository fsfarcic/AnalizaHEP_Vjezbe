#include "Analyzer.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    Analyzer *analyzer;
     analyzer= new Analyzer();

     analyzer->PlotHistogram("/home/public/data/ggH125/ZZ4lAnalysis.root");
     analyzer->PlotHistogram("/home/public/data/qqZZ/ZZ4lAnalysis.root");

     analyzer->PlotMass();
     analyzer->PlotDkin();

  delete analyzer;

  return 0;
}
