#include<stdio.h>
#include<conio.h>
struct list
{
int num;
struct list *next,*prev;
};
typedef struct list node;
void create(node*);
void fdisp(node*);
void bdisp(node*);
//node* del(node*,int);

void main()
{
node* st;
int item;
clrscr();
st=(node*)malloc(sizeof(node));
st->prev=NULL;
create(st);
printf("\nThe linked list on forward traversal is: ");
fdisp(st);
printf("\nThe linked list on backward traversal is: ");
bdisp(st);
//printf("\nEnter the  number to be deleted:");
//scanf("%d",&item);
//st=del(st,item);
//printf("\nLinked list after deletion:");
//disp(st);
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
{
t->next=(node*)malloc(sizeof (node));
t->next->prev=t;
create(t->next);
}
}


void fdisp(node*t)
{
while(t!=NULL)
{
printf(" %d ",t->num);
t=t->next;
}}

void bdisp(node*t)
{
node *temp;
while(t->next!=NULL)
{
t=t->next;
}//traversing back
while(t!=NULL)
{
printf("%d  ",t->num);
t=t->prev;
}
}

//function del
//node*del(node*t,int item)
//{
// int flag=0;
// node *temp=t,*prev;
// if (t->next==NULL)
// {
// if(t->num==item)
// {
//  free(t);
//  return (NULL);
// }
// else
 // printf("Item not found");
  //return (t);
// }
// if (t->num==item)
// {
// temp=temp->next;
// free(t);
// }
// else
 //{
  //while(t!=NULL)
 // {
 //  if(t->num==item)
  //  {
   //  flag=1;
    // break;
   // }
 //  prev=t;
  // t=t->next;
 //  }

// if(flag==0)
// {
//  printf("Element not found");
// }
// else
// {
//  prev->next=t->next;
 // free(t);
// }  }
// return (temp);
//}