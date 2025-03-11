#include <stdio.h>
int main()
{
int n, m, count=0;
printf("Enter no of elements in an array:");
scanf("%d",&n);
int a[n];
printf("Enter Elements of array:");
for(int i=0; i<n; i++)
scanf("%d",&a[i]);
printf("Enter Elements to find frequency:");
scanf("%d",&m);
for(int i=0;i<n;i++)
if(a[i]==m)
count +=1;
}
if (count==0)
printf("Invalid element");
else
printf("Frequency of %d is %d ",m,count);
}
