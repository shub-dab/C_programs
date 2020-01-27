#include<stdio.h>

int a[30], size;

int front= 0, rear= -1;

int isempty()
{
	if(front>rear) return 1;
	
	else return 0;
}

int isfull()
{
	if(rear==size-1) return 1;
	
	else return 0;
}

void enqueue(int x)
{
	if(isfull()) printf("The queue is full!\n");
	
	else a[++rear]=x;
	
}

void dequeue()
{
	if(isempty()) printf("The queue is empty!\n");
	
	else front++;
}

void view() //to check implementation
{   
	  int i;
	  printf("\n\t\t\t");
	  printf("Queue: ");
	  
       for(i=front; i<=rear; i++)
	   printf("%d ",a[i]);
	  
	   printf("\n");
	  
}

void main()

{
	printf("Enter size of queue: ");
	scanf("%d",&size);
	
	int x, choi;
	
	printf("\nSelect from following:\n\n");
    printf("1.Enqueue\n2.Dequeue\n3.Exit\n");
	
    do
 
   { printf("\nEnter choice: ");
     scanf("%d",&choi);	
	
	 switch(choi)
   
    {  
      case 1: if(isfull()) 
	          {
			    enqueue(x);
	            break;
			  }
              
			  else
	          {
			    printf("Enter element to enqueue: ");
                scanf("%d",&x);
                enqueue(x); view();
                break;
              }
              
	  case 2: if(isempty())
	          { 
	            dequeue();
	          	break;
			  }
			  
			  else
	          {
			    dequeue(); view(); 
	            break;
			  }	
     
	  case 3: break;
      
      default: printf("Wrong choice!\n");	
    }	

}  while(choi!=3);
 
 printf("\nEXIT SUCCESSFUL!");
}

