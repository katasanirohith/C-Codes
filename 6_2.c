#include<stdio.h>

int main()
{
    int i,j,k,p,q,r,s,sum=0,count=0;
    printf("\n Enter the dimensions of the first matrix \n");
    scanf("%d %d", &p, &q);

    printf("\n Enter the dimensions of the second matrix \n");
    scanf("%d %d", &r, &s);

    int a[p][q],b[r][s],c[p][s];

    printf("\n Enter the elements in the first matrix \n");
    for(i=0;i<p;i=i+1)
    for(j=0;j<q;j=j+1)
    scanf("%d", &a[i][j]);

    printf("\n Enter the elements in the second matrix \n");
    for(j=0;j<r;j=j+1)
    for(k=0;k<s;k=k+1)
    scanf("%d", &b[j][k]);

    for(i=0;i<p;i=i+1)
        for(k=0;k<s;k=k+1)
    {
         for(j=0;j<q;j=j+1)
         {
        sum=sum+a[i][j]*b[j][k];
        c[i][k]=sum;
         }
         count=count+1;
         sum=0;
    }


    for(i=0;i<p;i=i+1)
        for(k=0;k<s;k=k+1)
    {
        printf("%d", c[i][k]);
        printf("\n");
    }
    printf("\n count=%d \n", count);
return(0);
}
