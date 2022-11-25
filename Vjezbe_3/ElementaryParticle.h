


#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

class ElementaryParticle
{
public:
	ElementaryParticle(string _ime, float _masa, bool _bozon);
	ElementaryParticle();
	~ElementaryParticle();

	void PrintInfo();
	void SetMomentum(float _px, float _py, float _pz);
	//void TransP();
	void PrintP();
	void bosonDecay(ElementaryParticle* decay1, ElementaryParticle* decay2);
	void setVariables(string _ime, float _masa, bool _bozon);

	string ime;
	float masa, px, py, pz, E, pt;
	float TransP();
	bool bozon;

private:
	int random, rand_px, rand_py, rand_pz;
};