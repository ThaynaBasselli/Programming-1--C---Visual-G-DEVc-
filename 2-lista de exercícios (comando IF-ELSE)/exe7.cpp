#include <iostream>
#include <locale.h>

using namespace std;

//						Exerc�cio 7
/* A prefeitura de Araraquara cobra o valor do IPTU de acordo
com a �rea em que est� situado o im�vel. Para calcular o valor
do IPTU s�o digitados os seguintes dados:
- �rea do im�vel (em m�);
- O valor do m� para cada tipo de im�vel � dado conforme a tabela abaixo:
	1 - Residencial, pre�o por m� = R$ 2,00
	2 - Comercial, pre�o por m� = R$ 4,00
	3 - Industrial, pre�o por m�  = R$ 5,00
	
Escreva um Programa em C que calcule e mostre o valor do IPTU
de acordo com o tipo de im�vel. */


int tipo;
float area, iptu;
    
int main (){
    
    setlocale(LC_ALL,"portuguese");
    
    cout <<"Qual � a �rea do im�vel por m�: ";
    cin >>area;
    
	cout <<"Digite uma das op��es de im�veis: "  <<"\n"  <<"1.Residencial   2.Comercial   3. Industrial ";
	cin >>tipo;  
	
//calcular IPTU	
if (tipo == 1 ) //Residencial
   iptu = area * 2 ;	  
    
   		else if (tipo == 2) //Comercial
    	iptu = area * 4;
    		
    		else
     		iptu = area * 5; //Industrial
     		
	cout <<"Valor do IPTU �:"  <<iptu

}
