#include <iostream>
#include <locale.h>

using namespace std;
//                 Exerc�cio 1
/* Dados 3 valores A, B e C, fa�a um algoritmo/programa que calcule e 
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
			cout <<"O A � o maior";
			}
	  	else if (b > a  and  b > c)
	  			{
				cout <<"O B � o maior";
				}
			else 
				{
				cout <<"O C � o maior"; 
				} 	
}


