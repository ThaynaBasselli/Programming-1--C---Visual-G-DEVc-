#include <iostream>
#include <locale.h>

using namespace std;
//                 Exercício 1
/* Dados 2 valores A e B faça um algoritmo/programa que calcule
e mostre o maior valor. */

      float a, b, valor;

int main (){
    
    setlocale(LC_ALL,"portuguese");
    
    cout <<"Digite o valor de A: ";
    cin >>a;
    
    cout <<"Digite o valor de B: ";
    cin >>b;
    
      if (a > b)
		cout <<"O A é maior que B";
	  else
		cout <<"O B é maior que A";
		
}


