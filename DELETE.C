#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i;
clrscr();
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nArray before deletion:");
for(i=0;i<n;i++)
printf("  %d",a[i]);
for(i=0;i<n-1;i++)
{
a[i]=a[i+1];
}
n=n-1;
printf("\nArray after deletion:");
for(i=0;i<n;i++)
printf("  %d",a[i]);
getch();
}