#include<stdio.h>

 struct Rational
 {
    int nr;
    int dr;
 };
struct Rational Add(struct Rational a1, struct Rational a2);

int main()
{
  struct Rational r1, r2, r;

  printf("Enter the first rational no \n");
  scanf("%d%d", &r1.nr, &r1.dr);  

  printf("Enter the sec rational no \n");
  scanf("%d%d", &r2.nr, &r2.dr);   
   r=Add(r1,r2);
  printf("The the Sum is:  (%d,%d)", r.nr, r.dr);
   
  return(0);
}


 struct Rational Add(struct Rational a1, struct Rational a2)
 {
    struct  Rational b;

    b.nr=a1.nr*a2.dr + a2.nr*a1.dr;
    b.dr= a1.dr*a2.dr;
    return(b);
 }

