#include <stdio.h>
#include <string.h>
#include <ctype.h>

void decode(char* str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (isdigit(str[i]))
        {
            int num = str[i] - '0';
            for (int j = 0; j < num; j++)
            {
                printf("%c", str[i-1]);
            }
        }
    }
    printf("\n");
}

int main()
{
    char str[] = "A2B3C4d3";
    decode(str);
    return 0;
}
