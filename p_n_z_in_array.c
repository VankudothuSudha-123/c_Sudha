// positive, negative and zeros in an array
#include<stdio.h>
int main()
{
    int a[100],n,p=0,ne=0,z=0,i;
    printf("enter number of elements in an array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
           p++; 
        }
        else if (a[i]<0)
        {
            ne++;
        }
        else
        {
            z++;
        }
    }
    printf("count of positive numbers: %d\n",p);
    printf("count of negative numbers: %d\n",ne);
    printf("count of zeros: %d\n",z);
    return 0;
}
