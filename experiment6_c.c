#include<stdio.h>

int s1[30], s2[30];

int top1= -1, top2= -1;

int isempty2()
{
	if(top2== -1) return 1;
	
	else return 0;
}

void enqueue(int x)
{
	s1[++top1]=x;
}

void dequeue()
{
	if(isempty2())
	{
		int i,j;
		
		for(i=top1, j=0; i>0; i--,j++ )
		{
			s2[j]=s1[i];
			top2++;
		}
		top1= -1;
	}
	
	else top2--;
}


void view() //to check implementation
{   
	  int i;
	  printf("\n\t\t\t");
	  printf("Queue: ");
	  
	   if(!isempty2())
       for(i=top2; i>-1; i--)
	   printf("%d ",s2[i]);
	   
	   for(i=0; i<=top1; i++)
	   printf("%d ",s1[i]);
	  
	   printf("\n");
	  
}

void main()

{
	int x, choi;
	
	printf("\nSelect from following:\n\n");
    printf("1.Enqueue\n2.Dequeue\n3.Exit\n");
	
    do
 
   { printf("\nEnter choice: ");
     scanf("%d",&choi);	
	
	 switch(choi)
   
    {  
      case 1:   printf("Enter element to enqueue: ");
                scanf("%d",&x);
                enqueue(x); view();
                break;
              
              
	  case 2:   dequeue(); view(); 
	            break;
			  
     
	  case 3: break;
      
      default: printf("Wrong choice!\n");	
    }	

}  while(choi!=3);
 
 printf("\nEXIT SUCCESSFUL!");
}

