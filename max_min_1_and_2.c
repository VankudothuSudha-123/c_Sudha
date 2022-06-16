// program to find 1st maximum,1st minimum,2nd maximum and 2nd minimum
#include<stdio.h>
int main()
{
int a[30],i,j,k,swap,m1,m2,mi1,mi2,n,count=0;
printf("enter the number of elements in an array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
// Sorting the numbers in descending order
//then the 1st number will be maximum number and 2nd number will be 2nd maximum
//and the last number will be minimum and the 2nd last element will be 2nd minimum
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
//length of the array
for(i=0;a[i]!='\0';i++)
{
  count++;  
}
printf("length:%d\n",count);
printf("The 1st maximum number is: %d\n",a[0]);
printf("The 2nd maximum number is : %d\n",a[1]);
printf("The 1st minimum number is : %d\n",a[count-1]);
printf("The 2nd minimum number is : %d\n",a[count-2]);
return 0;
}
