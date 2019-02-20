#include<stdio.h>

struct Queue
{
  int a[5];
  int front;
  int rear;
};

struct Queue enqueue(struct Queue q, int n);
struct Queue dequeue(struct Queue q);
int SIZE=5;
int main()
{

  struct Queue q1;
  
 //create empty queue;
 q1.front=-1;
 q1.rear=-1; 

//enqueue integers
 q1= enqueue(q1,89);
 q1= enqueue(q1,13);
 q1= enqueue(q1,17);
 q1= enqueue(q1,29);

 q1= dequeue(q1);
 return(0); 
}

 struct Queue  enqueue(struct Queue q, int n)
 {
     if(q.rear==SIZE-1)
      printf("\n Queue is full\n");
   else
   {

    if(q.front==-1)
      q.front=0;

     q.rear=q.rear+1;
     q.a[q.rear]=n;
   } 
  return(q);
 }

struct Queue  dequeue(struct Queue q)
 {
    int x;
   if(q.front==-1)
      printf("\nQueue is empty\n");
   else
   {
     x=q.a[q.front];
    printf(" %d ", x); 
     if(q.front==q.rear)
     {
      q.front=-1;
      q.rear=-1;
     } 
   else
     q.front=q.front+1;

   }
  
 return(q);
 }




