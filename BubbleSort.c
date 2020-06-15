#include<stdio.h>
#include<stdlib.h>

long int comparar=0, trocas=0;

void BubbleSort (int A[ ], int n) //n é o tamanho do vetor
{
	int i, j, troca;
	for (i = n-1; i >= 1; i--)
 	{
 		comparar++;
 		for (j= 0; j < i ; j++)
 		{
 			comparar++;
 			if (A[j] < A[j+1])
 			{
				troca = A[j];
				trocas++;
 				A[j] = A[j+1];
 				trocas++;
 				A[j+1] = troca;
 				trocas++;
 			}
 		}
 	}
}

