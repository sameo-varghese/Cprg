 #include<stdio.h>
#include<conio.h>
struct list
{
int num;
struct list*next;
};
typedef struct list node;

void disp(node*);
void create(node*);
node* insert(node*,int);
void main()
{
 node *st;
 int item;
 clrscr();
 st=(node*) malloc (sizeof(node));
 create(st);
 printf("\nLinked list before insertion\n");
 disp(st);
 printf("\nEnter the element to insert:\n");
 scanf("%d",&item);
 st=insert(st,item);
 printf("\nLinked List after insertion");
 disp(st);
 getch();
 }
 void create(node*t)
 {
 int ch;
 printf("Enter the number:");
 scanf("%d",&t->num);
 printf("do you want to continue:");
 scanf("%d",&ch);
 if(ch==0)
 t->next=NULL;
 else
 {
 t->next=(node*) malloc (sizeof(node));
 create(t->next);
 }
 }

 void disp(node*t)
   {
    if(t==NULL)
      printf("Linked List is empty");
    else
   {
    while(t!=NULL)
   {
      printf("\n%d",t->num);
      t=t->next;
   }
   }
   }
   node* insert(node*t,int item)
   {
    node*n,*t1;
    n=(node*)malloc(sizeof(node));
    n->num=item;
    n->next=NULL;
    t1=t;
    while(t->next!=NULL)
    {
    t=t->next;
    }
    t->next=n;
    return(t1);
    }

