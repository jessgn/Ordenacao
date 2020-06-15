#include <stdio.h>
#include<stdlib.h>


void quickSort(int *V, int inicio, int fim){
	int pivo;
	if(fim > inicio){
		pivo= particiona(V, inicio, fim);
		quickSort(V, inicio, pivo-1);
		quickSort(V, pivo+1, fim);
	}
}

int particiona(int *V, int inicio, int final){
	int esq, dir, pivo, aux;
	esq= inicio;
	dir= final;
	pivo = V[inicio];
	while (esq <dir){
		while(V[esq] <= pivo) // Avança posição da esquerda
			esq++;	
			while(V[dir] > pivo) // Recua posição da direita
				dir--;
				if(esq < dir){ //Troca esquerda e direita
					aux = V[esq];
					V[esq] = V[dir];
					V[dir] = aux;
		}
	}
	V[inicio] = V[dir];
	V[dir] = pivo;
	return dir;
}



