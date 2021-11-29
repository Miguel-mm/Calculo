/*
	Programa sencillo de una potencia entera
	implementando funciones
*/

#include <iostream>
using namespace std;

int PotenciaEntera (int base, int exponente){
	long resultado = base;
	
	for(int i = 1; i < exponente; i++){
		resultado = resultado * base;
	}
	
	return resultado;
}

int main(){
	long resultado;
	int base;
	int exponente;
	
	cout << "Introduzca la base de la potencia ---> ";
	cin >> base;
	cout << "Introduzca el exponente de la potencia ---> ";
	cin >> exponente;
	
	resultado = PotenciaEntera(base, exponente);
	
	cout << "\nEl reustado de la potencia en base " << base << " con exponente " << exponente << " es ---> " << resultado;
}
