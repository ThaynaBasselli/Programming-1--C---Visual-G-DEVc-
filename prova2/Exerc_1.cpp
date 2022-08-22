#include <iostream>
#include <locale.h>
#define TAM 5

using namespace std;

//                 Exercício 1  PAR OU IMPAR
/*João e Maria resolveram jogar vídeo-game, mas deveriam decidir quem 
começaria. João falou para decidirem na disputa do par ou ímpar e Maria aceitou. Então
João e Maria iniciaram uma disputa de PAR ou IMPAR na qual cada um coloca uma certa quan_
_tidade de Dedos (de 0 até 5)cada um. Se a somatória for PAR então o João ganha. Se a somatória
for IMPAR então a Maria ganha. João sempre aposta em PAR e Maria sempre aposta em IMPAR. Faça
um programa que simule e disputa entre João e Maria para uma disputa de melhor de 5. Quem ganhar 
mais na disputa vence o jogo e começa jogando o vídeo-game.
_____________________________	  ____________	
RODADA|	 1  | 2	| 3	| 4 | 5 |   /|João venceu |
JOÃO  |	 2  | 4	| 1	| 0	| 3	|  / |a disputa   | 
MARIA |	 2  | 1	| 1	| 3	| 1 | /  |por 3 a 2.  |
Soma  |	 4  | 5 | 2 | 3 | 4 |/   |____________|

OBS: Utilizaro operador%  para calcularresto de divisão.  */


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
