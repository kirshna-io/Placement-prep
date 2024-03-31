
#include <stdio.h>
int main()
{
   int n,i,r=1;
   printf("Enter value of n:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       r=r*i;
   }
   printf("Factorial of %d is:%d",n,r);
    return 0;
}
/*
Input:                                Input:
Enter value of n:3                    Enter value of n:6
Output:                               Output:
Factorial of 3 is:6                   Factorial of 6 is:720
*/
