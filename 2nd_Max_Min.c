#include <stdio.h>
int main()
{
int n, max1, max2,min1, min2;
printf("Enter no of elements in an array:");
scanf("%d",&n);
int a[n], min=a[0],max=a[0];
printf("Enter Elements of array:");
for(int i=0; i<n; i++)
scanf("%d",&a[i]);
if(a[0]>a[1])
{
max1=min2=a[0];
max2=min1=a[1];
}
else
{
max1=min2=a[1];
max2-min1=a[0];
{
for(int i=2;i<n;i++)
{
if(a[i]>max1)
{
max2=max1;
max1=a[i];
}
else if(a[i] > max2 && a[i] < max1)
max2 = a[i];
if(a[i]<min1)
{
min2=min1;
min1=a[i];
}
else if(a[i] < min2 && a[i] > min1)
min2 = a[i];
{
printf("Largest Element is %d and 2nd Largest Element is %d",max1,max2);
printf("Smallest Element is %d and 2nd Smallest Element is %d", minl,min2);
}
