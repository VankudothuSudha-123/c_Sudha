// fliping the bits of a integer
/* flip is nothing but changing bit zero's into bit one's
and bit one's into bit zeros's*/
#include<stdio.h>
int main(){
int a[20],swap,i,n,r,j,k;
printf("enter the integer:\n");
scanf("%d",&n);
/*here the bit width is not given so
after the flip we will get this bits
0 => 1
1 => 0
2 => 10 => 01
3 => 11 => 00
4 => 100 => 011
5 => 101 => 010
6 => 110 => 001
7 => 111 => 000
8 => 1000 => 0111
9 => 1001 => 0110
10 => 1010 => 0101 */
if(n==0)
{
k = 1;
printf("%d",k);
}

for(i=0;n>0;i++)
{
r=n%2;
a[i] = r;
n = n/2;
}
j = i;
for(i=j;i>=0;i--)
{
if(a[i] == 0)
{
a[i] = 1;
}
else
{
a[i] = 0;
}
}
for(i=j-1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}


