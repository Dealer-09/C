#include <stdio.h>
int main()
{
int n;
double sum=0.0,m;
printf("enter number upto you want to calculate sum:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
m+=1.0/i;
sum+=m;
}
printf("Sum of term is: %lf",sum);
