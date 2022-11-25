
#include "ElementaryParticle.h"
#include <fstream>

int main()
{
	ElementaryParticle* higgs = new ElementaryParticle("Higgs", 125, true);
	/*higgs->SetMomentum(21.4, 34.23, 52);
	higgs->TransP();
	higgs->PrintInfo();
	higgs->PrintP();*/
	srand(time(NULL));

	ElementaryParticle* DecayPart1 = new ElementaryParticle();
	ElementaryParticle* DecayPart2 = new ElementaryParticle();

	/*higgs->bosonDecay(DecayPart1, DecayPart2);

	cout << DecayPart1->ime << " " << DecayPart1->px << " " << DecayPart1->py << " " << DecayPart1->pz <<" " << DecayPart1->E << endl;
	cout << DecayPart2->ime << " " << DecayPart2->px << " " << DecayPart2->py << " " << DecayPart2->pz << " " << DecayPart2->E << endl; */


	int randx, randy, randz;

	ofstream myfile;
	myfile.open("Analysis_frane.txt");
	myfile << "EventNumber DecayPart1_ime DecayPart1_bozon DecayPart1_masa DecayPart1_px DecayPart1_py DecayPart1_pz DecayPart1_E DecayPart1_pt " <<
		" DecayPart2_ime DecayPart2_bozon DecayPart2_masa DecayPart2_px DecayPart2_py DecayPart2_pz DecayPart2_E DecayPart2_pt" << endl;

	for (int i = 0; i < 10000; i++)
	{
		randx = -1000 + rand() % 2000;
		randy = -1000 + rand() % 2000;
		randz = -1000 + rand() % 2000;

		higgs->SetMomentum(randx / 10., randy / 10., randz / 10.);
		higgs->bosonDecay(DecayPart1, DecayPart2);

		myfile << "   " << i << "        " << DecayPart1->ime << "        " << DecayPart1->bozon << "        " << DecayPart1->masa << "        "
			<< DecayPart1->px << "        " << DecayPart1->py << "        " << DecayPart1->pz << "        " << DecayPart1->E << "        " << DecayPart1->TransP() << "        "
			<< DecayPart2->ime << "        " << DecayPart2->bozon << "        " << DecayPart2->masa << "        " << DecayPart2->px << "        " << DecayPart2->py << "        " << DecayPart2->pz << "        " << DecayPart2->E << "        " << DecayPart2->TransP() << endl;

	}
	myfile.close();

	higgs->~ElementaryParticle();
	DecayPart1->~ElementaryParticle();
	DecayPart2->~ElementaryParticle();

	return 0;
}
