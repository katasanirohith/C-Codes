#include<stdio.h>

 struct Student 
{
    char name[10];
    int rno;
    float marks;

};

void print(struct Student t[], int m);
void search(struct Student t[], int m, int rn);
int main()
{

  struct Student  s[10];
  int i,n;
 
   printf("\n   Enter the No of records <=10 \n");
   scanf("%d", &n);

 //create Mark List
   for(i=0; i<=n-1; ++i )
   {
      printf("\n Enter name, rno and Markls of %d th Student \n", i);
       scanf("%s%d%f", s[i].name, &s[i].rno, &s[i].marks);

   }

   print(s, n);

  return(0);
}


  void print(struct Student t[], int m)
{
  int i;

  for(i=0; i<=m-1; ++i )
   {
      printf("\n details of %d th Student \n", i);
      printf(" %s %d  %f", t[i].name, t[i].rno, t[i].marks);

   }
}

void search(struct Student t[], int m, int rn)
{
  int i;
  int flag=0;

  for(i=0; i<=m-1; ++i )
   {
     if(rn==t[i].rno)
        flag=1;
    }

   if(flag==1)
    printf("yes");
  else
   printf("No");

}


