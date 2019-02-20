#include<stdio.h>

 //function dec
 int max(int x, int y);

int main()
{
  
  int x=89, y=24;
  printf("max= %d", max(x,y)); //function call
 return(0);
}
 
//function defn
  int max(int a, int b)
{
  if(a>b)
    return(a);
  else
    return(b);
}




