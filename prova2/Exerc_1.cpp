#include <iostream>
#include <locale.h>
#define TAM 5

using namespace std;

//                 Exerc�cio 1  PAR OU IMPAR
/*Jo�o e Maria resolveram jogar v�deo-game, mas deveriam decidir quem 
come�aria. Jo�o falou para decidirem na disputa do par ou �mpar e Maria aceitou. Ent�o
Jo�o e Maria iniciaram uma disputa de PAR ou IMPAR na qual cada um coloca uma certa quan_
_tidade de Dedos (de 0 at� 5)cada um. Se a somat�ria for PAR ent�o o Jo�o ganha. Se a somat�ria
for IMPAR ent�o a Maria ganha. Jo�o sempre aposta em PAR e Maria sempre aposta em IMPAR. Fa�a
um programa que simule e disputa entre Jo�o e Maria para uma disputa de melhor de 5. Quem ganhar 
mais na disputa vence o jogo e come�a jogando o v�deo-game.
_____________________________	  ____________	
RODADA|	 1  | 2	| 3	| 4 | 5 |   /|Jo�o venceu |
JO�O  |	 2  | 4	| 1	| 0	| 3	|  / |a disputa   | 
MARIA |	 2  | 1	| 1	| 3	| 1 | /  |por 3 a 2.  |
Soma  |	 4  | 5 | 2 | 3 | 4 |/   |____________|

OBS: Utilizaro operador%  para calcularresto de divis�o.  */


int main (){
    
    setlocale(LC_ALL,"portuguese");
    
    int P[TAM] = {4,5,2,3,4}, i, dedos, par = 0, impar = 0;
 
 		for (i = 0; i < TAM; i++)
   {
    dedos = P[i]%2;
    if (dedos == 0)
      par++;
    else
      impar++;
   }
   
 cout <<" \n Quantidade de pares = "	<<par;
 cout <<" \n Quantidade de impares = "	<<impar;
 if( par > impar )
 	cout <<" \n Joao Venceu ";
 		else
 			cout <<" \n Maria Venceu ";
 
}
