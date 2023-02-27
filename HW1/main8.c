#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Hello";
    int len = strlen(a);
    char temp;
    
    printf("a = %s\n", a);

    for (int i = 0; i < len / 2; i++) {
        temp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = temp;
    }

    printf("a = %s\n", a);

    return 0;
}
