#include<stdio.h>

 void InsertionSort(int a[], int n);
 void BubbleSort(int a[], int n);
  void SelectionSort(int a[], int n);
int main()
{
   int n,i;
   
   //read array size   
   printf("\n Enter the array size \n");
   scanf("%d", &n);
   int a[n];

   
  //read array
   printf("\n Enter %d intgers \n", n);
   for(i=0; i<=n-1; ++i)
    scanf("%d", &a[i]);

   //InsertionSort(a, n); //function call
    // BubbleSort(a, n);
     SelectionSort(a,n);
   printf("\n The sorted array is: \n");
   for(i=0; i<=n-1; ++i)
    printf("%d  ", a[i]);


  return(0);
}

 void SelectionSort(int a[], int n)
 {
    int i,j,temp, max, pmax;

   for(i=0; i<=n-2; ++i)
   {
    max=a[0];
    pmax=0;

    for(j=0; j<=n-1-i; ++j)
      if(max<a[j])
      {
         max=a[j];
         pmax=j; 
       }
       
       //swap a[pmax] and a[n-1-i]
    temp=a[pmax];
    a[pmax]=a[n-1-i];
    a[n-1-i]=temp; 
       
 
  }
 }
 


void BubbleSort(int a[], int n)
 {
    int i,j,temp;

   for(i=0; i<=n-2; ++i)
    for(j=0; j<=n-2-i; ++j)
       if(a[j]>a[j+1])
       {
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp; 
       }
 
 

 }



 void InsertionSort(int a[], int n)
 {
    int i,j,temp;

   for(i=0; i<=n-2; ++i)
    for(j=i+1; j>0; --j)
       if(a[j]<a[j-1])
       {
         temp=a[j];
         a[j]=a[j-1];
         a[j-1]=temp; 
       }
 
 

 }


