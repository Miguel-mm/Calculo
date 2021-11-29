/* 
  Programa para redondear decimales
*/

#include <iostream>
#include <cmath>
using namespace std;

int PotenciaEntera (int cifra){
	int base = 10;
	long resultado = base;
	
	for(int i = 1; i < cifra; i++){
		resultado = resultado * base;
	}
	
	return resultado;
}

double Redondea (double decimal, double cifra){
	double resultado;
	double potencia1;
	double potencia2;
	
	potencia1 = decimal * PotenciaEntera(cifra);
	potencia2 = round(potencia1);
	
	return resultado = potencia2 / PotenciaEntera(cifra);
		
}

int main(){
	double decimal;
	double cifra;
	double numero_redondeado;
	
	cout << "Introduzca un numero decimal ---> ";
	cin >> decimal;
	cout << "Indique a que numero de cifra decimal desea redondear ---> ";
	cin >> cifra;
	

	numero_redondeado = Redondea(decimal, cifra);
	
	cout << "\nEl numero aproximado a la cifra decimal numero" <<" " << cifra << " es " << numero_redondeado;
}
