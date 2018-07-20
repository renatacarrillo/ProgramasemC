#include <stdio.h>
#include <stdlib.h>
#define MAX 20

//Nome: Reginaldo RA:2650831813029 Renata Carrillo RA:2650831813024
//Data: 22/06/2018
//Curso: Sistemas para Internet 1ºSemestre
//Disciplina: Algoritmo e Lógica da Programação
//Professor: Thiago
//Atividade Final: Atividade 5

/* Crie um programa que receba um histórico de peso de 1 indivíduo contendo 20 peso diferentes */
/*deifinir qual o maior o menor e a média de pesos */


int main(int argc, char *argv[]) {
	
	int i;
	float peso[MAX], media, maior, menor;
	
	//Recebe as informações 20 vezes
	
	for(i=0; i<MAX; i++){
		printf("Digite o %d peso:",i);
		scanf("%f", &peso[i]);
	}
	
	//Guarda todo o pesos no vetor media
	
	for(i=0; i<MAX; i++){
		media = media + peso[i];
	}
	
	//Identifica o menor e o maior peso
	
	for(i=0; i<MAX; i++){
		if(i==0)
		{
			menor=peso[i];
			maior=0;
		}
		if(peso[i]>maior){
			maior = peso[i];
		}
		if(peso[i]<menor){
			menor = peso[i];
		}
	}
	//Apresenta o valor da média 
	
	printf("\nMedia eh igual a %0.2f\n",(media/MAX));
	printf("\nMenor peso foi de %0.2f\n",menor);
	printf("\nMaior peso foi de %0.2f\n",maior);
	
	return 0;
}
