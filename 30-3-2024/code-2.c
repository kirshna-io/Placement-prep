/*Find the power of a number without using pow() function.*/

#include <stdio.h>
int main()
{
    int b,e,res=1,ce;
    printf("Enter the base and exponent values:");
    scanf("%d %d",&b,&e);
    ce=e;
    while(e>0)
    {
        res=res*b;
        e--;
    }
    printf("%d power %d is:%d",b,ce,res);
    return 0;
}
/*Input:
Enter the base and exponent values:2 5
Output:
2 power 5 is:32
*/
