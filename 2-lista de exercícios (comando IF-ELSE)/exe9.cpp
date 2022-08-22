#include <iostream>
#include <locale.h>

using namespace std;

/*				Exercício 9
Faça um programa que recebe a idade de um nadador e classifique-o
numa das seguintes categorias:
• Adulto (idade >= 18); 
• Juvenil (idade >= 14 e idade < 18);
• Infantil (idade >=9 e idade < 14); 
• Mirim (Idade < 9).      */

int idade;
    
int main (){
    
    setlocale(LC_ALL,"portuguese");
    
    cout <<"Qual a idade do Nadador: ";
    cin >>idade;  
	
	
if (idade >= 18 ) 
   cout <<"Categoria: Adulto";	  
    
   		else if (idade >= 14  &&  idade < 18) 
    	cout <<"Categoria é: Juvenil";
    		
    		else if (idade >= 9  &&  idade < 14 )
     		cout <<"Categoria é: Infantil";
     		
     			else
    			cout <<"Categoria é: Mirim"; 			

}
