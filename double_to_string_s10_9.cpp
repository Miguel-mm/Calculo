/*
	Programa que convierte un double en un string
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double PotenciaEntera (double base_diez , int cifra_decimal){
	double desplazamiento=1;
	for( int i=1 ; i<= cifra_decimal ;i++){
		desplazamiento = desplazamiento * base_diez;
	}
	return desplazamiento;	
}

double Redondea (double numero , int cifra_decimal ){
	double resultado , desplazamiento;
	const double BASE_10 = 10.0;
	
	desplazamiento = PotenciaEntera(BASE_10 , cifra_decimal);
	resultado = round (numero * desplazamiento)/desplazamiento;
	
	return resultado;
}

string DoubleToString( double numero ){
	string cadena;
	
	cadena = to_string(numero);
	
	return cadena;
}

string EliminaUltimos(string cadena, char a_borrar){
	bool final = false;
	for (int i = cadena.size()-1; i > 0 && !final; i--){
			if ( cadena[i] == a_borrar)
				cadena.pop_back();
			else 
				final = true;
	}
	return cadena;
}

int main(){
	
	string cadena , cadena_final;
	int cifra_decimal;
	double numero , redondeado; 
	const char A_BORRAR = '0';
	
	cin >> numero >> cifra_decimal;
	
	redondeado = Redondea( numero , cifra_decimal);
	cadena = DoubleToString ( redondeado);
	cadena_final = EliminaUltimos ( cadena , A_BORRAR);
	
	cout << cadena_final;
	
}
