#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define SIZE 25
int front=-1;
int rear=-1;
void insert();
void delete();
void display();
void frontele();
void rearele();

int q[SIZE];
void main()
{
  int choice;
  while(choice!=6)
  {
   printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.FRONT ELEMENT\n5.REAR ELEMENT\n6.EXIT");
   printf("\nEnter your choice : ");
   scanf("%d",&choice);
   switch(choice)
    {
    case 1:
	    insert();
	    break;
	    
    case 2:
	    delete();
	    break;
	    
    case 3:
	    display();
	    break;
	    
    case 4:
	    frontele();
	    break;
	    
    case 5:
	    rearele();
	    break;
	    
    case 6:
	   printf("\nExiting");
	   break;
	   
    default:printf("\nInvalid choice");
    }
  }
}
    void insert()
    {
     int item;
     printf("\nEnter the element : ");
     scanf("%d",&item);
     if( rear==(SIZE-1))
      {
      printf("\nOverflow");
      return;
      }
      else
      {
      rear=(rear+1) % SIZE;
      q[rear]=item;
      }
      if(front==-1)
       front=0;
     printf("\nElement inserted");
     }
     void delete()
     {
      int item;
      if(front==-1)
      {
      printf("\nUnderflow");
      return;
      }
      else
      {
      item=q[front];
      if(front==rear)
      {
      front=-1;
      rear=-1;
      }
      else
       front=(front+1) % SIZE;
       }
      printf("Element deleted is %d",item);
      }
      void display()
      {
       int i;
       if(rear==-1)
	printf("\nEmpty queue");
       else
	{
	 printf("\nThe elements are : ");
	 for(i=front;i<=rear;i++)
	 {
	  printf("%d\t",q[i]);
	  }
	 }
	 }
	void frontele()
	{
	int item;
	if(front==-1)
	 printf("\nEmpty queue");
	else
	{
	item=q[front];
	printf("\nThe front element is %d",item);
	}
	}
	void rearele()
	{
	int item;
	if(rear==-1)
	printf("\nEmpty queue");
	else
	{
	item=q[rear];
	printf("The rear element is %d",item);
	}
	}
