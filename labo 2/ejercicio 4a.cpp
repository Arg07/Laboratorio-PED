/*
JOSE ARMANDO ARGUETA PORTILLO 00129619
lABO 02
EJERCICIO 4A
*/

#include <iostream>
#include <cmath>

using namespace std;
int i = 0;
float result =0;

int sumatoria(int k){
    result += 4*(pow(-1,i))/(2*i+1);
	i++;
	if (i>k){
		return result;
		}else{
		sumatoria(k);
	}
}
int main(){
	cout << "Sumatoria"<<endl;
	cout << "ingrese el valor de K para la sumatoria"<<endl;
	int k;
	cin>> k;
	sumatoria(k);
	cout << "el resultado de la sumatoria es: "<< result <<endl;
}
