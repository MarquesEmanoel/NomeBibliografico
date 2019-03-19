#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 40

/* 
   Objetivo: Transformar um nome em referência bibliográfica
   Autor: Emanoel Roberto Marques da Silva
   Ultima edição: 18/03/2019
*/

int main(int argc, char *argv[]) {
	char nome[TAM],sobrenomes[TAM];
	int pos=0,caracteres,i,flagespaco=0,qtdnomes=1,espacos=0;
	printf("Digite o Nome: ");
	gets(nome);
	caracteres=strlen(nome);
	sobrenomes[0]=toupper(nome[0]);
	sobrenomes[1]='.';
	sobrenomes[2]=' ';
	pos=3;
	for(i=0;i<caracteres;i++){
		if(nome[i]==32 ){
			sobrenomes[pos++]=toupper(nome[i+1]);
			sobrenomes[pos++]='.';
			sobrenomes[pos++]=' ';
			flagespaco=i+1;
			qtdnomes++;
		}
	}
	sobrenomes[qtdnomes*3]='\0';
	for(i=flagespaco;i<caracteres;i++){
		sobrenomes[i]=toupper(sobrenomes[i]);
	}
	printf("Nome Bibliografico: ");
	for(i=flagespaco;i<caracteres;i++){
		printf("%c",toupper(nome[i]));
	}
	printf(", ");
	for(i=0;i<(qtdnomes-1)*3;i++){
		printf("%c",(sobrenomes[i]));
	}
	return 0;
}
