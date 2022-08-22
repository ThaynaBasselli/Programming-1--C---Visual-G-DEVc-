#include <iostream>
#include <locale.h>

using namespace std;

//						Exercício 8
/* Uma empresa de fornecimento de INTERNET possui vários
planos de assninatura. Para cada consumidor é digitado o tipo de
	O Valor do plano e o valor de cada MBytes consumido para cada tipo 
	de consumidor é dado conforme a tabela abaixo:
1 – Ouro, valor do plano = R$50,00, preço em reais por MB=R$0,30
2 – Prata, valor do plano = R$30,00, preço em reais por MB=R$0,50
3 – Bronze, valor do plano = R$20,00, preço em reais por MB=R$0,80

Faça um programa que calcule o gasto final do assinante.*/


int tipo;
float mbytes, conta;
    
int main (){
    
    setlocale(LC_ALL,"portuguese");
    
    cout <<"Qual é o MBytes consumidos: ";
    cin >>mbytes;
    
	cout <<"Digite uma das opções de plano: "  <<"\n"  <<"1.Ouro   2.Prata   3.Bronze ";
	cin >>tipo;  
	
//calcular IPTU	
if (tipo == 1 ) //Ouro
   conta = 50 + mbytes * 0.30;	  
    
   		else if (tipo == 2) //Prata
    	conta = 30 + mbytes * 0.50;
    		
    		else
     		conta = 20 + mbytes * 0.80; //Bronze
     		
	cout <<"Valor da conta é:"  <<conta

}
