#include <iostream>
#include <locale.h>
#define SENHA 997638847

using namespace std;

	int senhacofre;

int main(){
	
	setlocale(LC_ALL, "portuguese");

	cout << "Digite a senha para abrir o Cofre: ";
	cin >> senhacofre;
	
	if (senhacofre == SENHA){
		cout << "Acesso Permitido.";
	}else{
		cout << "Acesso Negado.";
	}
} 
