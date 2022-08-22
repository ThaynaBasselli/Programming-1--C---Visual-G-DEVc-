#include <iostream>
#include <locale.h>

using namespace std;

      float kw, conta, contafinal;

int main (){
    
    setlocale(LC_ALL,"portuguese");
     
     cout <<"Qual é o total de KW consumindo? ";
     cin >>kw;
     
     conta = kw * 0.30; 
    
    //acrescente 10% da bandeira vermelha
    
    contafinal = conta + 0.10 * conta;
    cout <<"O valor fa conta final é:  " <<contafinal;
    }
