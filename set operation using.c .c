#include<stdio.h>
#include<stdlib.h>
void input();
void display();
void Union();
void intersection();
void diff();
 int a[]={0,0,0,0,0,0,0,0,0};
 int b[]={0,0,0,0,0,0,0,0,0};
 int c[]={0,0,0,0,0,0,0,0,0};
  void main()
   {
     int ch;
     printf("\n set operation\n");
     do
      {
      printf("\n 1.input\n 2.union\n 3.intersection\n 4.diff\n 5.exit\n");
      printf("\n enter choice:\n");
      scanf("%d",&ch);
      switch(ch)
       {
	 case 1:input();
	 break;
	 case 2:Union();
	 break;
	 case 3:intersection();
	 break;
	 case 4:diff();
	 break;
	 case 5:exit(0);
	 default:printf("\ninvalid choice\n");
       }
       }while(ch!=5);
   }
   void input()
    {
      int n1,n2,x,i;
      printf("\n enter size of set 1:\n");
      scanf("%d",&n1);
      printf("\n enter elements of set 1:\n");
      for(i=1;i<=n1;i++)
	{
	 scanf("%d",&x);
	 a[x]=1;
	}
	 printf("\n enter the size of set 2:\n");
	 scanf("%d",&n2);
	 printf("\n enter the elements of set 2:\n");
	  for(i=1;i<=n2;i++)
	    {
	      scanf("%d",&x);
	      b[x]=1;
	    }
	    printf("\n set 1:{");
	    for(i=1;i<=9;i++)
	      {
	       printf("%d",a[i]);
	      }
	      printf("}");
	      printf("\n set 2:{");
	      for(i=1;i<=9;i++)
		{
		  printf("%d",b[i]);
		}
		printf("}");
	  }
   void display(int c[])
    {
      int i;
      printf("\n\t\t{");
      for(i=1;i<=9;i++)
	{
	  if(c[i]!=0)
	  printf("%d",i);
	}
	printf("}");
    }
   void Union()
    {
      int c[10],i;
      for(i=1;i<=9;i++)
	{
	  if(a[i]!=b[i])
	  c[i]=1;
      else
      c[i]=a[i];
   }
   printf("\n set is :{");
   for(i=1;i<=9;i++)
     {
       printf("%d",c[i]);
     }
     printf("}");
     display(c);
   }
  void intersection()
   {
     int c[10],i;
     for(i=1;i<=9;i++)
       {
       if(a[i]==b[i])
       c[i]=a[i];
      else
      c[i]=0;
   }
   printf("\n set is:{");
   for(i=1;i<=9;i++)
     {
      printf("%d",c[i]);
     }
     printf("}");
     display(c);
  }
 void diff()
   {
    int c[10],i;
    for(i=1;i<=9;i++)
     {
      if(a[i]==1&&b[i]==0)
      c[i]=1;
      else
      c[i]=0;
    }
    printf("\n set is :{");
    for(i=1;i<=9;i++)
      {
	printf("%d",c[i]);
      }
      printf("}");
      display(c);
      }
