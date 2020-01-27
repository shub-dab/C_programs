#include<stdio.h>

int top = -1;

char a[50]; //stack of characters

int isfull()
{
	if(top == 49) return 1;
	
	else return 0;
}

int isempty()
{
	if(top == -1) return 1;
	
	else return 0;
}

void push(char x)
{
	if(isfull()) printf("The stack is full!\n");
	
	else a[++top] = x;
}

void pop()
{
	if(isempty()) printf("The stack is empty!\n");
	
	else top--;
}

void reverse(char str[])
{
	int i;
	
	for(i=0; str[i]!='\0'; i++)
	push(str[i]);
	
	for(i=0; str[i]!='\0'; i++)
	{
		str[i] = a[top];
		pop();
	}
}

void main()
{   
	char str[50];
	
	printf("Enter a string: ");
	gets(str);
	
	reverse(str);
	
	printf("\nReversed string: ");
	puts(str);
}
