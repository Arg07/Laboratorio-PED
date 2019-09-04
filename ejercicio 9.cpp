/*JOSE ARMANDO ARGUETA PORTILLO 00129619
LABO PED 01*/
#include <iostream>
#include <cmath>
using namespace std;

//EJERCICIO 9
int i = 0;
int result =0;
int sumatoria(int n, int x){
	result += pow(x,i);
	i++;
	if (i>n){
		return result;
		}else{
		sumatoria(n,x);
	}
}
int main(){
	cout << "Sumatoria"<<endl;
	cout << "ingrese el valor de N para la sumatoria"<<endl;
	int n;
	cin>> n;
	cout << "ingrese el valor de X"<<endl;
	int x;
	cin>> x;
	sumatoria(n,x);
	cout << "el resultado de la sumatoria es: "<< result <<endl;
}
