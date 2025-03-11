#include <stdio.h>
int main()
{
int n, m, t, minIndex;
printf("Enter no of elements in an array:");
scanf("%d",&n);
int a[n];
printf("Enter Elements of array:");
for(int i=0; i<n; i++)
scanf("%d",&a[i]);
for(int i=0;i<=n-2;i++)
{
minIndex=i;
for(int j=i+1;j<n;j++)
{
if (a[minIndex] > a[j])
minIndex=j;
}
t=a[i];
a[i]=a[minIndex];
a[minIndex]=t;
}
printf("Ascending sort:");
for(int i=0;i<n;i++)
printf("%d",a[i]);
}
