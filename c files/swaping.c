#include<stdio.h>

 //void swap(int a, int b);
  void swap(int *pa, int *pb);
int main()
{

  int a,b;
  scanf("%d%d",&a,&b);
  printf("\nBefore swap:  a= %d, b=%d\n", a, b);
  swap(&a, &b);
  printf("\n After swap:  a= %d, b=%d \n", a, b);
  return(0);
}


void swap(int*pa,int*pb)   
 {
    int temp;
    temp= *pa;
    *pa=*pb;
    *pb=temp;
   printf("\n inside swap:  a= %d, b=%d \n", *pa, *pb);
    //return();
 }  
/*
 void swap(int a, int b)
 {
    int temp;
    temp=a;
    a=b;
    b=temp;
   printf("\n inside swap:  a= %d, b=%d \n", a, b);
    //return();
 }  
*/
