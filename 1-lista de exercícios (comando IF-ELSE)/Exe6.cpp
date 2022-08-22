#include <iostream>
#include <locale.h>

using namespace std;
//                     Exercício 6
/*  Faça um algoritmo/programa  que leia o salário bruto de um funcionário
e calcule o salário liquido sabendo que são cobrados 11% de INSS (limitado a 
valor máximo de R$640,00) e o imposto de renda é cobrado conforme tabela abaixo:
		
		salarioliquido= salariobruto – INSS - IR
		 
       SALÁRIO(R$)               IMPOSTO de RENDA
        < 1500                          10% 
        >=1500                          15%             */

  	  float salariobruto, salarioliquido, inss, ir;
  
int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	cout <<"Qual é o seu salário bruto? ";
	cin >>salariobruto;
	
	inss = (salariobruto * 11)/100;
	
		if (inss < 640)
		 	cout <<"O valor do seu INSS é: "   <<inss	<<"\n";
		else{
			inss = 640;
			cout <<"O valor do seu INSS é: "   <<inss	<<"\n";
		}
		
		if (salariobruto < 1500)
			ir = (salariobruto * 10)/100;
		else
			ir = (salariobruto * 15)/100;
		 
	salarioliquido = salariobruto - inss - ir;
	cout <<"seu salário liquido é: "	<<salarioliquido;
}
