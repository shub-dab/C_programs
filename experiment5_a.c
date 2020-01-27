#include<stdio.h>

int top = -1;
int a[50], size;

int isfull()
{
	if(top == size-1) return 1;
	
	else return 0;
}

int isempty()
{
	if(top == -1) return 1;
	
	else return 0;
}

void push(int x)
{
	if(isfull()) printf("The stack is full!\n");
	
	else a[++top] = x;
}

void pop()
{
	if(isempty()) printf("The stack is empty!\n");
	
	else top--;
}

void view() //to check implementation
{   
	  int i;
	  printf("\n\t\t\t");
	  printf("Stack: ");
	
	  for(i=0; i<=top; i++)
	  printf("%d ",a[i]);
	  
	  printf("\n");
	      
}

void main()

{
	printf("Enter size of stack: ");
	scanf("%d",&size);
	
	int x, choi;
	
	printf("\nSelect from following:\n\n");
    printf("1.Push\n2.Pop\n3.Exit\n");
	
    do
 
   { printf("\nEnter choice: ");
     scanf("%d",&choi);	
	
	 switch(choi)
   
    {  
      case 1: if(isfull()) 
	          {
			    push(x);
	            break;
			  }
              
			  else
	          {
			    printf("Enter element to push: ");
                scanf("%d",&x);
                push(x); view();
                break;
              }
              
	  case 2: if(isempty())
	          { 
	            pop();
	          	break;
			  }
			  
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




