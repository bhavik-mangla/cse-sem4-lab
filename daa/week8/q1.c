#include<stdio.h>
#include<stdlib.h>
#define MAX(a,b) ((a)>(b) ? a : b)


typedef struct node{
    int val;
    struct node *left;
    struct node *right;
}*NODE;

NODE insert(NODE root,int x){
    if(root==NULL){
        root=(NODE)malloc(sizeof(struct node));
        root->val=x;
        root->left=root->right=NULL;
    }
    else if(x>root->val)
        root->right=insert(root->right,x);
    else if(x<root->val)
        root->left=insert(root->left,x);
    else{
        printf("Duplicate node\n");
        exit(0);
    }
    return(root);
}

void inorder(NODE cur){
    if(cur){
        inorder(cur->left);
        printf("%4d",cur->val);
        inorder(cur->right);
    }
}

int height(NODE cur){
    if (cur == NULL)
        return -1;
    else
        return MAX(height(cur->left),height(cur->right))+1;
}

void balancefactor(NODE cur){
    static int x;
    if(cur){
        balancefactor(cur->left);
        x = height(cur->left)-height(cur->right);
        printf("\nNode with value %d has a balance factor of %d",cur->val,x);
        balancefactor(cur->right);
    }
}

int main(){
    NODE root = NULL;
    int ch,x;int n;
   printf("Enter no of elements : ");
    scanf("%d",&n);
    for (int i =0;i<n;i++){
     printf("Enter element : ");
    scanf("%d",&x);root = insert(root,x);
    
    
          printf("\nInorder traversal is : ");
                     inorder(root);
                     
            balancefactor(root);
    return 0;
}