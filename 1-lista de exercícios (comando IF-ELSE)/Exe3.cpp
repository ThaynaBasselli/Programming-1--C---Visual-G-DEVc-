#include <iostream>
#include <locale.h>

using namespace std;

//                 Exerc�cio 3
/* Fazer um programa que leia o consumo de �gua de um local e calcule o valor da 
conta conforme  o tipo de estabelecimento:  residencial ( R$0,03 por litro) 
ou comercial ( R$0,05 por litro).  */

	  int opcao; 
  	  float consumoagua, reside, comer;
  
int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	cout <<"Digite o consumo de �gua do seu local: ";
	cin >>consumoagua;
	cout <<"Qual � o tipo de seu estabelecimento: "  <<"\n"  <<"1.Residencial ou 2.Comercia ";
	cin >>opcao;  
	
	reside = consumoagua * 0.03;
	comer = consumoagua * 0.05;
	
	  if (opcao == 1 )
		cout <<"O valor da conta �: "  <<reside  <<"\n";	  
	  else
	     cout <<"O valor da conta �: "  <<comer  <<"\n";
}
