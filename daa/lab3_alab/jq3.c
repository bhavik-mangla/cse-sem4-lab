#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){

	printf("Enter number of elements");
	int n;
	scanf("%d", &n);

	int* a = calloc (n, sizeof(int));

	for (int i =0 ; i<n; i++){
		scanf("%d", &a[i]);
	}

	int sum1, sum2;

	int *check;

	for (int z=0; z<n; z++){
		swap(&a[0], &a[z]);
		for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++){
			swap(&a[i], &a[j]);
			sum1 = 0;
			int k = 0;
			for (k = 0; k<i; k++){
				sum1 = sum1+a[k];
			}
			sum2 = 0;
			for (;k<n; k++){
				sum2 += a[k];
			}
			if (sum1 == sum2){
				printf("Disjoint set 1: ");
				for (k = 0; k<i; k++){
					printf("%d\t", a[k]);
				}
				sum2 = 0;
				printf("\nDisjoint set 2: ");
				while (k<n){
					printf("%d\t", a[k]);
					k++;
				}
				return 0;
			}
		}
	}
	}

	return 0;
}