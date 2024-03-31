
#include <stdio.h>
#include<math.h>
int main()
{
    int n,i,f=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            f=1;
        }
    }
    if(n==1)
    {
        printf("Neither prime nor composite");
    }
    else if(f==1)
    {
        printf("Not a prime number");
    }
    else
    {
        printf("Prime number");
    }
    return 0;
}
/*Input:                              Input:
Enter value of n:13                   Enter value of n:25
Output:                               Output:
Prime number                          Not a prime number                  */                        
