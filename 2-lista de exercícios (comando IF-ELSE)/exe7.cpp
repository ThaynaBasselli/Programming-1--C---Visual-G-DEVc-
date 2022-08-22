#include <iostream>
#include <locale.h>

using namespace std;

//						Exercício 7
/* A prefeitura de Araraquara cobra o valor do IPTU de acordo
com a área em que está situado o imóvel. Para calcular o valor
do IPTU são digitados os seguintes dados:
- Área do imóvel (em m²);
- O valor do m² para cada tipo de imóvel é dado conforme a tabela abaixo:
	1 - Residencial, preço por m² = R$ 2,00
	2 - Comercial, preço por m² = R$ 4,00
	3 - Industrial, preço por m²  = R$ 5,00
	
Escreva um Programa em C que calcule e mostre o valor do IPTU
de acordo com o tipo de imóvel. */


int tipo;
float area, iptu;
    
int main (){
    
    setlocale(LC_ALL,"portuguese");
    
    cout <<"Qual é a área do imóvel por m²: ";
    cin >>area;
    
	cout <<"Digite uma das opções de imóveis: "  <<"\n"  <<"1.Residencial   2.Comercial   3. Industrial ";
	cin >>tipo;  
	
//calcular IPTU	
if (tipo == 1 ) //Residencial
   iptu = area * 2 ;	  
    
   		else if (tipo == 2) //Comercial
    	iptu = area * 4;
    		
    		else
     		iptu = area * 5; //Industrial
     		
	cout <<"Valor do IPTU é:"  <<iptu

}
