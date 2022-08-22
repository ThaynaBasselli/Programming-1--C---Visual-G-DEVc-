#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//					Exercício 4
/*Fazer um programa que dado 1 VETOR com 10 elementos que 
armazena os valores dos casos de DENGUE em 10 cidades da região, CALCULAR:

1. O total de casos de DENGUE na região.
2. Qual cidade teve o maior número de casos e quantos casos
3. Quais cidades tiveram números de casos acima da média.
4. Qual a porcentagem de casos de cada cidade, em relação ao total de casos.*/

int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	int qtdCasos[10], somaTotal = 0, maiorCaso = 0, cidadeMC = 0;
	float mediaCasos = 0.00, ptgCaso = 0.00;
	
	for (int i = 0; i < 10; i++){
		printf("Digite a quantidade de casos da cidade #%d:", i+1);
		scanf("%d",&qtdCasos[i]);
	}
	
	system("CLS");
	
	for(int i = 0;i < 10; i++){
		somaTotal += qtdCasos[i];
	}
	
	printf("%d casos registrados ao total\n", somaTotal);
	
	for(int i = 0; i < 10; i++){
		if(maiorCaso < qtdCasos[i]){
			cidadeMC = i+1;
			maiorCaso = qtdCasos[i];
		}
	}
	
	printf("\nA cidade #%d esta com mais casos registrados, totalizando %d casos registrados\n", cidadeMC, maiorCaso);
	
	mediaCasos = somaTotal / 10;
	
	for(int i = 0; i < 10; i++){
		if(qtdCasos[i] > mediaCasos){
			printf("\nA cidade #%d esta acima da media com %d casos registrados", i+1, qtdCasos[i]);
		}
	}
	
	printf("\n");
	
	for(int i = 0; i < 10; i++){
		ptgCaso = (qtdCasos[i] * 100) / somaTotal;
		
		printf("\nA cidade #%d corresponde a %.2f por cento dos casos registrados com %d casos", i+1, ptgCaso, qtdCasos[i]);
	}
}
