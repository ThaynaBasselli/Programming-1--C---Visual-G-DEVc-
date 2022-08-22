#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

//					Exerc�cio 3
/*A Companhia de SEGUROS adota para o c�lculo do valor 
a ser pago pelo propriet�rio de ve�culos a seguinte tabela:
_____________________________________________________
|	VE�CULO 		|	Taxa sobre o VALOR DO VE�CULO|
|1.Passeio 			|				4%               |
|2.Utilit�rio 		|				5%               |
|3.Van 			 	|				3%               |
|4.�nibus 		 	|				3%               |
|5.Caminh�es		|				2%               |
------------------------------------------------------

Al�m do valor acima � acrescentado uma TAXA SOBRE O VALOR DO
SEGURO dependendo da quantidade de pessoas que for dirigir o 
ve�culo, conforme a tabela abaixo:

_____________________________________________________
|	Quantidade de Motoristas		|	   TAXA      |
|				1					|	  insento    |
|				2 					|		10%      |
|			3 ou mais				|		20%      |
------------------------------------------------------

Suponha uma empresa que vai fazer o seguro de seus 5 ve�culos, calcule
o valor total do seguro a ser pago. Fa�a uma FUN��O para calcular o valor
do seguro.*/
 

float calculaValorSeguro(int veiculo, int motorista, float valorVeiculo){
	printf("\n------------------------------");
	if(motorista != 1){
		if(motorista == 2){
			valorVeiculo += valorVeiculo * 0.01;
			
			printf("\nTaxa de 10 por cento por 2 motoristas");
		}
		else{
			valorVeiculo *= valorVeiculo * 0.02;
			printf("\nTaxa de 20 por cento por 3 ou mais motoristas");
		}
	}
	
	switch(veiculo){
		case 1:
			valorVeiculo += valorVeiculo * 0.004;
			printf("\nTaxa de 4 por cento por veiculo de passeio");
			break;
			
		case 2:
			valorVeiculo += valorVeiculo * 0.005;
			printf("\nTaxa de 5 por cento por veiculo utilitario");
			break;
			
		case 3:
			valorVeiculo += valorVeiculo * 0.003;
			printf("\nTaxa de 3 por cento por van");
			break;
			
		case 4:
			valorVeiculo += valorVeiculo * 0.003;
			printf("\nTaxa de 3 por cento por onibus");
			break;
			
		case 5:
			valorVeiculo += valorVeiculo * 0.002;
			printf("\nTaxa de 2 por cento por caminhao");
			break;
	}
	
	printf("\nO valor total ser� de R$%.2f",valorVeiculo);
	printf("\n------------------------------");
}

int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	int veiculo[5], qtdPessoas[5];
	float valorVeiculo[5];
	
	for(int i = 0; i < 5; i++){
		printf("1 - Passeio");
		printf("\n2 - Utilit�rio");
		printf("\n3 - Van");
		printf("\n4 - �nibus");
		printf("\n5 - Caminh�es");
		printf("\nDigite o c�digo da categoria do ve�culo: ");
		scanf("%d", &veiculo[i]);
		printf("Digite o valor do ve�culo: ");
		scanf("%f", &valorVeiculo[i]);
		printf("Digite a quantidade de motoristas do ve�culo: ");
		scanf("%d", &qtdPessoas[i]);
				
		system("cls");
	}	
	
	for(int i=0; i<5; i++){
		calculaValorSeguro(veiculo[i], qtdPessoas[i], valorVeiculo[i]);
	}
}
