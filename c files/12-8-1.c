#include<stdio.h>

int main()
{
   int v1;
   char v2;
   float v3;
   
   short int v4;
   unsigned int v5;
   long int v6;
  
    double v7; 
    long double v8;
   
    scanf("%d  %c %f  %hi %u %li %lf  %Lf", &v1, &v2, &v3,&v4, &v5, &v6, &v7, &v8);
 

  printf(" \n %d  %c %f  %hi %u %li %lf  \n %Lf", v1, v2, v3,v4, v5, v6, v7, v8);
 

   // printf(" size of v1 = %u \n size of v2 = %u \n  size of v3 = %u \n size of v4 = %u \n size of v5 = %u \n size of v6 = %u \n  size of v7= %u \n size of v8 = %u \n ", sizeof(v1),sizeof(v2),sizeof(v3),sizeof(v4),sizeof(v5),sizeof(v6),sizeof(v7),sizeof(v8)); 
  
   
   //printf("Welcome to C -A high level language \n");
 return(0);
}
