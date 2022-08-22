#include <iostream>
#include <locale.h>

using namespace std;

/*					Exercício 3 
A Caixa Econômica Federal  quer verificar se um trabalhador está
qualificado para a receber um auxílio emergencial de R$600,00 ou não.
Para estar em condições, os seguintes requisitos devem ser satisfeitos:  
 
- Não ser aposentado. - Ser trabalhador Informal ou Microeemprendedor.  
- Não estar recebendo nenhum outro auxílio do Governo. 
 
Com base nas informações acima, faça um programa que leia as
informações e verifique se a pessoa tem direito ao auxílio ou não. */

int p1, p2, p3;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	cout << "Responda as perguntas para analise do auxílio:" << endl << endl;
	
	cout << "Você é aposentado? (1-Sim/2-Não)" << endl;
	cin >> p1;
	
	cout << "É trabalhador informal ou Microempreendedor? (1-Sim/2-Não)" << endl;	
	cin >> p2;
	 
	cout << "Está recebendo algum auxílio do Governo? (1-Sim/2-Não)" <<endl;
	cin >> p3;
	
	if (p1 == 2 && p2 == 1 && p3 == 2){
		cout << "Parabéns, você está qualificado para receber o auxílio!!!";
	}else{
		cout << "Infelizmente você não está qualificado para receber o auxílio!!!";
	}
	return 0;
}
