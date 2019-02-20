#include<stdio.h>
void tower(int,char,char,char);
int main()
{
int n;
printf("enter number of disks\n");
scanf("%d",&n);
printf("sequence:\n");
tower(n,'a','c','b');
return(0);
} 
void tower(int n,char frompeg,char topeg,char freepeg)
{
if(n==1){
printf("move disk 1 from %c peg to %c peg\n",frompeg,topeg);
return;
}
tower(n-1,frompeg,freepeg,topeg);
printf("move disk %d from %c peg to %c peg\n",n,frompeg,topeg);
tower(n-1,freepeg,topeg,frompeg);
}
