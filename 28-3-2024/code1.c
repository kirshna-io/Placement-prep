
#include <stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    printf("Enter a string:");
    scanf("%[^\n]",s);
    int l,i;
    l=strlen(s);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    return 0;
}
/*
Input:
Enter a string:Hello world
Output:
dlrow olleH
*/
