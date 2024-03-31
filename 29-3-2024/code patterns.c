/*Pattern printing left half pyramid*/
#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=i;j++)
       {
           printf("* ");
       }
       printf("\n");
   }
}
/*
Input:
5
Output:
*
* *
* * * 
* * * *
* * * * *
*/
/*Right half pyramid*/
#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
   {
      for(j=1;j<=n-i;++j)
       {
           printf(" ");
       }
       for(k=1;k<=i;++k)
       {
           printf("*");
       }
       printf("\n");
   }
   return 0;
}
/*
Input:
Enter value of n:5
Output:
    *
   **
  ***
 ****
*****
*/
/*Inverted right half pyramid*/
#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=n;i>=1;--i)
   {
       for(j=1;j<=n-i;++j)
       {
           printf(" ");
       }
       for(k=1;k<=i;++k)
       {
           printf("*");
       }
       printf("\n");
   }
   return 0;
}
/*
Input:
Enter value of n:5
Output:
*****
 ****
  ***
   **
    *
*/
/*Inverted full pyramid*/
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=n;i>=1;--i)
   {
       for(j=1;j<=n-i;++j)
       {
           printf(" ");
       }
       for(j=1;j<=i;++j)
       {
           printf("* ");
       }
       printf("\n");
   }
   return 0;
}
/*
Input:
Enter value of n:5
Output:
* * * * *
 * * * *
  * * *
   * *
    *
*/
