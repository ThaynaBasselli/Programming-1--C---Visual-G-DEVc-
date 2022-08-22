#include <iostream>
#include <locale.h>

using namespace std;
//						Exerc�cio 6
/* Escreva um programa que leia as medidas dos lados de 
um tri�ngulo e escreva se ee � Equil�tero, Is�sceles ou
Escaleno. Sendo que:
- Tri�ngulo Equil�tero: possui os 3 lados iguais.
- Tri�ngulo Is�sceles: possui 2 lados iguais.
- Tri�ngulo Escaleno: possui 3 lados diferentes */

float l1, l2, l3, triangulo, resultado;
    
int main (){
    
    setlocale(LC_ALL,"portuguese");
    
    cout <<"Qual a medida do lado 1: ";
    cin >>l1;
    
    cout <<"Qual a medida do lado 2: ";
    cin >>l2;
    
    cout <<"Qual a medida do lado 3: ";
    cin >>l3;
    
   if( (l1 + l2) > l3  &&  (l1 + l3) > l2  &&  (l2 + l3) > l1 ) 
    {
    
   	 //Tipo de tri�ngulo
   	 if (l1 == l2 && l2 == l3)
    	cout <<"Tri�ngulo Equil�tero";
    	
    	else if (l1 == l2 || l1 == l3 || l2 == l3)
    		cout <<" Tri�ngulo Is�sceles";
    		
    		else
     			cout <<"Tri�ngulo Escaleno";
	}
}
