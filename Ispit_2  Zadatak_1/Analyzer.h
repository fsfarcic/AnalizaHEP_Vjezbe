#include <iostream>
#include <TRandom3.h>
#include <TMath.h>

using namespace std;

#ifndef ANALYZER_H
#define ANALYZER_H

class Analyzer {
public:
    Analyzer();
    double Volumen(double a, double b, double c, int N);

private:
    double a, b, c, volumen;
    int N;
    int br;
};

#endif