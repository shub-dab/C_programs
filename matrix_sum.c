#include<stdio.h>

int r1,c1,r2,c2;

typedef struct matrix

{ int c[10][10];
} matrix;

matrix matrix_sum(matrix m1, matrix m2)

{ int i,j;
  matrix m;
  
  for(i=0;i<r1;i++)
  for(j=0;j<c1;j++)
  m.c[i][j]=m1.c[i][j]+m2.c[i][j];
  
  return m;
  
}

void show_matrix(matrix m)

{ int i,j;
  printf("\nSum: \n\n");

  for(i=0;i<r1;i++)
  {for(j=0;j<c1;j++)
   printf("%d ",m.c[i][j]);
   printf("\n");
}
}

void main()

{ matrix m1,m2,sum;
  int i,j;
  
  printf("Enter the number of rows for matrix 1: ");
  scanf("%d",&r1);
  
  printf("\nEnter the number of columns for matrix 1: ");
  scanf("%d",&c1);
  
  printf("\nEnter the number of rows for matrix 2: ");
  scanf("%d",&r2);
  
  printf("\nEnter the number of columns for matrix 2: ");
  scanf("%d",&c2);
  
  if (r1==r2 && c1==c2)
  
  { printf("\nEnter the values for matrix 1: ");
    for(i=0;i<r1;i++)
    for(j=0;j<c1;j++)
    scanf("%d",&m1.c[i][j]);
    
    printf("\nEnter the values for matrix 2: ");
    for(i=0;i<r1;i++)
    for(j=0;j<c1;j++)
    scanf("%d",&m2.c[i][j]);
    
    sum = matrix_sum(m1,m2);
    
    show_matrix(sum);
  }
  
  else printf("\nThe sum is not possible!");
}
