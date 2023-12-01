#include<stdio.h>
#include<conio.h>
int selectsort(int[],int);
void main()
{
int a[10],n,i,j,t;
clrscr();
printf("Enter the number of elements in the array:\n");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Unsroted array:\n");
for(i=0;i<n;i++)
printf("  %d",a[i]);
selectsort(a,n);
printf("\nSorted array:\n");
for(i=0;i<n;i++)
printf("  %d",a[i]);
getch();
}

void selectsort(int a[10],int n)
{
int i,min,j,t;
for(i=0;i<n-1;i++)
{
 min=i;
 for(j=j+1;j<n;j++)
  {
   if(a[j]<a[min])
    {
     min=j;
     }
     if(min!=i)
     {
     t=a[min];
     a[min]=a[i];
     }
     a[i]=t;
     }
}     }