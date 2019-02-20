#include<stdio.h>
void push(int x);
int pop();

struct STACK
{
  int a[10];
  int top;
  void (*insert)(int x);
  int (*del)();
}s;

int main()
{

     s.insert =push;
     s.insert(34);
     s.del=pop;
     printf("%d \n", s.del());
  //push(34);
  //printf("%d \n", pop()); 
}

int pop()
{
  int x=s.a[s.top];
  s.top=s.top-1;
  return(x);
}

void push(int x)
{
  if(s.top<9)
  {  
     s.top=s.top+1;
    s.a[s.top]=x;
  }
  else
   printf("Stack is full \n");

}
