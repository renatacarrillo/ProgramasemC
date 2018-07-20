#include <stdio.h>
#include <stdlib.h>

//Nome: Reginaldo RA:2650831813029 Renata Carrillo RA:2650831813024
//Data: 22/06/2018
//Curso: Sistemas para Internet 1ºSemestre
//Disciplina: Algoritmo e Lógica da Programação
//Professor: Thiago
//Atividade Final: Atividade 4

/* Um programa que receba 10 preços e soma o valor total da compra*/
/* Mostre quanto o indivíduo pagou e exiba um alerta caso falte dinheiro, ou o valor do troco caso haja troco (exiba 0 em caso de valor igual)*/

int main(int argc, char *argv[]) {
	
	//Declaração das variáveis
	
	int i;
	float valor[10], soma=0, pagou=0, troco=0, falta=0, zerou=0;
	
	//Entrada dos valores digitados
	
	for (i=1; i<11; i++){
		printf("\nValor do produto %d=",i);
		scanf("%f", &valor[i]);
	}
	
	//Calculo da soma
	
	for (i=1; i<11; i++){
			soma = soma + valor[i];
		}
	
	//Saida do Valor da Soma
	
	printf("\nValor total da compra = %0.2f",soma);
	
	//Entrada do quanto o indivíduo pagou na compra
	
	printf("\n\n\nDigite o valor que voce vai pagar = ");
	scanf("%f", &pagou);
	
	//Verificar se vai ter troco ou não
	
	{
		
		if(soma<pagou){
			troco = pagou - soma;
			printf("\n\nTroco= %0.2f",troco);
		}
		
		if(soma>pagou){
			falta = pagou - soma;
			printf("\n\nFalta= %0.2f",falta);
			
		}
		
		if(soma=pagou){
			zerou = soma - pagou;
			printf("\n\n%0.2f",zerou);
		}
	}
	
	return 0;
}
