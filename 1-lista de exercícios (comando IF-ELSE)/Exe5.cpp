#include <iostream>
#include <locale.h>

using namespace std;
//                     Exerc�cio 5
/*  Uma empresa abriu uma linha de cr�dito para os funcion�rios. O valor
da presta��o n�o pode ultrapassar 30% do sal�rio. Fa�a um programa que
receba o sal�rio, o valor do empr�stimo e o n�mero de presta��es e 
informe se o empr�stimo pode ser concedido e o valor da parcela. */

      int numprest; 
  	  float salario, valorempre, conta, valorprest;
  
int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	cout <<"Qual � o seu sal�rio? ";
	cin >>salario;
	cout <<"Qual � o valor do empr�stimo? ";
	cin >>valorempre;  
	cout <<"Qual � o n�mero de presta��es? ";
	cin >>numprest;
	
	valorprest = valorempre / numprest;
	conta = (salario * 30)/100;
	
	  if (conta <= valorprest )
		cout <<"Seu emprestimo foi negado! ";	  
	  else
	    cout <<"PARAB�NS!! Seu emprestimo foi aceito. O valor da suas presta��es �: "  <<valorprest  <<"\n";
}
