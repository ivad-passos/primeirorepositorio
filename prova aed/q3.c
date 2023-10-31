#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "LISTASE.H"
        
    void seed(){
        srand(time(NULL));
    }

    int dados(){
        int num;
        num = rand() % 6;
        return num;
    }

    void jogo(tp_listase *caminho){
        tp_listase *jogador;
        int jogadas = 0;

        jogador = caminho;

        while(jogador != NULL){
            printf("\n%c", jogador->info);
            if(jogador->info =='c') 
                printf(" => estou em casa\n");
            if(jogador->info =='0') 
                printf(" => destruir\n");
            if(jogador->info =='f') 
                printf(" => terminei!!!\n");
            else 
                printf("\n");
            jogador = jogador->prox;
        }
    }

int main(){
    tp_listase *lista;
        lista = inicializa_listase();
        insere_listase_no_fim(&lista, 'c');
        insere_listase_no_fim(&lista, '1');
        insere_listase_no_fim(&lista, '2');
        insere_listase_no_fim(&lista, '0');
        insere_listase_no_fim(&lista, '1');
        insere_listase_no_fim(&lista, 'c');
        insere_listase_no_fim(&lista, '0');
        insere_listase_no_fim(&lista, '1');
        insere_listase_no_fim(&lista, 'f');
    
    int num = dados();
    seed();
    
    jogo(lista);
}
