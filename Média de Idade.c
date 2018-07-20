#include <stdio.h>
#include <stdlib.h>

//Nome: Reginaldo RA:2650831813029 Renata Carrillo RA:2650831813024
//Data: 22/06/2018
//Curso: Sistemas para Internet 1ºSemestre
//Disciplina: Algoritmo e Lógica da Programação
//Professor: Thiago
//Atividade Final: Atividade 3

int main(int argc, char *argv[]) {
	
	int i, data[10], idade, acumulador;
	
	//Recebe as 10 datas de nascimento
	
	for(i=0; i<10; i++){
		printf("Digite o ano de nascimento da pessoa %d\n",i);
		scanf("%d", &data[i]);
	}
	
	//Calcula as 10 idades dos 10 indivíduo
	
    for(i=0; i<10; i++){
    	printf("\nA idade do individuo %d eh de %d \n", i,(2018-data[i]));
	}
	return 0;
}
