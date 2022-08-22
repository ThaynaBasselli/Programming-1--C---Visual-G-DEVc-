#include <iostream>
#include <locale_h>                //Se no programa tiver algum aceto, isso vai reconhecer o acento

using namespace std;

      float nota1, nota2, media;
      
int main (){
    
     setlocale(LC_ALL,"portuguese");             //Isso também vai reconhecer o acento

     cout <<"Digite sua primeira nota: ";
     cin >>nota1;
     cout <<"Digite sua segunda nota: ";
     cin >>nota2;
     
        media = (nota1+nota2)/2;
        
      cout <<"Sua média é: " <<media;   
    
    }
