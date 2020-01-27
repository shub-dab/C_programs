//to check whether given BST is AVL tree or not

int max(int a, int b)
{
	return (a>=b ? a:b);
}

int height(node* root) //find height of tree (or subtree)
{
	if(root==NULL) return -1;
	
	return (max(height(root->left),height(root->right))+1);
}

int ind = 1; //indicator

int isavl(node* root)
{
	if(root==NULL) return ind ;
	
	if((height(root->left)-height(root->right))>1 || (height(root->left)-height(root->right))<(-1))
	{
		ind = 0;
		return ind;
	}
	
	isavl(root->left);
	isavl(root->right);
}
