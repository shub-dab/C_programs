#include<stdio.h>

int search(int num, int a[], int size)

{ int pos=-1;
  int start=0, end=size-1, mid;
  
   while (start<=end)
  
{ mid=(start+end)/2;
   
  if (num==a[mid])
    {pos=mid;
     break;}
     
  else if (num<a[mid])
  end=mid-1;
  
  else start=mid+1;
}

return pos;
    
}

void main()

{ int a[20], i, size;
  int num, pos; 
  
  printf("Enter size of array: ");
  scanf("%d",&size);
  
  printf("Enter the elements (in asc.order): ");
  for (i=0; i<size; i++)
  scanf("%d",&a[i]);
  
  printf("Enter the number to search: ");
  scanf("%d",&num);
  
  pos= search(num,a,size);
  
if (pos==-1) printf("The number is not found!");
else printf("The index is: %d",pos);

}
  
