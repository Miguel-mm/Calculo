/*
	Programa que elimina caracteres finales
*/


#include <iostream>
#include <string>
using namespace std;

string EliminaUltimos(string cadena, char a_eliminar){
	bool acabado = false;
	
	for (int i = cadena.size()-1; i > 0 && !acabado; i--){
			if ( cadena[i] == a_eliminar)
				cadena.pop_back();
			else 
				acabado = true;
	}
	return cadena;
}
	
int main(){
	string cadena;
	char a_borrar, caracter;
	const char TERMINADOR = '#';
	
	caracter = cin.get();
	
	while (caracter != TERMINADOR){
		cadena.push_back(caracter);
		caracter = cin.get();	
	}
	
	cin >> a_borrar;
	
	cout << EliminaUltimos(cadena, a_borrar);
}

