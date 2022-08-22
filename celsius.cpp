#include <iostream>
#include <locale_h>

using namespace std;

      float fahr, celsius;
      
int main (){
    
    setlocale(LC_ALL,"portuguse");
    
    cout <<"Fahrenheit = ";
    cin >>fahr;
    
    //Converte Fahrenheit em Celsius
    
    celsius = (5.0/9)*(fahr-32);
    
    cout <<"O Celsius é: " <<celsius;
    
}
