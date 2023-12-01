#include<stdio.h>
#include<conio.h>
#define MAX 5
void insert(int[],int);
void del(int[]);
void disp(int[]);
int f=-1,r=-1;
void main()
{
int ch,item,q[MAX];
clrscr();
do
{
printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
	{
	 case 1:
		printf("Enter your number:");
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
		printf("Invalid choice");
	}
}while(ch!=4);
getch();
}

//function insert
void insert(int q[MAX],int item)
{
 //overflow
 if((f==0&&r==MAX-1)|| (f==r+1))
 {
  printf("Queue is full");
  return;
 }
//queue is empty?
if(f==-1)
{
f=0;
r=0;
}
else if(r==MAX-1)//circular insertion
{
r=0;
}
else//queue contains some elements
r++;
q[r]=item;
printf("One item is inserted");
}

//function deletion
void del(int q[MAX])
{
//underflow
if(f==-1)
{
printf("Queue is empty");
return;
}
printf("Deleted element is %d",q[f]);
//single element
if(f==r)
{
f=-1;
r=-1;
}
else if(f==MAX-1)
f=0;
else//queue contaions some elements
f++;
}

//function display
void disp(int q[MAX])
{
//undefined
int i;
if(f==-1)
printf("Queue is empty");
else if(f<=r)
{
for(i=f;i<=r;i++)
 {
  printf("%d",q[i]);
 }
}
else
{
 for(i=f;i<=MAX-1;i++)
 printf("%d",q[i]);
 for(i=0;i<=r;i++)
 printf("%d",q[i]);
}
}