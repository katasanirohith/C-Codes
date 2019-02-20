#include<stdio.h>
#include<string.h>
void main()
{
int n,m,i,j;
printf("enter no of rows\n");
scanf("%d",&n);
printf("\n enter no of coloumns");
scanf("%d",&m);
char a[n][m];
char b[m];
printf("enter %d strings\n",n);
getchar();
for(i=0;i<n;i++)
scanf("%s", a[i]);
for(i=0;i<=n-2;i++)
{
for(j=i+1;j>0;j--)
{
if(strcmp(a[j-1],a[j])>0)
{
strcpy(b,a[j-1]);
strcpy(a[j-1],a[j]);
strcpy(a[j],b);
}
}
}
printf("the sorted array is");
for(i=0;i<n;i++)
printf("%s\n",a[i]);
}

