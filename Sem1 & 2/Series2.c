#include <stdio.h>
int main()
{
int n, sum=0;
printf("enter number upto you want to calculate sum:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(i%2!=0)
sum+=i;
}
printf("Sum of term is: %d",sum);
}
