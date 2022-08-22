#include <iostream>
#include <locale.h>

using namespace std;

int a,b,c;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	cout << "Qual a quantidade disponível do medicamento A, B e C: ";
	cin >>a >>b >>c;
	
	if (a <= b && a <= c){
		cout << a << "Pessoas que poderão ser imunizadas:" << endl;
		
		}else if(b <= a && b <= c){
			cout << b << "Pessoas que poderão ser imunizadas:" << endl;
			
				}else if( c <= a && c <= b){
				cout << c << "Pessoas que poderão ser imunizadas:" << endl;
	}
	
	return 0;
}
