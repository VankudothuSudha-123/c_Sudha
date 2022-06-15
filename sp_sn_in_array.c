// sum of positive numbers and sum of negative numbers in an array
#include<stdio.h>
int main()
{
    int a[100],n,ps=0,nes=0,zs=0,i;
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
          ps = ps+a[i];
        }
        else 
        {
            nes = nes+a[i];
        }
        }
    printf("count of positive numbers: %d\n",ps);
    printf("count of negative numbers: %d\n",nes);
    return 0;
}
