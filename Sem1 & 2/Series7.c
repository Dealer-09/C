#include <stdio.h>
#include <math.h>
int main()
{
int fact=1,n,m,x;
float sum;
printf("enter number upto you want to calculate sum:");
scanf("%d",&n);
printf("enter a number:");
scanf("%d",&x);
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
fact*=i;
m=pow(x,i);
sum+=(m/fact);
}
printf("Sum of term is: %f", sum);
}
