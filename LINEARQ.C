#include<stdio.h>
#include<conio.h>
#define MAX 5
void insert(int[],int);
void del(int[])  ;
void disp(int[]);
int f=-1,r=-1;
void main()
{
int ch,item,q[MAX] ;
clrscr();
do
{
printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
      {
      case 1:
	    printf("\nEnter the number:");
	    scanf("%d",&item);
	    insert(q,item);
	    break;
      case 2:
	    del(q);
	    break;
      case 3:
	    disp(q);
	    break;
      case 4:
	    exit(0);
      default:
	   printf("Invalied choice.\n");
	   }
	   }
while(ch!=4);
getch();
}


void insert (int q[MAX],int item)
{
if(r==MAX-1)
{
printf("Queue is full\n");
return;
}
if(f==-1)
{
f=0;
r=0;
}
else
r++;
q[r]=item;
printf("The item is inserted\n");
 }
void del(int q[MAX])
{
if (f==1)
{
printf("Queue is empty\n");
return;
}
printf("Deleted elememt is %d \n",q[f]);
if (f==r)
{
f=-1;
r=-1;
}
else
f++;
}


void disp(int q[MAX])
{
int i;
if (f==-1)
printf("Queue is empty\n");
else
for(i=f;i<=r;i++)
{printf("%d\t",q[i]);
}}