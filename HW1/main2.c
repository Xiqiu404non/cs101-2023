#include <stdio.h>
#include <string.h>

void runLengthDecoding(char* str)
{
    int len = strlen(str);
    int count;
    
    for (int i = 0; i < len; i++) {
        count = 0;
        while (str[i] >= '0' && str[i] <= '9') {
            count = count * 10 + (str[i] - '0');
            i++;
        }
        for (int j = 0; j < count; j++) {
            printf("%c", str[i]);
        }
    }
}

int main()
{
    char str[] = "A3B2C4A9";
    runLengthDecoding(str);
    return 0;
}
