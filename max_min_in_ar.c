// Maximum and Minimum number in a given number
#include<stdio.h>
int main(){
int a[100],i,n,max,min;
printf("enter the number of elements in an array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min = a[0];
max = a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max = a[i];
}
if(a[i]<min)
{
min = a[i];
}
}
printf("the maximum number is : %d\n",max);
printf("the minimum number is : %d\n",min);
return 0;
}
