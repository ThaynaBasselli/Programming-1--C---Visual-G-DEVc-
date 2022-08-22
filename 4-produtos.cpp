#include <iostream>
#include <locale.h>

using namespace std;

/*			Exercício 4
Os produtos em uma loja estão em promoção.
Apresente o preço do produto de acordo com a tabela abaixo.   

Departamento     Cor Etiqueta   Desconto 
					Azul 		   6% 
	A				Branca 		   7% 
					Verde 		   8% 
					Preta 		   9% 
					
	 				Azul 		  6,3% 
	B				Branca 		  7,4% 
					Verde 		  8,2% 
					Preta 		  9,1% 
					
					Azul 		  5,6% 
	C				Branca 		  6,7% 
					Verde 		  7,8% 
					Preta		  10,9%  

*/

int dep, etq;
float valorProd, valorNovo;

int main(){
	
	cout << "Informe o valor atual do produto: ";
	cin >> valorProd;
	
	cout << "Informe o departamento:" <<endl <<"1-A" <<endl <<"2-B" <<endl <<"3-C" <<endl;
	cin >> dep;
	
	cout << "Informe a cor da etiqueta do produto: " <<endl <<"1-Azul" <<endl <<"2-Branca" <<endl <<"3-Verde" <<endl <<"4-Preta" <<endl;
	cin >> etq;
	
	if (dep == 1){
		if (etq == 1){
			valorNovo=valorProd-valorProd * 0.06;
			
		}else if(etq == 2){
			valorNovo = valorProd-valorProd * 0.07;
			
		}else if(etq == 3){
			valorNovo = valorProd-valorProd * 0.08;
			
		}else if(etq == 4){
			valorNovo = valorProd-valorProd * 0.09;
		}
	}
		
	if (dep == 2){
		if (etq == 1){
			valorNovo = valorProd-valorProd * 0.063;
			
		}else if(etq == 2){
			valorNovo = valorProd-valorProd * 0.074;
			
		}else if(etq == 3){
			valorNovo = valorProd-valorProd * 0.082;
			
		}else if(etq == 4){
			valorNovo = valorProd-valorProd * 0.091;
		}
	}
		
	if (dep == 3){
		if (etq == 1){
			valorNovo = valorProd-valorProd * 0.056;
			
		}else if(etq == 2){
			valorNovo = valorProd-valorProd * 0.067;
			
		}else if(etq == 3){
			valorNovo = valorProd-valorProd * 0.078;
			
		}else if(etq == 4){
			valorNovo = valorProd-valorProd * 0.109;
		}					
	}
	cout << "Valor do Produto: " << valorProd << endl;
	cout << "Valor com desconto: " << valorNovo << endl;
	return 0;
}
