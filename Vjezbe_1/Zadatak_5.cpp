#include <iostream>
#include <cmath>
using namespace std;

double kub(double x){
double y;
y= pow(x,3);
return y;
}

int main() {
double x;
double y;
cout<< "Dajte realan broj"<< endl;
cin>> x;
y=kub(x);
cout<<"kub tog broja je:"  << y << endl;


}


