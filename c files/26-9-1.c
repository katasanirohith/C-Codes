#include<stdio.h>

  //Def of struct
  struct Complex
  {
    float real;
    float img;
  };
//struct Complex f(struct Complex e);
 void fa(struct Complex *pe);
int main()
{
 
  //struct var dec
  
  struct Complex c,d;

  c.real=90;
  c.img=20;

  printf("(%f + i %f)", c.real, c.img);

   //d=f(c);
   fa(&c);

  printf(" \n After function call:  (%f + i %f)  \n", c.real, c.img);

  return(0);
}

 /* //passing para by val
 struct Complex f(struct Complex e)
 {
    e.real=23;
    e.img=12;
   return(e);
 }
*/

  void fa(struct Complex *c)
 {
    c->real=23;
    c->img=12;
  
 }


