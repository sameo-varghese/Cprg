#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],r,c,item,flag=0,i,j;
clrscr();
printf("Enter the rows and column of the matrix:\n");
scanf("%d%d",&r,&c);
printf("\nEnter the elements\n");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
  {
   scanf("%d",&a[i][j]);
  }
}
printf("\nThe array is:\n");
for(i=0;i<r;i++)
{
 printf("\n");
 for(j=0;j<c;j++)
  {
   printf("  %d",a[i][j]);
  }
}
printf("\nEnter the element to be searched:");
scanf("%d",&item);
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
  {
   if(a[i][j]==item)
    {
     flag=1;
     printf("\nItem found");
     break;
    }
  }
}
if(flag==0)
printf("Element not found");
getch();
}