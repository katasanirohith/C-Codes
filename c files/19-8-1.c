#include<stdio.h>

int main()
{
   int x;

   printf("\n  Enter an int \n");
   scanf("%d", &x);

  /* switch(x)
   {
      case 1 :
               printf("\n one \n");
               break;
      case 2:
              printf("\n two \n");
              break;
     default:
              printf("\n more than two \n"); 
  }
  */ 

    if(x==1)
    {
      printf("\n one \n");
    }

    if(x==2)
    {
      printf("\n two \n");
    }

   if(x>2)
    {
      printf("\n more than two \n");
    }
   


 return(0);
}
