#include <stdio.h> 
#include <stdlib.h> 

struct node 
{ 
    int data; 
    struct node* left, *right; 
}; 
	struct node* newNode(int data); 
int max(int a, int b); 
int height(struct node* node); 

int diameter(struct node * tree) 
{ 
	if (tree == NULL)
	{
		return 0;
	}

	int lheight = height(tree->left); 
	int rheight = height(tree->right); 
	int ldiameter = diameter(tree->left); 
	int rdiameter = diameter(tree->right); 

	printf("lheight %d\n",ldiameter);
	printf("rheight %d\n",rdiameter);
	
	return max(lheight + rheight + 1, max(ldiameter, rdiameter)); 
}  

int height(struct node* node) 
{
	if(node == NULL)
	{
		return 0;  
	}

	return 1 + max(height(node->left), height(node->right)); 
}  

struct node* newNode(int data) 
{ 
	struct node* node = (struct node*)malloc(sizeof(struct node)); 
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 
	
	return(node); 
} 

int max(int a, int b) 
{ 
	return (a >= b)? a: b; 
}     

int main() 
{
	struct node *root = newNode(1); 
	root->left        = newNode(2); 
	root->right       = newNode(3); 
	root->left->left  = newNode(4); 
	root->left->right = newNode(5); 
	root->right->left = newNode(6);
	root->right->left->right = newNode(7);
	root->left->left->left  = newNode(8);
	root->left->left->right  = newNode(9); 
	root->left->left->right->left  = newNode(10); 

	printf("Diameter of the given Binary Tree is %d\n", diameter(root)); 
}