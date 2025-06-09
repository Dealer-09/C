#include <stdio.h>
int main()
{
int fact=1,n;
float sum;
printf("enter number upto you want to calculate sum:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
for(int i=1;i<=n;i++)
fact*=i;
sum+=(1.0/fact);
}
printf("Sum of term is: %f",sum);
}
