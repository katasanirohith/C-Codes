#include<stdio.h>

int main()
{

  int n,x, flag=0,i, pos; 
  //Read array size

   printf("\n Enter array size");
   scanf("%d", &n);
  
   int a[n];
  //Read array
  printf("\n Enter %d integers \n", n);
  for(i=0; i<n; ++i)
   scanf("%d", &a[i]);

  //Read Search elt
   printf("\n Enter the search int \n");
   scanf("%d", &x);
   
  //Binary search algo
   int beg=0, end=n-1, mid;
   while(beg<=end)
   {
      mid=(beg+end)/2;
      if(a[mid]==x)
      {
        flag=1;
        pos=mid;
        break;
      }        
       else if(x<a[mid])
           end=mid-1;
       else
          beg=mid+1;
   }
   
   if(flag==1)
    printf("%d is found at %d in the array  a[] \n",  x, pos);
  else
   printf(" \n Not found \n");
   

  return(0); 
}


