

    #include<stdio.h>    
    #include<stdlib.h>  
    int main(){  
    int a[10][10],b[10][10],mul[10][10],r1,c1,r2,c2,i,j,k;     
    int oc=0;
    printf("r1=");    
    scanf("%d",&r1);    
    printf("c1=");    
    scanf("%d",&c1);    
    printf("M1 elements=\n");    
    for(i=0;i<r1;i++)    
    {    
    for(j=0;j<c1;j++)    
    {    
    scanf("%d",&a[i][j]);    
    }    
    }

    printf("r2=");    
    scanf("%d",&r2);    
    printf("c2=");    
    scanf("%d",&c2);    
    printf("M2 elements=\n");    
    for(i=0;i<r2;i++)    
    {    
    for(j=0;j<c2;j++)    
    {    
    scanf("%d",&b[i][j]);    
    }    
    }   

    if(c1!=r2){

    printf("can't multiplyyy!! ");
    return 0;
    }
             
    
    for(i=0;i<r1;i++)    
    {    
    for(j=0;j<c2;j++)    
    {    
    mul[i][j]=0;    
    for(k=0;k<c1;k++)    
    {    oc++;
    mul[i][j]+=a[i][k]*b[k][j];    
    }    
    }    
    }   

         printf("OC  =  %d\n",oc);  
         printf("M1XM2=\n");
    //for printing result    
    for(i=0;i<r1;i++)    
    {    
    for(j=0;j<c2;j++)    
    {    
    printf("%d\t",mul[i][j]);    
    }    
    printf("\n");    
    }    
    return 0;  
    }

