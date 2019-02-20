#include<stdio.h>
struct node
{
  int data;
  struct node *nptr;

};

void push(int x);
//create empty stack
struct node *sptr=NULL;
int main()
{

  push(20);
  push(10);
  push(90);
  printf("%d", pop());
  printf("%d", pop());
 
 return(0);
}

void push(int x)
{
  struct node * temp= malloc(sizeof(struct node));
  if(temp==NULL)
  {
     printf("No space in memory \n");
     return;
  }

  temp->data=x;
  temp->nptr=sptr;
  sptr=temp;
}

int pop()
{
  if(sptr==NULL)
  {
    printf("Insertion is not possible \n");
    return;
  } 
 int x=sptr->data;
 sptr=sptr->nptr;
 return(x);
}
