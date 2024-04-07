#include <stdio.h>

int main()
{
    int a[1000];
    int n,t,f=0;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("\n%d ",&a[i]);
    }
    scanf("%d",&t);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==t)
            {
                printf("[%d,%d]",i,j);
                f=1;
                break;
            }
        }
        if(f==1)break;
    }
    return 0;
}
