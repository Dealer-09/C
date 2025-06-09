#include <stdio.h>
int main()
{
int n, m, flag=-1;
printf("Enter no of elements in an array:");
scanf("%d",&n);
int a[n];
printf("Enter Elements of array:");
for(int i=0; i<n; i++)
scanf("%d",&a[i]);
printf("Enter element to find:");
scanf("%d",&m);
for(int i=0;i<n;i++)
{
if(m==a[i])
flag=i;
}
if (flag>=0)
printf("Element %d is present in %d",m,flag);
else
printf("Element is not present");
