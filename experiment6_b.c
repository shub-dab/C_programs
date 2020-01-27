#include<stdio.h>

int a[30], size, count =0;

int front= 0, rear= -1;

int isempty()
{
	if(count==0) return 1;
	
	else return 0;
}

int isfull()
{
	if(count==size) return 1;
	
	else return 0;
}

void enqueue(int x)
{
	if(isfull()) printf("The queue is full!\n");
	
	else 
	{
		rear = (rear+1)%size;
		a[rear] = x;
		count++;
	}
	
}

void dequeue()
{
	if(isempty()) printf("The queue is empty!\n");
	
	else 
	{
		front = (front+1)%size;
		count--;
	}
}

void view() //to check implementation
{   
	  int i,j;
	  printf("\n\t\t\t");
	  printf("Queue: ");
	  
       for(i=0, j=front; i<count; i++, j=(j+1)%size)
	   printf("%d ",a[j]);
	  
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

