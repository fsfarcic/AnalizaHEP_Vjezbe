#include <iostream>
using namespace std;

class ElementaryParticle{
public:
string ime;
double masa;
bool bozon;

void printinfo(){
cout <<"Ime čestice je " << ime << endl;
cout << "Masa čestice je " << masa << " GeV" << endl;
if(bozon==1)
cout << "Čestica je bozon " << endl;
else
cout <<"Čestica nije bozon " << endl;
}

ElementaryParticle(string Ime, double Masa, bool Bozon){
ime=Ime;
masa=Masa;
bozon=Bozon;
}
};
int main()
{
ElementaryParticle HB=ElementaryParticle("Higgs boson",125.35,true);
ElementaryParticle TK=ElementaryParticle("top kvark",172.76,false);
ElementaryParticle Z_bozon=ElementaryParticle("Z bozon",91.1876,true);


/*Z_bozon.ime=" Z Bozon ";
Z_bozon.masa =91.1876;
Z_bozon.bozon=true;*/

ElementaryParticle *p;
p = new ElementaryParticle("Z bozon",91.1876,true);
p->printinfo();

/*p=&Z_bozon;
cout << endl;
p->printinfo();*/


/*HB.ime="Higgs boson";
HB.masa=125.35;
HB.bozon=true;*/

/*TK.ime="top kvark";
TK.masa=172.76;
TK.bozon=false;*/

cout << endl;
HB.printinfo(); 
cout << endl;
TK.printinfo(); 
cout << endl;
/*Z_bozon.printinfo();
cout << endl;*/
return 0;
}


