#include<stdio.h>
#include<math.h>
int main()
{
   int sign=1, fact=1;
   float x,i, sum=1.0;

   scanf("%f", &x);
   for(i=2; i=20; i=i+2)
   {
     printf("Hi");
      sign=-sign;
      fact=fact*(i-1)*i;
      sum=sum+sign*pow(x,i)/fact;


   }

  printf("\n  cos(%f) = %f \n", x, sum);

 return(0);
}
