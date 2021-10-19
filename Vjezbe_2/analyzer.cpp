#include "ElementaryParticle.h"



int main()
{


ElementaryParticle *p;
p = new ElementaryParticle("Z bozon",91.1876,true);
p->printinfo();
p = new ElementaryParticle("Higgs boson",125.35,true);
p->printinfo();
p = new ElementaryParticle("top kvark",172.76,false);
p->printinfo();


return 0;
}


