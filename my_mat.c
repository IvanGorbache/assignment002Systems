#include<stdio.h>
#include "my_mat.h"

void inputMatrix(int mat[SIZE][SIZE])
{
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
}
int pathExists(int mat[SIZE][SIZE], int i, int j)
{
    return shortestPath(mat,i,j)!=-1?TRUE:FALSE;
}
int shortestPath(int mat[SIZE][SIZE], int i, int j)
{
    int dist[SIZE][SIZE];
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            dist[i][j] = mat[i][j];
        }
    }
	for(int i=0;i<SIZE;i++)
    {
    	dist[i][i] = 0;
    }
	for(int k = 1;k<SIZE;k++)
	{
		for(int i=0;i<SIZE;i++)
		{
		    for(int j=0;j<SIZE;j++)
		    {
		        if(dist[i][j] > (dist[i][k] + dist[k][j]))
				{
					dist[i][j] = dist[i][k] + dist[k][j];
				}
		    }
		}
	}
    return dist[i][j]!=0?dist[i][j]:-1;
}

