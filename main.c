#include<stdio.h>
#include "my_mat.h"
#define MIN_ARGS 2

int main(int argc, char **argv)
{
    int mat[SIZE][SIZE];
	char c;
    if(argc > MIN_ARGS)
    {
		FILE *f;
		f = fopen(argv[1], "r"); 
		do
		{
			c = (char)fgetc(f);
			switch (c)
			{
				case 'A':
					inputMatrix(mat);
				case 'B':
					pathExists(mat, (char)fgetc(f) - '0', (char)fgetc(f) - '0')?printf("True"):printf("False");
				case 'C':
					printf("%d",shortestPath(mat, (char)fgetc(f) - '0', (char)fgetc(f) - '0'));
				case 'D':
					break;
				default:
					continue;
			}
		}while(c!=EOF);
    }

    return 0;
}
