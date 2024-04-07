#include <stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    printf("(x1,y1)=");
    scanf("(%d,%d)",&x1,&y1);
    printf("(x2,y2)=");
    scanf("\n(%d,%d)",&x2,&y2);
    int n,m,r;
    n=(x2-x1)*(x2-x1);
    m=(y2-y1)*(y2-y1);
    r=sqrt(n+m);
    printf("%d",r);
    return 0;
}
