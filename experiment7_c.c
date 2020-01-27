//count number of leaf nodes in a binary tree

int count=0; //leaf counter

int leaf(node* root)
{
	if(root==NULL) return count;
	
	leaf(root->left);
	
	if((root->left==NULL)&&(root->right==NULL))
	count++;
	
	leaf(root->right);
}

