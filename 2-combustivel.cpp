#include <iostream>
#include <locale.h>

using namespace std;

/*				Exerc�cio 2
Fa�a um algoritmo para ler: a quantidade em litros de um
combust�vel e o tipo de combust�vel. Calcular e escrever o
valor final (total = quantidade de litros * pre�o unit�rio), 
sabendo-se que:

COMBUST�VEL         Pre�o UNIT�RIO 
1.Gasolina             R$ 3,50 
2. Diesel              R$ 2,80 
3. Etanol              R$ 2,50 
4. G�s                 R$2,00  
*/

float litros, valor;
int tipo;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	cout << "Qual � a quantidade de litros: ";
	cin >> litros;
	cout << "Informe o tipo de combust�vel: " << endl <<"1 - Gasolina" << endl <<"2 - Diesel" << endl << "3 - Etanol" << endl << "4 - G�s " << endl;
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
	
	cout << "O valor final � de: " << valor << "R$" << endl;
	return 0;
}
