#include<stdio.h>
struct complex
{
float r;
float i;

};
void swap(struct complex c1,struct complex c2);
int main()
{
struct complex c1,c2;
printf("Enter First Complex Number\n");
scanf("%f %f",&c1.r,&c1.i);

printf("Enter Second Complex Number\n");
scanf("%f %f",&c2.r,&c2.i);

printf("Before Swapping:-\nFirst Complex Number is %f + %f i\nSecond Complex Number is %f+ %f i\n",c1.r,c1.i,c2.r,c2.i);


swap(c1,c2);

return(0);
}
void swap(struct complex c1,struct complex c2)
{
float p,q;
p=c1.r;
q=c1.i;
c1.r=c2.r;
c1.i=c2.i;
c2.r=p;
c2.i=q;


printf("After Swapping:-\nFirst Complex Number is %f + %f i\nSecond Complex Number is %f+ %f i\n",c1.r,c1.i,c2.r,c2.i);
}

