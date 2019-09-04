/*JOSE ARMANDO ARGUETA PORTILLO 00129619
LABO PED 01*/
#include <iostream>
#include <cmath>
using namespace std;

struct Ncomplejo{
	float Preal;
	float pcompleja;
};
int main(){
	Ncomplejo valor;
	cout<<"ingrese la parte de real del numero complejo"<<endl;
	cin>> valor.Preal;
	cout<<"ingrese la parte de imaginaria del numero complejo"<<endl;
	cin>> valor.pcompleja;
	
	float resultado;
	
	resultado = sqrt(pow(valor.Preal, 2)+ pow(valor.pcompleja, 2));
	cout<< "el resultado es: "<<resultado<<endl;
}
