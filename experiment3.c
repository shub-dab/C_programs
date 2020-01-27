#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node

{ char data[10];
  struct node* next;
} node;

node* head;
int lim=0;

void insert(char x[],int pos)

{   if(pos<=lim+1)

	{
	node* temp = (node*)malloc(sizeof(node));
	
	strcpy(temp->data,x);
	
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

void search(char x[])

{ node* temp= head;
 int i=-1, n=1;
 
 while ( temp!=NULL)
 
 { if (strcmp(x, temp->data)==0)
      { i=0;
       break;
      }
      temp=temp->next;
      n++;
 }
 if (i==-1)
 printf("The name is not found!\n");
 
 else printf("The name is found at node %d\n", n);
}

void del(char x[])
{ node* temp= head;
  node* ref= head;

int flag=-1, pos=1;

while (temp!=NULL)
{ 
 
  if(strcmp(x,temp->data)==0)
 {
   flag=0;
   
   if (pos==1)
   {
   	head=temp->next;
   	free(temp);
   	lim--;
   	break;
   }
   
    else
 
   { int i;
 for (i=0; i<pos-2; i++)
 ref= ref->next;

 ref->next=temp->next;
 free(temp);
 lim--;
 break;
   }
}  pos++;
   temp=temp->next;
}

if (flag==-1)
printf("The name does not exist!\n");

else printf("The name is deleted!\n");
}

void print()

{   printf("\nLIST: ");

	node* temp = head;
	
	while(temp!=NULL)
	{
		printf("%s ", temp->data);
		temp = temp->next;
    }
	printf("\n");   
}

void main()

{ head = NULL; //list is empty
 
 int n, i, pos, choi;
 char x[10];
 
 printf("\nSelect from following:\n\n");
 printf("1.Insert\n2.Display\n3.Search\n4.Delete\n5.Exit\n");
 
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
 	       scanf("%s",&x);
 	
 	       printf("Position: ");
 	       scanf("%d",&pos);
 	
 	       insert(x, pos);
           } break;
 
    case 2: print();
            break;
            
    case 3: printf("\nSearch: ");
	        scanf("%s", &x);
	        search(x);
			break;
	
	case 4: printf("\nDelete: ");
            scanf("%s",&x);
			del(x);
			break;
	
	case 5: break;		
    
	default: printf("Wrong choice!\n");			        
 }
     
} while(choi!=5);
 
 printf("\nEXIT SUCCESSFUL!");
}
