


#include "ElementaryParticle.h"

ElementaryParticle::ElementaryParticle(string _ime, float _masa, bool _bozon)
{
	ime = _ime;
	masa = _masa;
	bozon = _bozon;
}
ElementaryParticle::ElementaryParticle()
{
	ime = "";
	masa = 0;
	bozon = 0;
}
ElementaryParticle::~ElementaryParticle()
{

}

void ElementaryParticle::PrintInfo()
{
	cout << "ime je " << ime << endl << "masa je " << masa << " GeV" << endl << "bozon: " << bozon << endl;
}
void ElementaryParticle::SetMomentum(float _px, float _py, float _pz)
{
	px = _px;
	py = _py;
	pz = _pz;
	E = sqrt(px * px + py * py + pz * pz + masa * masa);
}

float ElementaryParticle::TransP()
{
	pt = sqrt(px * px + py * py);
	return sqrt(px * px + py * py);
}

void ElementaryParticle::PrintP()
{
	cout << "px: " << px << endl << "py: " << py << endl << "pz: " << pz << endl << "pt: " << pt << endl << "energija: " << E << endl;
}

void ElementaryParticle::setVariables(string _ime, float _masa, bool _bozon)
{
	ime = _ime;
	masa = _masa;
	bozon = _bozon;
}

void ElementaryParticle::bosonDecay(ElementaryParticle* decay1, ElementaryParticle* decay2)
{
	if (bozon == false)
	{
		cout << "raspad nije moguc" << endl;
	}
	else
	{
		random = rand() % 1000 + 1;
		if (random <= 214)
		{
			decay1->setVariables("W+ bozon", 80.4, 1);
			decay2->setVariables("W- bozon", 80.4, 1);
		}
		else if (random > 214 && random <= 214 + 64)
		{
			decay1->setVariables("tau+ lepton", 1.78, 0);
			decay2->setVariables("tau- lepton", 1.78, 0);
		}
		else if (random > 214 + 64 && random <= 214 + 64 + 26)
		{
			decay1->setVariables("Z bozon", 91.2, 1);
			decay2->setVariables("Z bozon", 91.2, 1);
		}
		else
		{
			decay1->setVariables("b_quark", 4.18, 0);
			decay2->setVariables("b_quark", 4.18, 0);
		}
		rand_px = rand() % 100 + 1;
		if (rand_px == 100)
		{
			rand_py = 0;
			rand_pz = 0;
		}
		else
		{
			rand_py = rand() % (100 - rand_px) + 1;
			rand_pz = 100 - rand_px - rand_py;
		}
	}
	decay1->SetMomentum(px * (rand_px / 100.), py * (rand_py / 100.), pz * (rand_pz / 100.));
	decay2->SetMomentum(px - decay1->px, py - decay1->py, pz - decay1->pz);

}