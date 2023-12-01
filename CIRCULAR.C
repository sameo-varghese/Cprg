#define MAX 5
void insert(int[],int);
void disp(int[]);
void del(int[]);
int f=-1,r=-1;
void main()
{
int ch,item,q[MAX];
clrscr();
do
{
printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Enter your choice:");
scanf("%d",&ch);
switch(ch)
	  {
	  case 1:
		 printf("Enter the number:");
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
		printf("invalid choice");
	 }
}while(ch!=4);
getch();
}

//funtion
void insert(int q[MAX],int item)
{
//overflow
if((f==0&&r==MAX-1)||(f==r+1))
{
printf("Queue is full");
return;
}
//queue is empty
if(f==-1)
{
f=0;
r=0;
}
else if(r==MAX-1)
{
r=0;
}
else //queue contain elements
r++;
q[r]=item;
printf("Queue item inserted");
}

//function deletion
void del(int q[MAX])
{
//undeflow
if(f==-1)
{
printf("Queue is empty");
return;
}
printf("deleted element is %d",q[f]);
//single element
if(f==r)
{
f=-1;
r=-1;
}
else if(f==MAX-1)//circular deletion
{
f=0;
}
else//queue contain some element
f++;
}

//function display
void disp(int q[MAX])
{
 int i;
//underflow
if(f==-1)
printf("Queue is empty");
else if(f<=r)
{
for(i=f;i<=r;i++)
   printf(" %d",q[i]);
}
else
{
   for(i=f;i<MAX-1;i++)
	printf(" %d",q[i]);
   for(i=0;i<=r;i++)
	printf(" %d",q[i]);
}
}