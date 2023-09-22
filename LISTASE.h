#ifndef LISTASE_H
#define LISTASE_H


#include <stdio.h>
#include <stdlib.h>

typedef int tp_item;

typedef struct tp_no{
    tp_item info;
    struct tp_no *prox;
}tp_listase;


#endif