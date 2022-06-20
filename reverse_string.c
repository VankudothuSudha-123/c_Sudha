//program to print reverse of a string
#include<stdio.h>
#include<string.h>
int main(){
char s[20];
int i,j,count=0,swap;
printf("enter the string:");
gets(s);
/*here we are finding the lenth of the string to use this 
lenth in reversing the string*/
for(i=0;s[i]!='\0';i++)
{
count++;
}
printf("the length of the string is:%d",count);
printf("The reversed string is:\n");
/*in this part the first character is interchanging with last element, like this 
all other characters will change */
for(i=0,j=count-1;i<=count/2;i++,j--)
{
swap = s[i] ;
s[i] = s[j];
s[j] = swap;
}
printf("%s\n",s);
return 0;
}


