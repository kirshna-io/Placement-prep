/*Reverse the digits(Get user Input)*/

#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        printf("%d",i);
        n=n/10;
    }
    return 0;
}
/*Output:
Enter a number:1234
4321
*/
