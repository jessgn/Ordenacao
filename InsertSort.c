#include<stdio.h>
#include<stdlib.h>

long int comp=0, trocas=0;
void InsertionSort(int vet[ ], int n) 
{
	int i = 0;
	int j = 1;
	int aux = 0;
	while(j < n)
	{
		comp++;
		aux = vet[j];
		trocas++;
 		i=j-1;
 		while((i >= 0) && (vet[i] > aux))
 		{
 			vet[i + 1] = vet[i];
 			i=i-1;
 			trocas++;
 		}
 		vet[i + 1] = aux;
 		trocas++;
 		j=j+ 1;
 	}
}

