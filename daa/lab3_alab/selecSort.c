#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Enter no of elements\n");
	int n;
	scanf("%d", &n);
	int a[n];
	printf("\nEnter elements\n");
	int opcount =0 ;

	for (int i =0; i<n;i++){
		scanf("%d", &a[i]);
	}
	int min_idx,i,j;
 	for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++){
        	opcount++;
        	
          if (a[j] < a[min_idx])
            min_idx = j;
        }
 		if(min_idx != i){
 			int temp = a[min_idx];
				a[min_idx] = a[i];
				a[i] = temp;
 		}
    }
	printf("\nSorted array\n");

	for (int i =0; i<n;i++){
		printf("%d ", a[i]);
	}

	printf("\nOpcount: %d\n", opcount);


	return 0;
}