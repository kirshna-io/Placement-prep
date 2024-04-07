#include<stdio.h>
#include<math.h>
int main()
{
    int s,f,g;
    printf("Dividend:");
    scanf("%d",&s);
    printf("Divisor:");
    scanf("%d",&f);
    g=floor(s/f);
    printf("%d",g);
    return 0;
}
