#include<stdio.h>

int search( char ch, char a[], int size)

{ int flag=-1, i;

 for (i=0; i<size; i++)
 if (a[i]==ch)
 { flag=i;
   break;
 }
 return flag;
}

void main()

{ char a[20], ch;
 int i, size, pos;

 printf("Enter size: ");
 scanf("%d",&size);

 printf("\nEnter the elements: ");
 for (i=0; i<size; i++)
 scanf("%s", &a[i]);

 printf("\nSearch for: ");
 scanf("%s", &ch);

 pos=search(ch, a, size);

 if (pos==-1)
 printf("\nElement not found!");

 else
 printf("\nElement found at index: %d",pos);
}
