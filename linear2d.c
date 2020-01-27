#include<stdio.h>

typedef struct index
{
    int ind1;
    int ind2;
    
} index;

index search( int num, int a[][10], int r, int c)

{  index s;
   s.ind1= -1;

     int i, j;

 for (i=0; i<r; i++)
    for(j=0; j<c; j++)
 if (a[i][j]==num)
 { s.ind1=i;
   s.ind2=j;
   break;
 }
 return s;
}

void main()

{index s;
 int a[10][10], num;
 int i, j, r, c;

 printf("Enter number of rows: ");
 scanf("%d",&r);

 printf("Enter number of columns: ");
 scanf("%d",&c);

 printf("\nEnter the elements: ");
 for (i=0; i<r; i++)
    for(j=0; j<c; j++)
    scanf("%d", &a[i][j]);

 printf("\nSearch for: ");
 scanf("%d", &num);

 s=search(num, a, r, c);

 if (s.ind1==-1)
 printf("\nElement not found!");

 else
 printf("\nRow index: %d   Column index: %d",s.ind1,s.ind2);
}



