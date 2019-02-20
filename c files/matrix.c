#include<stdio.h>
int * mul(int a[ ][2], int b[][2], int l, int m, int n);
int main()
{
   int l,m,n,i,j;
   printf("Enter the sizes for matrices A and B with three integers(No.of columns for Mat A=No.of Rows for Mat B) \n");
   scanf("%d %d %d",&l, &m, &n);
   int a[l][m];
   int b[m][n];
   int *c ;
   
 
   printf("Enter matrix A of size %d x %d\n", l,m);
   for(i=0; i<l; ++i)
    for(j=0; j<m; ++j)
      scanf("%d", &a[i][j]);


  printf("Enter matrix B of size %d x %d\n", m,n);
   for(i=0; i<m; ++i)
    for(j=0; j<n; ++j)
      scanf("%d", &b[i][j]);


 c= mul(a,b,l,m,n);

 

 return(0);
}

 int * mul(int a[][2], int b[][2], int l, int m, int n)
  {
    int *c; 
    int i,j,k, sum;
    int d[l][n];
   for(i=0; i<=l-1; ++i)
    for(j=0; j<=n-1; ++j)
    {  
       sum=0;
      for(k=0; k<=m-1; ++k)
        sum=sum+a[i][k]*b[k][j]; 
      d[i][j]=sum;
    }
    
    c=(int*)d;
    
    printf("Multiplication of matrices A and B is\n");
   for(i=0; i<=l-1; ++i)
   {
    for(j=0; j<=n-1; ++j)
      printf("%d ", *(c+i*2+j));
    printf("\n");
   }
   return(c);
}




