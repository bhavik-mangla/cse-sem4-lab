
#include <stdbool.h>
#include <stdio.h>


 
int findSplitPoint(int arr[], int n ) {
   
    int leftSum = 0; 
    
    for (int i=0; i<n;i++){
       
        leftSum += arr[i] ;
    
        int rightSum = 0 ;
        for (int j=i+1; j<n;j++){
            rightSum += arr[j] ;}
    
        if (leftSum == rightSum) 
            return i+1 ;
       }
    
    return -1;
   
    }
int printTwoParts(int arr[], int n) {
   
    int splitPo = findSplitPoint(arr, n);
    
    if (splitPo == -1 || splitPo == n )
       { 
        return 0;}
       printf("Possible\n");
     for (int i=0; i<n;i++){
        if(splitPo == i)
            printf("\n");
        printf("%d ",arr[i]);}
   }
 void print(int *num, int n)

{

    int i;

    for ( i = 0 ; i < n ; i++)

        printf("%d ", num[i]);

    printf("\n");

} 
   int main(){

int n;
    printf("Enter n: ");
    scanf("%d",&n);

int num[n];
  for(int i = 0; i < n; ++i) {
     scanf("%d", &num[i]);
  }
    int temp=0,flag=0;
    for (int j = 1; j <= n; j++) {

        for (int i = 0; i < n-1; i++) {

            temp = num[i];

            num[i] = num[i+1];

            num[i+1] = temp;
                print(num, n);

            if (printTwoParts(num, n)!=0){


                flag=1;
                return 0;
            }

    }

    }
            if(flag==0){
                printf("Not Possible");
            }
return 0;
}
 
