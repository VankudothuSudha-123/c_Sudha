//printing the two dimensional string
#include<stdio.h>
#include<string.h>
int main(){
char s[3][10];
int i;
printf("enter the strings:\n");
// this block of codefor to take user input
for(i=0;i<3;i++)
{
gets(s[i]);
}
//this block of code is for to diaplay 2D string
for(i=0;i<3;i++)
{
printf("%s\n",s[i]);
}
printf("the array of strings are printed");
return 0;
}

