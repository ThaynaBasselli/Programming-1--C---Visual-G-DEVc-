#include <iostream>
#include <locale.h>

using namespace std;

//						Exerc�cio 8
/* Uma empresa de fornecimento de INTERNET possui v�rios
planos de assninatura. Para cada consumidor � digitado o tipo de
	O Valor do plano e o valor de cada MBytes consumido para cada tipo 
	de consumidor � dado conforme a tabela abaixo:
1 � Ouro, valor do plano = R$50,00, pre�o em reais por MB=R$0,30
2 � Prata, valor do plano = R$30,00, pre�o em reais por MB=R$0,50
3 � Bronze, valor do plano = R$20,00, pre�o em reais por MB=R$0,80

Fa�a um programa que calcule o gasto final do assinante.*/


int tipo;
float mbytes, conta;
    
int main (){
    
    setlocale(LC_ALL,"portuguese");
    
    cout <<"Qual � o MBytes consumidos: ";
    cin >>mbytes;
    
	cout <<"Digite uma das op��es de plano: "  <<"\n"  <<"1.Ouro   2.Prata   3.Bronze ";
	cin >>tipo;  
	
//calcular IPTU	
if (tipo == 1 ) //Ouro
   conta = 50 + mbytes * 0.30;	  
    
   		else if (tipo == 2) //Prata
    	conta = 30 + mbytes * 0.50;
    		
    		else
     		conta = 20 + mbytes * 0.80; //Bronze
     		
	cout <<"Valor da conta �:"  <<conta

}
