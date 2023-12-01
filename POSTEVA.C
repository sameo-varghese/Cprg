void main()
{
int i,top=-1;
char p[20];
float stk[30],a,b,c,x;
clrscr();
printf("Enter the postfix expression:");
gets(p);
for(i=0;p[i]!='\0';i++)
{
 if((p[i]>='A'&&p[i]<='Z')||(p[i]>='a'&&p[i]<='z'))
  {
   printf("Enter the value of %c",p[i]);
   scanf("%f",&x);
   top++;
   stk[top]=x;
   }
  else if (p[i]>='0'&&p[i]<='9')
  {
   x=p[i]-'0';
   top++;
   stk[top]=x;
   }
   else
   {
   a=stk[top];
   top--;
   b=stk[top];
   top--;
   switch(p[i])
   {
   case'+':
	   c=b+a;
	   break;
   case'-':
	   c=b-a;
	   break;
   case'*':
	   c=b*a;
	   break;
   case'/':
	   c=b/a;
	   break;
   case'^':
	  c=pow(b,a);
	  break;

   }
   top++;
   stk[top]=c;
   }
   }
   printf("the value of expression if %.2f",stk[top]);
   getch();
   }