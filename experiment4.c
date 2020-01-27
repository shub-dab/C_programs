#include<stdio.h>
#include<stdlib.h>

typedef struct node

{ int data;
  struct node* next;
} node;

node* head;
int lim=0;

void insert(int x)

{  
	node* temp = (node*)malloc(sizeof(node));
	
	temp->data=x;
	
	if (lim==0)
{  temp->next = head;
	head = temp;
	lim++;
	return; }

int i;

node* ref = head;

for (i=0; i< lim-1; i++)
ref= ref->next;

temp->next= ref->next;
ref->next=temp;
lim++;
 
}

void oddprint()

{   printf("\nODD LIST: ");

	node* temp = head;
	
	while(temp!=NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
		if(temp==NULL) break;
		temp = temp->next;
		
    }
	printf("\n");   
}

void evenprint()

{   printf("\nEVEN LIST: ");

	node* temp = head;
	
	while(temp!=NULL)
	{
		
		temp = temp->next;
		if(temp==NULL) break;
		printf("%d ", temp->data);
		temp = temp->next;
		
    }
	printf("\n");   
}

void main()

{ head = NULL; //list is empty
 
 int n, i, choi;
 int x;
 
 printf("\nSelect from following:\n\n");
 printf("1.Insert\n2.Display odd position list\n3.Display even position list\n4.Exit\n");
 
 do
 
 {  printf("\nEnter choice: ");
    scanf("%d",&choi);
    
	switch(choi)
  {
 	case 1: printf("\nHow many numbers? ");
            scanf("%d",&n);
            
           printf("\nEnter : ");
 
           for(i=0; i<n; i++)
          {
 	       scanf("%d",&x);
 	
 	       insert(x);
           } break;
 
    case 2: oddprint();
            break;
            
    case 3: evenprint();
			break;

	case 4: break;		
    
	default: printf("\tWrong choice!\n");			        
 }
     
} while(choi!=4);
 
 printf("\nEXIT SUCCESSFUL!");
}
