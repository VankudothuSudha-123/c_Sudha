//descending order of array elements
#include<stdio.h>
// header file is included for input and output operations
int main()
{
int a[30],i,j,k,n,swap;
printf("number of elements in an array:");
scanf("%d",&n);
printf("array elements are:");
//taking array elements as user input
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
// bubble sort for descending order of array elements
for(j=0;j<=n-1;j++)
{
for(k=0;k<=n-j-1;k++)
{
if(a[k]<a[k+1])
{
swap = a[k];
a[k] = a[k+1];
a[k+1] = swap;
}
}
}
//sorted array elements
printf("the sorted array elements:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
