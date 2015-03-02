#include<stdio.h>

/* a function to find the missing no */
int missno(int a[],int n)
{
int i,total;
total=(n+1)*(n+2)/2;
for(i=0;i<n;i++)
total-=a[i];
return total;
}
int main()
{
/*intializing an array of size 5 with 1 to 6 except one number */
int a[]={1,3,4,5,6};
int m=missno(a,5);
printf("%d",m);
getchar();
}
