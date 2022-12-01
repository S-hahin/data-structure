#include<stdio.h>
#include<conio.h>
void input();
void output();
void uni();
void intersec();
void diff();
int a[]={0,0,0,0,0,0,0,0,0},
b[]={0,0,0,0,0,0,0,0,0},
c[]={0,0,0,0,0,0,0,0,0};
void main()
 {
  int ch,wish;
  clrscr();
  do
   {
    printf("\n MENU");
    printf("\n 1. Input \n 2. Union \n 3. Intersection \n 4. Difference \n 5. Exit");
    printf("\n Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
     {
      case 1:
      input();
      break;
      case 2:
      uni();
      break;
      case 3:
      intersec();
      break;
      case 4:
      diff();
      break;
      case 5:
      exit(0);
      break;
      default:
       printf("\n Wrong choice");
     }
    printf("\n Do you wish to continue: ");
    scanf("%d",&wish);
    }while(wish==1);
   getch();
  }
 void input()
  {
   int i,n,ele;
   printf("\n Enter size of first set: ");
   scanf("%d",&n);
   printf("\n Enter the elements: ");
   for(i=1;i<=n;i++)
    {
     scanf("%d",&ele);
     a[ele]=1;
    }
   printf("\n Enter size of second set: ");
   scanf("%d",&n);
   printf("\n Enter the elements: ");
   for(i=1;i<=n;i++)
    {
     scanf("%d",&ele);
     b[ele]=1;
    }
   printf("\n The first set is :\t");
   for(i=1;i<=9;i++)
    {
     printf("%d\t",a[i]);
    }
   printf("\n The second set is :\t");
   for(i=1;i<=9;i++)
    {
     printf("%d\t",b[i]);
    }
  }
 void output(int c[])
  {
   int i;
   printf("\n The set is : \t");
   for(i=1;i<=9;i++)
    {
     if(c[i]!=0)
	printf("%d\t",i);
    }
  }
 void uni()
  {
   int i,c[10];
   for(i=1;i<=9;i++)
    {
     if(a[i]!=b[i])
	c[i]=1;
     else
	c[i]=a[i];
    }
   for(i=1;i<=9;i++)
    {
     printf("%d\t",c[i]);
    }
   output(c);
  }
 void intersec()
  {
   int i,c[10];
   for(i=1;i<=9;i++)
    {
     if(a[i]==b[i])
	c[i]=a[i];
     else
	c[i]=0;
    }
   for(i=1;i<=9;i++)
    {
     printf("%d\t",c[i]);
    }
   output(c);
  }
 void diff()
  {
   int i,c[10];
   for(i=1;i<=9;i++)
    {
     if(a[i]==1 && b[i]==0)
	c[i]=1;
     else
	c[i]=0;
    }
   for(i=1;i<=9;i++)
    {
     printf("%d\t",c[i]);
    }
   output(c);
  }