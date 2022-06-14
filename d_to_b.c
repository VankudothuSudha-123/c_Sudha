#include <stdio.h>
// here the decimal number is 10
// the binary equivalent is 1010
// we get this binary equivalent by dividing the decimal number by 2
// when we divide the 10 with 2 then the remainder is 0 and the quotient is 5
// here 0 is stored and the next number which should be divided by 2 is 5
//like wise the process will continue till the number is greater than 0
int main() {
    int a[100],n,i,r;
    printf("enter the number to find binary equivalent");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        r=n%2; 
        a[i] = r;
        n = n/2;
    }
    for(i--;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
