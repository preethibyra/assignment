#include <stdio.h>
#include <conio.h>

void main()
{
  int a[15],n,t,i,j,min;
  clrscr();
  
  printf("Enter the size of array\n");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
    printf("Enter the elements of array\n");
    scanf("%d",&a[i]);
  }
 
  for(i=0;i<n-1;i++)
  {
    min = i;
    
    for(j=i+1;j<n;j++) 
    {
      if(a[j]<a[min]) 
      {
        min = j;  
      } 
    }
    
    t = a[i];
    a[i] = a[min];
    a[min] = t;
  }
    
    printf("Sorted elements are\n");
    for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
}