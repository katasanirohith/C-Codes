#include<stdio.h>
#include<math.h>
 int main()
{

  int n,i,flag=1;
  printf("\n Enter an int>=2 \n ");
  scanf("%d", &n);
  
  if(n==2)
   {
      printf("\n Prime \n");
      return(0);
    }
  i=2;
  do
   {
     if(n%i==0)
        flag=0;
     i=i+1;
   }while(i<=sqrt(n));

 /*
  i=2;
  while(i<=sqrt(n))
  {
     if(n%i==0)
        flag=0;
    i=i+1;
   
  } 
  */

  /*for(i=2;i<=sqrt(n);i=i+1)
   {
     if(n%i==0)
        flag=0;
      
  } 
 */

  if(flag==1)  
    printf("Prime \n");
 else
   printf("Not a prime");


  return(0);
}

