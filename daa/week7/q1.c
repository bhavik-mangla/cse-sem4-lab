#include <stdio.h> 
#include <stdlib.h> 

void swap(int *a, int *b)
{	
int t = *a;
 *a = *b;
 *b = t;
}
int oc=1;
int partit(int arr[], int l, int h)
{	
	int pivot = arr[h];
	int i = l-1;
	for (int j=l;j<h;j++){
		oc++;
		if(arr[j]<=pivot){
			i++;
			swap(&arr[i],&arr[j]);

		}
	}
				swap(&arr[i+1],&arr[h]);
return i+1;

}

void quickS(int arr[],int l,int h)
{
	if(l<h)
		{int pi = partit(arr,l,h);
	quickS(arr,l,pi-1);
	quickS(arr,pi+1,h);
}}

int main(){
		int data[]  = {8,7,2,1,11,5,22,14,3,123,111,44,12,10,23,115,88,66,44,55,99,33,0,9,6};
		int n = sizeof(data)/sizeof(data[0]);
					printf("%d ",n);

		printf("sorted : ");
		quickS(data,0,n-1);
		for(int i = 0;i<n;i++)
			printf("%d ",data[i]);
						printf("%d ",oc);

}