#include<stdio.h>
#include<stdlib.h>
struct node
 {
  int data;
  struct node *link;
 };
struct node *top;
void push()
 {
  struct node *temp;
  int item;
  temp=(struct node*)malloc(sizeof(struct node));
  if(temp==NULL)
   {
     printf("\n List is empty");
   }
  else
   {
    printf("\n Enter the element :");
    scanf("%d",&item);
    if(top==NULL)
     {
      temp->data=item;
      temp->link=NULL;
      top=temp;
     }
    else
     {
      temp->data=item;
      temp->link=top;
      top=temp;
     }
     printf("\n Given item is pushed");
   }
 }
void pop()
 {
  struct node *temp;
  int item;
  if(top==NULL)
   {
    printf("\n List is empty");
   }
  else
   {
    item=top->data;
    temp=top;
    top=top->link;
    printf("\n %d is popped",temp->data);
    free(temp);
   }
 }
void display()
 {
  struct node *temp;
  int item;
  temp=top;
  if(top==NULL)
   {
    printf("\n List is empty");
   }
   else
    {
     while(temp!=NULL)
      {
       printf("Data=%d\t",temp->data);
       temp=temp->link;
      }
    }
 }
void search()
 {
  struct node *ptr;
  int item,flag,index=0;
  ptr=top;
  if(ptr==NULL)
   {
    printf("\n list is empty");
   }
  else
   {
    printf("\n Enter search elements:");
    scanf("%d",&item);
    while(ptr!=NULL)
     {
      if(ptr->data==item)
       {
	printf("\n Item found at %d",index+1);
	flag=0;
	break;
       }
      else
       {
	flag=1;
       }
      index++;
      ptr=ptr->link;
     }
    if(flag==1)
     {
      printf("\n Not found");
     }
   }
 }
void main()
 {
  int ch;
  clrscr();
  while(1)
   {
    printf("\n 1.Push \n 2. Pop \n 3. Display \n 4. Search \n 5. Exit");
    printf("\n Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
     {
      case 1:
      push();
      break;
      case 2:
      pop();
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
     }
   }
 }