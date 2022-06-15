//Program to search a element in a given array
#include<stdio.h>
int main(){
int a[20],e,i,n,f;
printf("number of elements in an array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter a element to find");
scanf("%d",&e);
for(i=0;i<n;i++)
{
if(e == a[i])
{
printf("the number is found: %d",a[i]);
f=1;
}
}
if(f==0)
{
printf("the number is not found");
}

return 0;
}
