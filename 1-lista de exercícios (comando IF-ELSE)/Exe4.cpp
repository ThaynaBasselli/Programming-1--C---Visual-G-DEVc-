#include <iostream>
#include <locale.h>

using namespace std;

//                   Exercício 4
/*  Dados o sexo e a altura de uma pessoa calcule o Peso Ideal
que esta pessoa deveria ter. PesoIdeal= 72.7*altura – 58   (Homens)
PesoIdeal = 62.1*altura – 44.7  (Mulheres) */
 
      int sexo; 
  	  float altura, pesoideal;
  
int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	cout <<"Digite a sua altura: ";
	cin >>altura;
	cout <<"Seu sexo é: "  <<"\n"  <<"1.Masculino ou 2.Feminino ";
	cin >>sexo;  
	
	  if (sexo == 1 ){
	    pesoideal = 72.7 * altura - 58;
		cout <<"Seu peso ideia é: "  <<pesoideal  <<"\n";	  
	  }else{
		pesoideal = 62.1 * altura - 44.7; 	  
	    cout <<"Seu peso ideia é: "  <<pesoideal  <<"\n";
	  }
}
