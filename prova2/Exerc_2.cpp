#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

//				Exerc�cio 2	
/*Fa�a umprograma que leia os dados dos pontos A ( x1, y1 ) e 
B ( x2, y2) e fa�a uma FUN��O para calcular a dist�ncia entre os pontos
A e B ( dA B): (figura est�n slide dos da prova).    */
	
	float CalcuDistan (int X1, int Y1, int X2, int Y2)
	{
		float distan;
		int A, B;
		
		A = pow (X2 - X1,2);
		B = pow (Y2 - Y1,2);
		distan = sqrt( A + B);
		
		return distan;
	}

int main(){
	
	 setlocale(LC_ALL,"portuguese");
	
	int x1,y1,x2,y2;
	float distan;
	
	cout <<"\n Digite as coordenadas para o primeiro ponto(X1):  ";
	cin>> x1;
	
	cout <<"\n Digite as coordenadas para o primeiro ponto(Y1):  ";
	cin>> y1;
	
	cout <<"\n Digite as coordenadas para o segundo ponto(X2):  ";
	cin>> x2;
	
	cout <<"\n Digite as coordenadas para o segundo ponto(Y2):  ";
	cin>> y2;
	
	distan = CalcuDistan(x1, y1, x2, y2);
	
	cout <<"\n A dist�ncia entre os pontos � = " <<distan;
	
}
