#include<stdio.h>
#include<conio.h>
   void inssort(int[],int);
     void main()
     {
       int a[10],i,n;
       clrscr();
       printf("Enter The limit Of The Array:");
       scanf("%d",&n);
       printf("Enter The elements:");
	 for(i=0;i<n;i++)
	      scanf("%d",&a[i]);
	  printf("\nThe Unsorted Array:");
	     for(i=0;i<n;i++)
		 printf(" %d",a[i]);
	   printf("\nThe Sorted Array Is:");
	    inssort(a,n);
	       for(i=0;i<n;i++)
		 printf(" %d",a[i]);
	  getch();
     }
   //insort function
       void inssort(int a[10],int n)
	{
	   int i,key,j;
	      for(i=0;i<n;i++)
		{
		   key=a[i];
		     for(j=i-1;j>=0&&a[j]>key;j--)
		       {
			  a[j+1]=a[j];
			 }
			a[j+1]=key;
		       }
		     }