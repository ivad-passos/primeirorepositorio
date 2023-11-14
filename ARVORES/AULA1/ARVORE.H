#ifndef ARVORE_H
#define ARVORE_H
#include <stdio.h>
#include <stdlib.h>

typedef int tp_item;

typedef struct tp_no {
  struct tp_no *esq;
  tp_item info;
  struct tp_no *dir;
} tp_no;

typedef tp_no *tp_arvore;

tp_arvore inicializa_arvore() { return NULL; }

int arvore_vazia(tp_arvore raiz) {
  if (raiz == NULL)
    return 1;
  else
    return 0;
}

tp_no *aloca_no(tp_no *p) { // aloca e retorna o endereço
  tp_no *no;
  no = (tp_no *)malloc(sizeof(tp_no));
  return no;
}

void pre_ordem(){
  if(p!=NULL){
    pre_ordem(p->esq);
    pre_ordem(p->dir);
  }
}

void em_ordem(tp_no *p){
  
}

#endif

