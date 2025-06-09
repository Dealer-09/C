#include <stdio.h>
int main()
{
int n,s=0;
float avg;
printf("Enter size of array: ");
scanf("%d",&n);
int a[n];
printf("Enter elements of array: ");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++)
s+=a[i];
avg=s/n;
printf("The Sum is %d and the average is %f",s,avg);
}
