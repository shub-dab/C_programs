//print degree of all nodes in a binary tree

void dinorder(node* root) //print degree (using inorder traversal)
{
	if(root==NULL) return;
	
	dinorder(root->left);
	
	if((root->left==NULL)&&(root->right==NULL))
	printf("0 ");
	
	else if((root->left==NULL)&&(root->right!=NULL))
	printf("1 ");
	
	else if((root->left!=NULL)&&(root->right==NULL))
	printf("1 ");
	
	else printf("2 ");
	
	dinorder(root->right);
}
