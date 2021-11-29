/* 
  Programa que calcula los 
  segundos entre dos instantes 
*/

#include <iostream>
using namespace std;

int DiferenciaTiempo(int hora1, int minuto1, int segundo1, int hora2, int minuto2, int segundo2){
	int resultado;
	
	return resultado = (hora2 - hora1) * 3600 + (minuto2 - minuto1) * 60 + (segundo2 - segundo1);
}

int main(){
	int hora1 , minuto1 , segundo1;
	int hora2 , minuto2 , segundo2;
	int variacion;
	
	cout << "Introduzca la hora, minutos y segundos (dejando espacio entre uno y otro): ";
	cin >> hora1 >> minuto1 >> segundo1;
	cout << "introduzca la siguiente hora, minutos y segundos: ";
	cin >> hora2 >> minuto2 >> segundo2;
	
	variacion = DiferenciaTiempo(hora1, minuto1, segundo1, hora2, minuto2, segundo2);
	
	cout << "\nLa diferencia en segundos es: " << variacion;
}
