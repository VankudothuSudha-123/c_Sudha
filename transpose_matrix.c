//Program to print Transpose of a matrix
#include<stdio.h>
int main(){
int a[10][10],t[10][10],i,j,r,c;
printf("enter the number of rows:\n");
scanf("%d",&r);
printf("enter thenumber of columns:\n");
scanf("%d",&c);
printf("enter the matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
/*Tranpose of matrix is nothing but interchanging
rows into columns*/
/*1 2 3
  4 5 6
  7 8 9 
  the tranpose matrix is
  1 4 7
  2 5 8
  3 6 9 */
  
// Transposing the matrix
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
t[i][j] = a[j][i];
}
}
//printing the tranposed matrix
printf("the transposed matrix is:\n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%d  ",t[i][j]);
}
printf("\n");
}
return 0;
}

