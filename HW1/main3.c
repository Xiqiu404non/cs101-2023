#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "ABCabcABC";
    int len = strlen(str);
    int shift = 4;

    printf("%s\n", str);
    
    printf("%d\n", shift);

    for (int i = shift; i < len; i++) {
        printf("%c", str[i]);
    }
    for (int i = 0; i < shift; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
