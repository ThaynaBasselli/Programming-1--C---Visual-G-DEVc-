#include <iostream>
#include <locale.h>

using namespace std;
//						Exercício 6
/* Escreva um programa que leia as medidas dos lados de 
um triângulo e escreva se ee é Equilátero, Isósceles ou
Escaleno. Sendo que:
- Triângulo Equilátero: possui os 3 lados iguais.
- Triângulo Isósceles: possui 2 lados iguais.
- Triângulo Escaleno: possui 3 lados diferentes */

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
    
   	 //Tipo de triângulo
   	 if (l1 == l2 && l2 == l3)
    	cout <<"Triângulo Equilátero";
    	
    	else if (l1 == l2 || l1 == l3 || l2 == l3)
    		cout <<" Triângulo Isósceles";
    		
    		else
     			cout <<"Triângulo Escaleno";
	}
}
