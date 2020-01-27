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

int search(node* root, int x)
{
	if(root==NULL) return 0;
	
	else if(root->data==x) 
	return 1;
	
	else if(x < root->data) 
	return search(root->left,x);
	
	else
	return search(root->right,x);
}

node* findmin(node* root) //find minimum value in the tree
{
	while(root->left != NULL)
	root = root->left;
	
	return root;
}

node* del(node* root, int x)
{
	if(root == NULL) return root;
	
	else if(x < root->data)
	root->left = del(root->left, x);
	
	else if(x > root->data)
	root->right = del(root->right, x);
	
	else
	{
		if(root->left==NULL && root->right==NULL) //leaf node
		{
			free(root);
			root = NULL;	
		}
		
		else if(root->left==NULL) // node with right child
		{
			node* temp = root;
			root = root->right;
			free(temp);
		}
		
		else if(root->right==NULL) //node with right child
		{
			node* temp = root;
			root = root->left;
			free(temp);
		}
		
		else  //node with both children
		{
			node* temp = findmin(root->right);
			
			root->data = temp->data;
			root->right = del(root->right, temp->data);
		}
		
	}
	return root;
}

void inorder(node* root)
{
	if(root==NULL) return;
	
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
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
	
	printf("\nSearch for: ");
	scanf("%d",&num);
	
	if(search(root,num)==1) printf("\nThe number is found!");
	
	else printf("\nThe number is not found!");
	
	printf("\n\nTree(inorder): ");
	inorder(root);
	
	printf("\n\nDelete: ");
	scanf("%d",&num);
	
	del(root,num);
	
	printf("\nTree(inorder): ");
	inorder(root);
}


