#include <stdio.h>
#include "ARVORE.h"

int main() {
  tp_arvore arvore;
  arvore = inicializa_arvore();
  if (arvore_vazia(arvore) == 1) {
    printf("vazia");
  }
}