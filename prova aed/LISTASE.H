    #ifndef LISTASE_H
    #define LISTASE_H
    #include <stdio.h>
    #include <stdlib.h>

    typedef char
        tp_item;

    typedef struct tp_no{
        tp_item info;
        struct tp_no *prox;
    }tp_listase;

    tp_listase * inicializa_listase(){ // atribui NULL ao 1o no da Lista SE // em código: lista = inicializa_listase
            return NULL;
    }

    int listase_vazia(tp_listase *lista){
        if(lista==NULL) return 1;
        return 0;
    }

    tp_listase * aloca_listase(){ // ela ira alocar um espaco na memoria
        tp_listase *novo_no;
        novo_no = (tp_listase*) malloc(sizeof(tp_listase));
        return novo_no;
    }

    int insere_listase_no_fim(tp_listase **l, tp_item e){ // no codigo: insere...(lista, 10...)
        tp_listase *novo_no, *atu;
        novo_no = aloca_listase(); // aqui esta pegando o novo no e apontando para o NULL
        if(novo_no == NULL)
            return 0; // nao aloca memoria
        //atribuir os valores para o novo no:
        novo_no->info = e;
        novo_no->prox = NULL;
        //finaliza o encadeamento do no
        if(listase_vazia(*l)){ // se for o primeiro no, entra aqui
            *l = novo_no;
        }
        
        else {
            atu = *l;
            while(atu->prox != NULL){
                atu = atu->prox; // aponta para o ultimo no
            }
            atu->prox = novo_no;
        }
        return 1;
    }

    void imprime_listase(tp_listase *lista){
        tp_listase *atu;
        atu = lista;
        while(atu != NULL){
            printf("%d\n", atu->info);
            atu = atu->prox;
        }
    }

    int remove_listase(tp_listase **lista, tp_item e){
        tp_listase *ant, *atu;
        atu = *lista;
        ant = NULL;
        while((atu != NULL) && (atu->info != e)){
            ant = atu;
            atu = atu->prox;
        }
        if(atu == NULL){
            return 0;
        }
        if(ant == NULL){
            *lista = atu->prox;
        }
        else{
            ant->prox = atu->prox;
        }
        free(atu);
        atu = NULL;
        return 1;
    }

    tp_listase *busca_listase(tp_listase *lista, tp_item e){
        tp_listase *atu;
        atu = lista;
        while((atu != NULL) && (atu->info != e)){
            atu = atu->prox;
        }
        if(atu == NULL) return NULL;
        return atu;
    }

    int tamanho_listase(tp_listase *lista){
        int cont = 0;
        tp_listase *atu;
        atu = lista;
        while(atu != NULL){
            cont++;
            atu = atu->prox;
        }
        return cont;
    }

    void destroi_listase(tp_listase **l){
        tp_listase *atu;
        atu = *l;
        while(atu != NULL){
            *l = atu->prox;
            free(atu);
            atu = *l;
        }
        *l = NULL;

    }
    int listase_igual(tp_listase *l1, tp_listase *l2){
        tp_listase *atu1, *atu2;
        atu1=l1;
        atu2=l2;
        if(tamanho_listase(atu1)!=tamanho_listase(atu2))return 0;
        while(atu1!=NULL){
            if(atu1->info!=atu2->info){
                return 0;
            }
            atu1=atu1->prox;
            atu2=atu2->prox;
            }
            return 1;
    }

    #endif

 