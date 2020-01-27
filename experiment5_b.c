#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
} node;

node* top = NULL;

int isempty()
{
	if(top==NULL) return 1;
	
	else return 0;
}

void push(int x)
{
	node* temp = (node*)malloc(sizeof(node));
	
	temp->data=x;
	
	temp->next=top;
	top=temp;
}

void pop()
{
	if(isempty()) printf("The stack is empty!\n");
	
	else 
	{
		node* temp = top;
		top = temp->next;
		free(temp);
	}
}

void view()
{   
    printf("\n\tStack: ");

	node* temp = top;
	
	while(temp!=NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
    }
	printf("\n");   
}

void main()

{
	int x, choi;
	
	printf("\nSelect from following:\n\n");
    printf("1.Push\n2.Pop\n3.Exit\n");
	
    do
 
   { printf("\nEnter choice: ");
     scanf("%d",&choi);	
	
	 switch(choi)
   
    {  
      case 1:   printf("Enter element to push: ");
                scanf("%d",&x);
                push(x); view();
                break;
              
              
	  case 2:   if(isempty()) pop();
	  
	            else
				{      
	             pop(); view(); 
	             break;
				}
			  	
     
	  case 3: break;
      
      default: printf("Wrong choice!\n");	
    }	

}  while(choi!=3);
 
 printf("\nEXIT SUCCESSFUL!");
}
