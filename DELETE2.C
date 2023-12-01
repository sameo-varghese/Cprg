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
n--;
printf("\nArray after deletion:");
for(i=0;i<n;i++)
printf("  %d",a[i]);
getch();
}