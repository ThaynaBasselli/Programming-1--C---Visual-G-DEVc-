#include <iostream>
#include <locale_h>

using namespace std;

      float valorlitro, valorconta, qtdabast;
     
int main (){

    setlocale(LC_ALL,"portuguese");
    
    cout <<"Qual � o valor do litro? ";
    cin >>valorlitro;
    
    cout <<"Qual � a quantidade abastecida? ";
    cin >>qtdabast;
    
    valorconta = valorlitro * qtdabast;
    cout <<"O valor da conta �: "; <<valorconta;

    }     
   
