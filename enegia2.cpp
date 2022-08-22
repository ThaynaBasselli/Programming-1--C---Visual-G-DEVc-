#include <iostream>
#include <locale_h>
#define VALORKW 0.30

using namespace std;

      float kw, conta, contafinal;
      
int main (){
    
    setlocale(LC_ALL,"portuguese");
    
    
    cout<<"Total de KW consumido: ";
    cin >>kw;
    
    conta = kw * VALORKW;   //acrescenta 10% da bandeira vermelha
    contafinal = conta + 0.10 * conta;
    cout <<"O vvalor da sua conta fina será: " <<contafinal;
    }
