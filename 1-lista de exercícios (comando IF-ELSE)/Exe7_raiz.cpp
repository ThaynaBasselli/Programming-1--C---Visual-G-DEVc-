#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

	float a, b, c, x1, x2, delta;

int main(){
	
	setlocale(LC_ALL, "");
	
	cout << "1° coeficiente: ";
	cin >> a;
	cout << "2° coeficiente: ";
	cin >> b;
	cout << "3° coeficiente: ";
	cin >> c;
	
	delta = pow(b, 2)-4*a*c;
	

	if (delta >= 0){
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		cout << "As raízes reais são, " << x1 << " e " << x2; 
			
	}else{
		cout << "Não existem raízes reais.";
	}	
} 
