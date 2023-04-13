#include <stdio.h>
#include <stdlib.h>

int bubb(int a[],int *opcount) {
	int n = sizeof(a)/sizeof(a[0]);
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
	return n;
}

int main() {
	int i;
	int a[20];
	int oc;
	char s[50];


	FILE *input;
	input = fopen("inputarr.csv", "r");

	FILE *output;
	output = fopen("bubb.csv", "w+");
	fprintf(output, "n, opcount\n");

	while (fscanf(input, "%s", &s) !=EOF) {

	int *ptr = atoi(strtok(s, ","));
	int n = bubb(&ptr,&oc);

		fprintf(output, "%d, %d\n", n,  oc);
	}

	


	fclose(input);
	fclose(output);

		}
