#include<stdio.h>
#include<conio.h>
struct queue
{
int num;
struct queue *next;
};
typedef struct queue node;
node *front=NULL;
node *rear=NULL;
void insert(int);
void del();
void disp();

void main()
{
int ch,item;
clrscr();
do
{
 printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter your choice:");
 scanf("%d",&ch);
 switch(ch)
  {
   case 1:
    printf("Enter the number:");
    scanf("%d",&item);
    insert(item);
    break;

   case 2:
    del();
    break;

   case 3:
    disp();
    break;

   case 4:
    exit(0);

   default:
    printf("Enter invalid choice:");
   }
  }
 while (ch!=4);
 getch();
 }

void insert(int item)
{
node *n;
n=(node*)malloc(sizeof(node));
if(n==NULL)
{
printf("Queue overflow");
return;
}
n->num=item;
n->next=NULL;
if (front==NULL)
{
front=n;
rear=n;
}
else
{
rear->next=n;
rear=n;
}
}

void del()
{
int n;
node *temp;
if(n==NULL)
{
printf("Queue is empty");
return;
}
if(front==rear)
{
temp=front;
rear=NULL;
free(temp);
}
else
{
temp=front;
front=front->next;
free(temp);
}
}

void disp()
{
node *t;
if (front==NULL)
printf("List is empty");
else
{
t=front;
while(t!=NULL)
{
printf("%d",t->num);
t=t->next;
}
}
}

