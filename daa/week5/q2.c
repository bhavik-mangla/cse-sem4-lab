#include <stdio.h>
#include <stdlib.h>

int g[100][100];
int V;
int visited[100];
int arr[100];
int k=0;
int dfsv(int v)
{
	printf("Visiting %d\n", v+1);
	visited[v] = 1;
	arr[k]=v+1;
	k++;
	
	int i;
	
	for(i = 0; i < V; ++i)
	{
		if(!(visited[i]) && (g[v][i] == 1) && (i != v))
		{
  			dfsv(i);
		}
		else if((visited[i]) && (g[v][i] == 1) && (i ==v-1))
			{printf("Popped %d\n", v+1);
		k--;}
	}
	return k;
}

int dfs()
{
	int i;
	int k;
	for(i = 0; i < V; ++i)
	{
		if(!visited[i])
		{
  			k = dfsv(i);
		}
	}
	return k;
}

int main()
{
	printf("Enter the Number of Vertices: \n");
	scanf("%d", &V);
	
	int i, j;
	
	printf("Enter the Adjacency Matrix: \n");
	
	for(i = 0; i < V; ++i)
	{
		for(j = 0; j < V; ++j)
		
		scanf(" %d", &g[i][j]);
	}
	
	int k = dfs();
i=k;
printf("Popped :- ");
while(i>=0)
	{
		if(arr[i]!=0)printf("%d \t",arr[i]);i--;}
	return 0;
}