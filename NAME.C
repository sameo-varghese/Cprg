#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[10][25],t[25];
int n,i,j;
clrscr();
printf("Enter the number of strings:");
scanf("%d",&n);
printf("Enter the strings:");
for(i=0;i<n;i++)
{
 flushall();
 gets(s[i]);
}
printf("The unsorted list:\n");
for(i=0;i<n;i++)
puts(s[i]);

//sorting
for(i=0;i<n-1;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(strcmp(s[i],s[j])>0)
  {
   strcpy (t,s[i]);
   strcpy (s[i],s[j]);
   strcpy (s[j],t);
  }
 }
}
printf("The sorted array is:\n");
for(i=0;i<n;i++)
puts(s[i]);
getch();
}