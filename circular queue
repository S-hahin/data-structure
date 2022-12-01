#include<stdio.h>
#include<conio.h>
#define SIZE 3
int queue[SIZE];
//void insert();
//void dequeue();
//void display();
int front=-1;
int rear=-1;
void insert()
 {
  int item;
  if((front==0&&rear==SIZE-1) || (front==rear+1&&rear>-1))
   {
    printf("\n Queue overflow");
   }
  else
   {
   printf("\n Enter the element:");
   scanf("%d",&item);
    rear=(rear+1)%SIZE;
    queue[rear]=item;
   }
   if(front==-1)
    {
     front=0;
    }
 }
void dequeue()
 {
  int item;
  if(front==-1)
   {
    printf("\n Queue underflow");
   }
  else if(front==rear)
   {
    front=rear=-1;
   }
  else
   {
   printf("\n The element to be deleted is %d", queue[front]);
    front=(front+1)%SIZE;
   }
 }
 void display()
 {
  int i;
  if(front==-1)
   {
    printf("\n Queue underflow");
   }
  else
   {
    printf("\n Queue is:");
    for(i=front;i!=rear;i=(i+1)%SIZE)
    {
       printf("%d\t",queue[i]);
    }
       printf("%d",queue[rear]);


     printf("\n front %d",front);
	  printf("\n rear %d",rear);
    }
  }
  void search()
   {
   int n,flag,i;
    printf("\n Enter the element to be searched");
    scanf("%d",&n);
    if(front==-1)
     {
      printf("\n Queue overflow");
     }
    else
     {

	 while(front>rear)
	  {
	   if(queue[front]==n)
	    {
	     flag=1;
	     break;
	    }
	    front=(front+1)%SIZE;
	   }

       if(front<=rear)
	{
	 for(i=front;i<=rear;i++)
	  {
	   if(queue[i]==n)
	    {
	     flag=1;
	     break;
	    }
	   }
	 }
    }
      if(flag==1)
       {
	printf("\n Item found at %d",i+1);
       }
       else
       printf("\n Item not found");
  }
 void main()
  {
   int ch,item;
   clrscr();
   while(1)
    {
     printf("\n1. Insert \n 2. Delete \n 3. Display \n 4. Search \n 5. Exit");
     printf("\n Enter your choice:");
     scanf("%d",&ch);
     switch(ch)
     {
      case 1:
      insert();
      break;
      case 2:
      dequeue();
      break;
      case 3:
      display();
      break;
      case 4:
      search();
      break;
      case 5:
      exit(0);
      break;
      default:
      printf("\n Invalid choice");
      break;

     }
    }
 }
