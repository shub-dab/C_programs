#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* left;
	struct node* right;
	
}node;

node* createnode(int x)
{
	node* temp = (node*)malloc(sizeof(node));
	
	temp->data = x;
	temp->left = temp->right = NULL;
	
	return temp;
}

node* insert(node* root, int x)
{
	if(root==NULL) root = createnode(x);
	
	else if(x < root->data)
	root->left = insert(root->left,x);
	
	else 
	root->right = insert(root->right,x);
	
	return root;
}

void inorder(node* root)
{
	if(root==NULL) return;
	
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}

void preorder(node* root)
{
	if(root==NULL) return;
	
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}

void postorder(node* root)
{
	if(root==NULL) return;
	
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}

void main()
{
	node* root = NULL;
	
	int lim, num, i;
	
	printf("How many elements? ");
	scanf("%d",&lim);
	
	printf("\nInsert the elements: ");
	
	for(i=0; i<lim; i++)
	{
		scanf("%d",&num);
		root = insert(root,num);	
	}
	
	printf("\nTree(inorder): ");
	inorder(root);
	
	printf("\n\nTree(preorder): ");
	preorder(root);
	
	printf("\n\nTree(postorder): ");
	postorder(root);
}

