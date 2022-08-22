#include <iostream>
#include <locale.h>

using namespace std;
//                     Exerc�cio 6
/*  Fa�a um algoritmo/programa  que leia o sal�rio bruto de um funcion�rio
e calcule o sal�rio liquido sabendo que s�o cobrados 11% de INSS (limitado a 
valor m�ximo de R$640,00) e o imposto de renda � cobrado conforme tabela abaixo:
		
		salarioliquido= salariobruto � INSS - IR
		 
       SAL�RIO(R$)               IMPOSTO de RENDA
        < 1500                          10% 
        >=1500                          15%             */

  	  float salariobruto, salarioliquido, inss, ir;
  
int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	cout <<"Qual � o seu sal�rio bruto? ";
	cin >>salariobruto;
	
	inss = (salariobruto * 11)/100;
	
		if (inss < 640)
		 	cout <<"O valor do seu INSS �: "   <<inss	<<"\n";
		else{
			inss = 640;
			cout <<"O valor do seu INSS �: "   <<inss	<<"\n";
		}
		
		if (salariobruto < 1500)
			ir = (salariobruto * 10)/100;
		else
			ir = (salariobruto * 15)/100;
		 
	salarioliquido = salariobruto - inss - ir;
	cout <<"seu sal�rio liquido �: "	<<salarioliquido;
}
