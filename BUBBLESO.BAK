#include<stdio.h>
#include<conio.h>
int bubblesort(int[],int);
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
bubblesort(a,n);
printf("\nSorted array:\n");
for(i=0;i<n;i++)
printf("  %d",a[i]);
getch();
}

bubblesort(int a[10],int n)
{
int i,j,t;
for(i=0;i<n-1;i++)
{
 for(j=0;j<n-1-i;j++)
  {
   if(a[j]>a[j+1])
    {
     t=a[j];
     a[j]=a[j+1];
     a[j+1]=t;
    }
  }
}return;
}