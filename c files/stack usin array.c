#include<stdio.h>

struct Stack
{
  int a[5];
  int top;
};

struct Stack push(struct Stack s, int n);
struct Stack pop(struct Stack s);
int SIZE=5;
int main()
{

  struct Stack s1;
  
 //create empty stack;
 s1.top=-1; 
 s1= push(s1,89);
 s1= push(s1,19);
 s1= push(s1,29);
 s1= push(s1,11);
 s1= pop(s1);
 s1= pop(s1);
 s1= pop(s1);
 return(0); 
}

 struct Stack push(struct Stack s, int n)
 {
     if(s.top==SIZE-1)
      printf("\nStack is full\n");
   else
   {
     s.top=s.top+1;
     s.a[s.top]=n;
     printf("\n %d Inserted \n", s.top);
   } 
  return(s);
 }

struct Stack  pop(struct Stack s)
 {
    int x;
   if(s.top==-1)
      printf("\nStack is empty\n");
   else
   {
    x=s.a[s.top];
    printf(" %d ", x); 
    s.top=s.top-1;
  }
  
 return(s);
 }




