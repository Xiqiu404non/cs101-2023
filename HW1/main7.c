#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char a[] = "10001111";
    char b[] = "10011110";

    char hex_a[3];
    char hex_b[3];

    int dec_a = strtol(a, NULL, 2);
    int dec_b = strtol(b, NULL, 2);

    sprintf(hex_a, "%X", dec_a);
    sprintf(hex_b, "%X", dec_b);

    printf("%s\n%s\n", hex_a, hex_b);

    return 0;
}
