#include <iostream>
#include <locale.h>

using namespace std;

//                 Exerc�cio 2
/* Fa�a um algoritmo/programa que leia o valor de um
produto e se o produto for nacional cobrar 5% de imposto,
se for importado cobrar 10% de imposto. Calcular o valor
final do produto. */

	  int opcao; 
  	  float valorprodu, inter, nacio;
  
int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	cout <<"Digite o valor do produto:  ";
	cin >>valorprodu;
	cout <<"O produto �: "  <<"\n"  <<"1.Nacional ou 2.Internacional:  ";
	cin >>opcao;
	
	inter = ((valorprodu * 0.10)/100) + valorprodu;
	nacio = ((valorprodu * 0.5)/100) + valorprodu;
	
	  if (opcao == 1 )
		cout <<"O valor final do produto �: "  <<nacio  <<"\n";	  
	  else
	     cout <<"O valor final do produto �: "  <<inter  <<"\n";
}
