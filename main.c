#include<stdio.h>
#include "my_mat.h"
#define MIN_ARGS 1

void debugPrinter(int[SIZE][SIZE]);

int main(int argc, char **argv)
{
    int mat[SIZE][SIZE];
	char c;
	do
	{
		scanf("%c",&c);
		switch (c)
		{
			case 'A':
				inputMatrix(mat);
				debugPrinter(mat);
			case 'B':
				pathExists(mat, 0, 2)?printf("True\n"):printf("False\n");
			case 'C':
				printf("%d\n",shortestPath(mat, 0, 2));
			case 'D':
				break;
			default:
				continue;
		}
	}while(TRUE);
	
    return 0;
}

void debugPrinter(int mat[SIZE][SIZE])
{
	for(int i = 0;i < SIZE;i++)
	{
		for(int j = 0;j < SIZE;j++)
		{
			printf(" %d ", mat[i][j]);
		}
		printf("\n");
	}
}

