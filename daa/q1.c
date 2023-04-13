
#include <stdio.h>
#include <stdlib.h>


int gcd(int m, int n, int *opcount) { 
		int oc=0;
    int arr[2];
    int t = m > n ? n: m;
  	if(t!=0){
    while(m % t != 0 || n % t != 0) {
      oc++;
      t--;
    }}
    *opcount=oc;
    return t;
}

int main() {
	int i;
	int a, b,oc;


	FILE *input;
	input = fopen("input.csv", "r");

	FILE *output;
	output = fopen("gcd1.csv", "w+");
	fprintf(output, "a+b, opcount, gcd\n");

	while (fscanf(input, " %d, %d ", &a, &b) > 1) {
	
	int gcd1 = gcd(a,b,&oc);

		fprintf(output, "%d, %d, %d\n", a+b,  oc ,gcd1);
	}

	fclose(input);
	fclose(output);

		}


