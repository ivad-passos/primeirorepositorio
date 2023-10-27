#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 4

void limpaMatriz(char matriz[TAM][TAM]){
	int i,j;
	for (i=0; i<TAM; i++){
		for (j=0; j<TAM; j++){
			matriz[i][j]='~';
		}
	}
}

void imprimeMatriz(char matriz[TAM][TAM]){
	int i,j;
	for (i=0; i<TAM; i++){
		for (j=0; j<TAM; j++){
			printf("%c ", matriz[i][j]);
		}
		printf("\n");
	}
}

int validaMatriz(char matriz[][TAM], int linha, int coluna){
	int i,j;
	for (j=0; j<coluna; j++){
		if ( matriz[linha][j]=='R' ) //percorre as linhas das colunas anteriores (esquerda)
		   return 0;   //Inválido. Encontrada rainha na mesma coluna que pode matar a outra.
    	}
		
	for (i=linha,j=coluna; i>=0 && j>=0; i--, j--) {
		if ( (matriz[i][j]=='R') ) //percorre na diagonal pra esquerda/inferior
		   return 0;   //Inválido. Encontrada rainha na mesma linha que pode matar a outra.
    	}		

	for (i=linha,j=coluna; i<TAM && j>=0; i++, j--) {
		if ( (matriz[i][j]=='R') ) //percorre na diagonal pra esquerda/superior
		   return 0;   //Inválido. Encontrada rainha na mesma linha que pode matar a outra.
    	}
    			
	return 1; 	 	
}

int posicionaRainha(char matriz[TAM][TAM], int col){ //col serve como a coluna da matriz

    if (col>=TAM)
       return 1;
       
    int i;
    
    for (i=0; i<TAM; i++){     //percorre as linhas de cada coluna
    
		if ( validaMatriz(matriz, i, col) ) { //verifica se a posição está correta
			matriz[i][col] = 'R';
			
    		if (posicionaRainha(matriz, col+1) )	
 				return 1;
 			else
 				matriz[i][col] = '~';					
		}
	}
    return 0;	
}



int main(){
	int col=0;  //quantidade de rainhas posicionadas corretamente;
	char matriz[TAM][TAM];
	limpaMatriz(matriz);
	posicionaRainha(matriz, col);
	imprimeMatriz(matriz);
	return 0;
}
