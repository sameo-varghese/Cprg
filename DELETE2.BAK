#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,p,i;
clrscr();
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nThe array is:");
for(i=0;i<n;i++)
printf("  %d",a[i]);
printf("\nEnter the position to  remove:");
scanf("%d",&p);
for (i=p-1;i<n;i++)
a[i]=a[i+1];
n=n-1;
printf("\nArray after deletion:");
for(i=0;i<n;i++)
printf("  %d",a[i]);
getch();
}