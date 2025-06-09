#include <stdio.h>
#include <math.h>
int main()
{
int m,n,sum=0;
printf("enter number upto you want to calculate sum:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
m=pow(i,i);
sum+=m;
}
printf("Sum of term is: %d",sum);
}
