#include<stdio.h>

struct Complex Add(struct Complex b1, struct Complex b2);
struct Complex Sub(struct Complex b1, struct Complex b2);
struct Complex Mul(struct Complex b1, struct Complex b2);
struct Complex Div(struct Complex b1, struct Complex b2);


struct Complex
{
    
   float real;
   float img;

};

int main()
{
   struct Complex c1, c2,c;

   printf("\n Enter the first complex number \n");
   scanf("%f%f", &c1.real, &c1.img);

   printf("\n Enter the sec complex number \n");
   scanf("%f%f", &c2.real, &c2.img);

  c=Add(c1, c2);
   printf("\n The sum is:  (%f+i%f)\n", c.real, c.img);
  c=Sub(c1, c2);
   printf("\n The Diff is:  (%f+i%f)\n", c.real, c.img);
 
  c=Mul(c1, c2);
   printf("\n The prod is:  (%f+i%f)\n", c.real, c.img);
  c=Div(c1, c2);
   printf("\n The Div is:  (%f+i%f)\n", c.real, c.img);


  return(0);
}

  struct Complex Add(struct Complex b1, struct Complex b2)
  {
      struct Complex a;
      a.real=b1.real+b2.real;
      a.img=b1.img+b2.img;
      return(a);
  }

struct Complex Sub(struct Complex b1, struct Complex b2)
  {
      struct Complex a;
      a.real=b1.real-b2.real;
      a.img=b1.img-b2.img;
      return(a);
  }

  struct Complex Mul(struct Complex b1, struct Complex b2)
  {
      struct Complex a;
      a.real=b1.real*b2.real - b1.img*b2.img;
      a.img=b1.img*b2.real + b1.real*b2.img;
      return(a);
  }

   struct Complex Div(struct Complex b1, struct Complex b2)
  {
      struct Complex a;
      float d=(b2.real)* (b2.real)+(b2.img)* (b2.img);     

      a.real=(b1.real*b2.real + b1.img*b2.img)/d;
      a.img=(b1.img*b2.real -b1.real*b2.img)/d;
      return(a);
  }


