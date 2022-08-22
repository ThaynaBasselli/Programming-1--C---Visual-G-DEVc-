#include <iostream>
#include <locale.h>

using namespace std;

/*				Exercício 2
Faça um algoritmo para ler: a quantidade em litros de um
combustível e o tipo de combustível. Calcular e escrever o
valor final (total = quantidade de litros * preço unitário), 
sabendo-se que:

COMBUSTÍVEL         Preço UNITÁRIO 
1.Gasolina             R$ 3,50 
2. Diesel              R$ 2,80 
3. Etanol              R$ 2,50 
4. Gás                 R$2,00  
*/

float litros, valor;
int tipo;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	cout << "Qual é a quantidade de litros: ";
	cin >> litros;
	cout << "Informe o tipo de combustível: " << endl <<"1 - Gasolina" << endl <<"2 - Diesel" << endl << "3 - Etanol" << endl << "4 - Gás " << endl;
	cin >> tipo;
	
	if (tipo == 1){
		valor = litros * 3.50;
		
	}else if (tipo == 2){
		valor = litros * 2.80;
			
	}else if (tipo == 3){
		valor = litros * 2.50;
			
	}else if (tipo == 4){
		valor = litros * 2.00;
	}
	
	cout << "O valor final é de: " << valor << "R$" << endl;
	return 0;
}
