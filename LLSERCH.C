#include<stdio.h>
#include<conio.h>
struct list
{
int num;
struct list *next;
};
typedef struct list node;
void create(node*);
void disp(node*);
void search(node*,int);

void main()
{
int item;
node* st;
clrscr();
st=(node*)malloc(sizeof(node));
create(st);
printf("The linked list is:");
disp(st);
printf("\nEnter the element to be searched:");
scanf("%d",&item);
search(st,item);
getch();
}


void create(node*t)
{
int ch;
printf("Enter the number:");
scanf("%d",&t->num);
printf("Enter do you want to continue:");
scanf("%d",&ch);
if(ch==0)
t->next=NULL;
else
{t->next=(node*)malloc(sizeof (node));
create(t->next);
}
}

void disp(node*t)
{
while(t!=NULL)
{
printf("%d\t",t->num);
t=t->next;
}}


void search(node*t,int item)
{
int f=0;
while(t!=NULL)
{
if(t->num==item)
{
printf("Item found ");
f=1;
break;
}
t=t->next;
}
if(f==0)
printf("Item not found");
}

