#include <iostream>
#include <locale.h>

using namespace std;
//                     Exercício 5
/*  Uma empresa abriu uma linha de crédito para os funcionários. O valor
da prestação não pode ultrapassar 30% do salário. Faça um programa que
receba o salário, o valor do empréstimo e o número de prestações e 
informe se o empréstimo pode ser concedido e o valor da parcela. */

      int numprest; 
  	  float salario, valorempre, conta, valorprest;
  
int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	cout <<"Qual é o seu salário? ";
	cin >>salario;
	cout <<"Qual é o valor do empréstimo? ";
	cin >>valorempre;  
	cout <<"Qual é o número de prestações? ";
	cin >>numprest;
	
	valorprest = valorempre / numprest;
	conta = (salario * 30)/100;
	
	  if (conta <= valorprest )
		cout <<"Seu emprestimo foi negado! ";	  
	  else
	    cout <<"PARABÉNS!! Seu emprestimo foi aceito. O valor da suas prestações é: "  <<valorprest  <<"\n";
}
