#include <stdio.h>
int main()
{
int n, m, temp;
printf("Enter no of elements in an array:");
scanf("%d",&n);
int a[n];
printf("Enter Elements of array:");
for(int i=0; i<n; i++)
scanf("%d",&a[i]);
for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-(i+1);j++)
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
printf("Ascending sort:");
for(int i=0;i<n;i++)
printf("%d",a[i]);
}
