#include "ElementaryParticle.h"
#include <iostream>
using namespace std;

ElementaryParticle::ElementaryParticle(string Ime, double Masa, bool Bozon)
{
ime=Ime;
masa=Masa;
bozon=Bozon;
};
void ElementaryParticle::printinfo()
{
cout <<"Ime čestice je " << ime << endl;
cout << "Masa čestice je " << masa << " GeV" << endl;
if(bozon==1)
cout << "Čestica je bozon " << endl;
else
cout <<"Čestica nije bozon " << endl;
};






