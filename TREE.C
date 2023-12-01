#include<stdio.h>
#include<conio.h>
struct list
{
struct list *left;
struct list *right;
int num;
};
typedef struct list node;
node *insert(node*,int);
void preorder(node*);
void postorder(node*);
void inorder(node*);

void main()
{
node *tree=NULL;
int item,ch;
clrscr();
do
{
 printf("\n1.Insert\n2.Preorder traversal\n3.Postorder traversal\n4.Inorder traversal\n5.Exit\n Enter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
       printf("Enter the number:");
       scanf("%d",&item);
       tree=insert(tree,item);
       break;
  case 2:
       printf("\nPreorder traversal: ");
       preorder(tree);
       break;
  case 3:
       printf("Postorder traversal: ");
       postorder(tree);
       break;
  case 4:
       printf("Inorder traversal: ");
       inorder(tree);
       break;
  case 5:
       exit(0);
  default:
       printf("Enter a valied choice.");
  } }
 while(ch!=5);
getch();
}


node *insert(node *tree,int item)
{
node *t,*r=NULL;
node *n=(node*)malloc(sizeof(node));
n->num=item;
n->left=NULL;
n->right=NULL;
r=tree;
while(r!=NULL)
{
 t=r;
 if(r->num>item)
 r=r->left;
 else
 r=r->right;
}
if(tree==NULL)
tree=n;
else if(t->num>item)
t->left=n;
else
t->right=n;
return tree;
}

void preorder(node *tree)
{
if (tree!=NULL)
{
 printf("  %d",tree->num);
 preorder(tree->left);
 preorder(tree->right);
}
}

void postorder(node *tree)
{
if(tree!=NULL)
{
 postorder(tree->left);
 postorder(tree->right);
 printf( "  %d",tree->num);
}
}

void inorder(node *tree)
{
if(tree!=NULL)
{
 inorder(tree->left);
 printf("  %d",tree->num);
 inorder(tree->right);
}
}
