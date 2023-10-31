#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "LISTADE.H"
        
    void seed(){
        srand(time(NULL));
    }

    int dados(){
        int num;
        num = rand() % 6;
        return num + 1;
    }

    int jogo(tp_listad *caminho){
        tp_no *jogador;
        int jogadas = 0;
        jogador = caminho->ini;

        while(jogador->info != 'f'){

            printf("\n--\n %c", jogador->info); // printa a casa atual

            switch (jogador->info)
            {
            case '1':
                jogador = jogador->ant;
                break;
            case '2':
                jogador = jogador->ant;
                jogador = jogador->ant;
                break;
            case '0':
                jogador = jogador->ant;
                jogador = jogador->ant;
                remove_listad(caminho,'0');
                break;
            
            default:
                break;
            }

            int dado = dados(); // anda
            jogadas += 1;
            for (int i = 0; i < dado; i++){
                if(jogador->prox == NULL)
                    break;
                jogador = jogador->prox;
            }
            
        }
        return jogadas;
    }

int main(){
    tp_listad *lista;
    lista = inicializa_listad();
    insere_listad_no_fim(lista, 'i');
    insere_listad_no_fim(lista, '1');
    insere_listad_no_fim(lista, 'c');
    insere_listad_no_fim(lista, '0');
    insere_listad_no_fim(lista, '1');
    insere_listad_no_fim(lista, 'c');
    insere_listad_no_fim(lista, '1');
    insere_listad_no_fim(lista, '2');
    insere_listad_no_fim(lista, 'f');

    imprime_listad(lista,1);

    printf("\n jogo vai comecar \n");
    printf("-----------------------\n");
    
    seed();

    int jogadas = 0;
    jogadas = jogo(lista);
    printf("\n\njogadas = %d", jogadas);

    printf("\nlista final = ");

    imprime_listad(lista,1);
}
