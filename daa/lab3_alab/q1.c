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

	for (int i =0 ; i<n-1; i++){
		for (int j =0 ; j<n-1-i;j++){
			opcount++;
			if (a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	printf("\nSorted array\n");

	for (int i =0; i<n;i++){
		printf("%d ", a[i]);
	}

	printf("\nOpcount: %d\n", opcount);


	return 0;
}

