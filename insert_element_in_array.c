#include<stdio.h>
int main()
{
int a[30],i,n,e,l,j;
printf("number of elements in an array:\n");
scanf("%d",&n);
printf("tha array is:");
// taking array as user input
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the location to insert the number:\n");
scanf("%d",&l);
printf("enter the element to insert\n");
scanf("%d",&e);
/* To insert a element in an array first the element in that location should be 
 shifted to another location */
for(j=n;j>=l;j--)
{
a[j] = a[j-1];
}
a[l]=e;
for(i=0;i<=n;i++)
{
printf("%d",a[i]);
}
return 0;
}
