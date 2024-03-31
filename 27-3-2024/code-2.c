
#include <stdio.h>
int main()
{
    int n,i,ft=0,st=1,r=0;
    scanf("%d",&n);
    printf("%d ",ft);
    printf("%d ",st);
    for(i=3;i<=n;i++)
    {
        r=ft+st;
        printf("%d ",r);
        ft=st;
        st=r;
    }
    return 0;
}
/*Input:                      Input:
6                             10
Output:                       Output:
0 1 1 2 3 5                   0 1 1 2 3 5 8 13 21 34
*/
