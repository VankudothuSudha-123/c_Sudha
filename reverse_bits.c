//program to print reverse bits of given integer
#include<stdio.h>
int main(){
int a[20],swap,i,n,r,m,count=0,j;
printf("enter the integer:\n");
scanf("%d",&n);
m = n;
for(i=0;n>0;i++)
{
r=n%2;
a[i] = r;
n = n/2;
}
printf("Binary equivalent of %d:",m);
for(i--;i>=0;i--)
{
printf("%d",a[i]);
count++;
}
/*Reversing the bits */
printf("\nthe reversed bits are:\n");
for(i=count-1,j=0;i<count/2;i--,j++)
{
swap = a[j];
a[j] = a[i];
a[i] = swap;
}
for(i=0;i<=count-1;i++)
{
printf("%d",a[i]);
}
printf("\n");
return 0;
}

