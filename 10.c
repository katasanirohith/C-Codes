#include<stdio.h>
#define size 5
struct list
{
  int a[size];
  int listsize;
};

struct list l;
int main()
{
 int a,b,n=0;
 l.listsize=-1;
 while(n<6)
 {
 printf("enter the correct option \n 1.insert   2. delete    3.print     4.isempty     5.isfull      6.exit");
 scanf("%d",&n);
 switch(n)
 {
 case 1:
  {
   insert();
  break;
  }
  case 2:
  {
   del ();
  break;
  }
  case 3:
  {
   print();
  break;
  }
  case 4:
  {
   isempty();
  break;
  }
  case 5:
  {
    isfull();
  break;
  }
  case 6:
  break;
 }
 }
 return(0);
}
void insert()
{
 int i,p,j;
 if(l.listsize==size-1)
    printf("list is full");
 else
{
 printf("enter inserting no.& position");
 scanf("%d %d",&i,&p);
 for(j=l.listsize;j>=p;--j)
 {
  l.a[j]=l.a[j-1];
 }
 l.a[p-1]=i;
 ++l.listsize;
}
}
void print()
{
 int i;
 for(i=0;i<l.listsize;++i)
 printf("%d    ",l.a[i]);
}

 void del ()
 {
  int i,a;
  printf("enter position no ");
  scanf("%d",&a);
  if(l.listsize==-1)
    printf("list is already empty");
  else
{
  for(i=a-1;i<l.listsize;++i)
  {
   l.a[i]=l.a[i+1];

  }
  --l.listsize;
 }
 }
void isfull()
{
 if(l.listsize==size-1)
 printf(" is full");
 else
 printf(" not full");
}

void isempty()
{
 if(l.listsize==-1)
 printf(" is empty");
 else
    printf(" not empty");
}
