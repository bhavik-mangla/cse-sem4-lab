#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int gcd(int a, int b, int *opcount) {
		int oc=0;
	if (a > b){
		int t=a;
		a=b;
		b=t;
	}
	int fact = 2;
	int gcd = 1;
	int z = a;
	int t=0;
	bool prime[z + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= z; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= z; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= z; p++)
        if (prime[p])
            {fact = p;
		while (((a % fact) == 0) && ((b % fact) == 0)) {
			oc++;
			gcd = gcd * fact;
			b = b / fact;
			a = a / fact;
			t=1;
			if (a == 0 || b == 0) 
			{	*opcount = oc;
				return gcd;}
		}
		if(t==0)
			oc++;
		t=0;
	}
	*opcount = oc;
	return gcd;
}


int main() {
	int i;
	int a, b,oc;


	FILE *input;
	input = fopen("inputcoprime.csv", "r");

	FILE *output;
	output = fopen("gcd2.csv", "w+");
	fprintf(output, "a+b, opcount, gcd\n");

	while (fscanf(input, " %d, %d ", &a, &b) > 1) {
	
	int gcd1 = gcd(a,b,&oc);

		fprintf(output, "%d, %d, %d\n", a+b,  oc ,gcd1);

	}

	fclose(input);
	fclose(output);

}