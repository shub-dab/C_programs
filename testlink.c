#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node

{ int data;
  struct node* next;
} node;

node* head;
int lim=0;

void insert(int x,int pos)

{   if(pos<=lim+1)

	{
	node* temp = (node*)malloc(sizeof(node));
	
	temp->data=x;
	
	if (pos==1)
{  temp->next = head;
	head = temp;
	lim++;
	return; }

int i;

node* ref = head;

for (i=0; i< pos-2; i++)
ref= ref->next;

temp->next= ref->next;
ref->next=temp;
lim++;
} 
else printf("\tInvalid position!\n");
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
 
 int n, i, pos, choi;
 int x;
 
 printf("\nSelect from following:\n\n");
 printf("1.Insert\n2.Display odd\n3.Display even\n4.Exit\n");
 
 do
 
 {  printf("\nEnter choice: ");
    scanf("%d",&choi);
    
	switch(choi)
  {
 	case 1: printf("\nHow many? ");
            scanf("%d",&n);
 
           for(i=0; i<n; i++)
          {
 	       printf("\nEnter : ");
 	       scanf("%d",&x);
 	
 	       printf("Position: ");
 	       scanf("%d",&pos);
 	
 	       insert(x, pos);
           } break;
 
    case 2: oddprint();
            break;
            
    case 3: evenprint();
			break;

	case 4: break;		
    
	default: printf("Wrong choice!\n");			        
 }
     
} while(choi!=4);
 
 printf("\nEXIT SUCCESSFUL!");
}
