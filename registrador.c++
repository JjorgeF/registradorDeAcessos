﻿#include<stdio.h>
#define SIZE 100
char nome[SIZE][50];
char email[SIZE][50];
int pront[SIZE];
int op;

void cadastro();
void pesquisa();

int main(void) {
	cadastro();
	pesquisa();
}
void cadastro (){
	static int linha;
	do{
		printf("\nDigite seu nome: "); //AQUI ANOTA OS NOMES DAS PESSOAS
		scanf("%s", &nome[linha]);
		printf("\nDigite seu email: "); //AQUI ANOTA OS EMAILS
		scanf("%s", &email[linha]);
		printf("\nDigite seu prontuario: "); //AQUI ANOTA OS PRONTUÁRIOS
		scanf("%d", &pront[linha]);
		printf("\nDigite '1' para continuar ou outro valor para sair ");
		scanf("%d", &op);
		linha++;
	}while(op==1);
}//AQUI ACABA A PARTE DO CADASTROOOOO

void pesquisa(){ //DAQUI PRA BAIXO É ONDE É POSSÍVEL REALIZAR A PESQUISA NO ""BANCO DE DADOS"" E ACHAR O NOME, PRONTUÁRIO, ETC
	char nomepesquisa[50];
	int prontpesquisa;
	int s;
	
	do{
		printf("\nDigite '1' para pesquisar nome ou '2' para prontuario"); //ONDE ESCOLHE O QUE QUER ACHAR
		scanf("%d", &op);
		switch(op){
			case 1:
				printf("\nDigite o NOME: ");
				scanf("%d", &nomepesquisa);
				for(s=0;s<SIZE;s++){
					if(nome[s]==nomepesquisa){
						printf("\nNome: %s\nEmail: %s\nProntuario: %d", nome[s], email[s], pront[s]);
				}
			}
				break;
			case 2:
				printf("\nDigite o PRONTUARIO: ");
				scanf("%d", &prontpesquisa);
				for(s=0;s<SIZE;s++){
					if(strcmp(pront[s], prontpesquisa)==0){
						printf("\nNome: %s\nEmail: %s\nProntuario: %d", nome[s], email[s], pront[s])
					}
				}
				break;
			default:
				print("\nEscolha incorreta!!!");
				
				break;
		printf("\nDigite '1' para continuar a pesquisa... ")
		scanf("%d", &op);
	}while(op==1);
	
}
