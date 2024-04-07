//Concatenate Two Strings
#include <stdio.h>
#include <string.h>

int main() {
    char string1[100] = "Hello, ";
    char string2[] = "world!";
    
    strcat(string1, string2);
    
    printf("Concatenated string: %s\n", string1);
    
    return 0;
}
