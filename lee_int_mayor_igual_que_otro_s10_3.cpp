/*
	Programa que lee entero mayor o igual que otro
*/

#include <iostream>
using namespace std;

void LeeIntMayorIgualQue(int min, string mensaje) {
   int max;
   
   do{
      cout << mensaje;
      cin >> max;
   }while (max <= min);
}

int LeeIntRango(int min, int max, string mensaje) {
   int a_leer;
   
   do{
      cout << mensaje;
      cin >> a_leer;
   }while (min > a_leer || max < a_leer);
   
   return a_leer;
}

int main(){
   const int TOTAL_A_INTRODUCIR = 3;
   
   long min, max, dato, suma;
   
   cout << "Programa de prueba para la función LeeIntRango"
        << "\nIntroduzca el valor mínimo y el máximo"
        << "\nA continuación introduzca "
        << TOTAL_A_INTRODUCIR << " enteros en el rango anterior\n";
        
   cin >> min;
   cin >> max;
   suma = 0;
   
   for (int i = 0; i < TOTAL_A_INTRODUCIR; i++){
      dato = LeeIntRango(min, max, "");
      suma = suma + dato;
   }

   cout << "\n\nSuma total: " << suma;
}
