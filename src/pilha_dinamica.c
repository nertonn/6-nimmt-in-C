#include <stdlib.h>
#include <stdio.h>
#include "cartaStruct.h"
#include "pilha_dinamica.h"


typedef struct elemento* Elemento;

Pilha pilhaCriar(){
    Pilha *baralho;
    baralho = (Pilha*)malloc(sizeof(Pilha));
    if (baralho != NULL)
        baralho = NULL;
    return baralho;
}

int pilhaInserir(Pilha baralho , carta newcard){
    if (baralho){
            Elemento novo = (Elemento)malloc(sizeof(Elemento));
            if (novo){
                novo->data = newcard;
                novo->ant = baralho->top;
                baralho->top = novo;
                baralho->qtd++;
                return 1;
            }
            return 0;
    }
    return 0;
}

int pilhaRemover(Pilha *baralho,struct carta *remov){
    if (baralho == NULL || *baralho==NULL) return 0;

    else {
        Elemento *aux= *baralho;
        *remov = aux->dados;
        *baralho = aux->prx;
        free(aux);
        return 1;
    }
}

int pilhaTamamho(Pilha baralho){
    if (baralho == NULL){
        return 1;
    }
    return baralho->qtd;
}


void pilhaEmbaralhar(Pilha baralho){

    srand(time(NULL));
    for(int i=0;i<104;i++)
    {
        int rand = rand()%104+1;
        if(baralho==NULL)
            return 0;
        else{
             Elemento *aux=baralho+i;
             Elemento *aux2=rand;
             aux2=baralho+i;
             aux=rand;
        }
    }
}
