#include <iostream>
#include <locale.h>

using namespace std;

/*					Exerc�cio 3 
A Caixa Econ�mica Federal  quer verificar se um trabalhador est�
qualificado para a receber um aux�lio emergencial de R$600,00 ou n�o.
Para estar em condi��es, os seguintes requisitos devem ser satisfeitos:  
 
- N�o ser aposentado. - Ser trabalhador Informal ou Microeemprendedor.  
- N�o estar recebendo nenhum outro aux�lio do Governo. 
 
Com base nas informa��es acima, fa�a um programa que leia as
informa��es e verifique se a pessoa tem direito ao aux�lio ou n�o. */

int p1, p2, p3;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	cout << "Responda as perguntas para analise do aux�lio:" << endl << endl;
	
	cout << "Voc� � aposentado? (1-Sim/2-N�o)" << endl;
	cin >> p1;
	
	cout << "� trabalhador informal ou Microempreendedor? (1-Sim/2-N�o)" << endl;	
	cin >> p2;
	 
	cout << "Est� recebendo algum aux�lio do Governo? (1-Sim/2-N�o)" <<endl;
	cin >> p3;
	
	if (p1 == 2 && p2 == 1 && p3 == 2){
		cout << "Parab�ns, voc� est� qualificado para receber o aux�lio!!!";
	}else{
		cout << "Infelizmente voc� n�o est� qualificado para receber o aux�lio!!!";
	}
	return 0;
}
