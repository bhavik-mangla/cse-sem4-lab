#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	printf("Enter string: ");

	char string[25];
	gets(string);

	printf("Enter pattern: ");
	char pattern [25];
	gets (pattern);
	int opcount =0;

	int m = strlen(string);
	int n = strlen(pattern);
	int count = 0, done  =0;
	for (int i = 0; i<=m-n; i++){
		count = 0;
		for (int j = 0; j<n; j++){
			opcount++;
			if (pattern[j] == string[i+j]){
				count++;
			}
		}
		if (count == n){
			printf("Substring found at %d\n", i);
			done = 1;
		}
	}

	if (!done){
		printf("Substring is not found\n");
	}

	printf("\nOpcount is %d\n", opcount);

	return 0;
}