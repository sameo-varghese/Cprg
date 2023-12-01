#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char infix[25],stk[25];
int i,top=-1,l;
clrscr();
printf("Enter the infix expression:");
gets(infix);
l=strlen(infix);
infix[l]=')';
infix[++l]='\0';
stk[++top]='(';
printf("The postfix expression is:\n");
for(i=0;infix[i]!='\0';i++)
{
  if((infix[i]>='A' && infix[i]<='Z')||
	 (infix[i]>='a' && infix[i]<='z')||
	 (infix[i]>='0' && infix[i]<='9'))
    {
      printf("%c",infix[i]);
     }
  else if(infix[i]=='(')
	 {
	   top++;
	   stk[top]=infix[i];
	 }
    else if(infix[i]==')')
    {
      while(stk[top]!='(')
      {
       printf("%c",stk[top]);
       top--;
       }
      top--;
      }
  else if(infix[i]=='^')
  {
    while(stk[top]=='^')
    {
     printf("%c",stk[i]);
     top--;
    }
   stk[++top]=infix[i];
  }
  else if(infix[i]=='/'||infix[i]=='*')
    {
      while(stk[top]=='^'||stk[top]=='/'||stk[top]=='*')
	 {
	   printf("%c",stk[i]);
	   top--;
	  }
       stk[++top]=infix[i];
      }
   else if(infix[i]=='+'||infix[i]=='-')
   {
     while(stk[top]=='^'||stk[top]=='/'||stk[top]=='*'||stk[top]=='+'||stk[top]=='-')
     {
       printf("%c",stk[i]);
       top--;
      }
     stk[++top]=infix[i];
     }
   else
	continue;
}
getch();
}