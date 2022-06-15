// sum and count of positive and negative numbers
#include<stdio.h>
int main()
{
    int a[100],n,ps=0,nes=0,pc=0,nc=0,i;
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
          pc++;
        }
        else if(a[i]<0)
        {
            nes = nes+a[i];
            nc++;
        }
        else
        {
        continue;
        }
        }
    printf("count of positive numbers: %d\n",pc);
    printf("count of negative numbers: %d\n",nc);
    printf("sum of positive numbers: %d\n",ps);
    printf("sum of negative numbers: %d\n",nes);
    return 0;
}
