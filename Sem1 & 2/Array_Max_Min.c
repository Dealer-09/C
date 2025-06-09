#include <stdio.h>
int main()
{
int n,minPos=0,maxPos=0;
printf("Enter no of elements in an array:");
scanf("%d",&n);
int a[n],min=a[0],max=a[0];
printf("Enter Elements of array:");
for(int i=0; i<n; i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
minPos=i;
if(a[i]>max)
{
max=a[i];
maxPos=i;
}
}
printf("Max Element is %d at %d Max Element is %d at %d", max, maxPos, min,minPos);
{
