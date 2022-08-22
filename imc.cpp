#include <iostream>
#include <locale.h>

using namespace std;

      float imc, peso, alt;

int main (){
    
    setlocale(LC_ALL,"portuguese");
    
    cout <<"Digite o seu peso: ";
    cin >>peso;
    
    cout <<"Digite sua altura: ";
    cin >>alt;
    
    imc = peso/(alt * alt);
    
    cout <<"O seu IMC é: " <<imc;
    
    }
