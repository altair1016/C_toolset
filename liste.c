#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main (char *argv[], int argc){
	Lista* lista;
	lista = inizializza();
	inserire(lista, 4);
	inserire(lista, 5);
	inserire(lista, 11);
	stampa(lista);
	elimina(lista);
	stampa(lista);
	return 0;

}// FINE MAIN

Lista* inizializza(){

	Lista* lista = malloc(sizeof(*lista));
	Elemento* elemento = malloc(sizeof(*elemento));
	if (lista==NULL || elemento==NULL){
		exit(EXIT_FAILURE);
	}
	elemento->numero = 0;
	elemento->successivo = NULL;
	lista->primo = elemento;
	return lista;
}

void inserire(Lista* lista, int nuovoNum){
	Elemento* nuovo = malloc (sizeof(Elemento*));
	if (lista==NULL || nuovo == NULL){
		exit(EXIT_FAILURE);
	}
	nuovo-> numero = nuovoNum;
	nuovo->successivo = lista -> primo;
	lista->primo = nuovo;
}


void stampa(Lista *lista){
	if (lista == NULL)
	{	
		exit(EXIT_FAILURE);
	}
	Elemento *attuale = lista ->primo;
	while(attuale!=NULL)
	{
		printf("%d", attuale->numero);
		attuale = attuale -> successivo;
	}
	printf("NULL\n");
}
void elimina(Lista *lista){
	if (lista->primo != NULL)
	{
		Elemento *eliminare = lista->primo;
		lista->primo = lista->primo->successivo;
		free(eliminare);
	}
	

}
	

