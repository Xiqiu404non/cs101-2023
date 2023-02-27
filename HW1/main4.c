#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int str_to_int(char* str) {
    int i = 0;
    int sign = 1;
    int result = 0;
    while (isspace(str[i])) {
        i++;
    }
    if (str[i] == '+' || str[i] == '-') {
        sign = (str[i++] == '-') ? -1 : 1;
    }
    while (isdigit(str[i])) {
        result = result * 10 + (str[i++] - '0');
    }
    return sign * result;
}

int main() {
    char a[] = "-99abc";
    char b[] = "99acbc";
    char c[] = "ac-99bc";
    printf("%d\n%d\n%d", str_to_int(a), str_to_int(b), str_to_int(c));
    return 0;
}
