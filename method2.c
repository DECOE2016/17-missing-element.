#include<stdio.h>

/* function to find the missing no */
int missno(int a[],int n)
{
int i;
int x1=a[0];
int x2=1;
for(i=1;i<n;i++)
x1=x1^a[i];
for(i=2;i<=n+1;i++)
x2=x2^i;
return (x1^x2);
}
int main()
{
/*intializing an array of size 5 with 1 to 6 except one number */
int a[]={1,3,4,5,6};
int m=missno(a,5);
printf("%d",m);
getchar();
}
