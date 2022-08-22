#include <iostream>
#include <locale.h>

using namespace std;
//                 Exercício 1
/* Dados 3 valores A, B e C, faça um algoritmo/programa que calcule e 
mostre o maior valor.  */

      float a, b, c, valor;

int main (){
    
    setlocale(LC_ALL,"portuguese");
    
    cout <<"Digite o valor de A: ";
    cin >>a;
    
    cout <<"Digite o valor de B: ";
    cin >>b;
    
    cout <<"Digite o valor de C: ";
    cin >>c;
    
      if (a > b  and  a > c)
      		{
			cout <<"O A é o maior";
			}
	  	else if (b > a  and  b > c)
	  			{
				cout <<"O B é o maior";
				}
			else 
				{
				cout <<"O C é o maior"; 
				} 	
}


