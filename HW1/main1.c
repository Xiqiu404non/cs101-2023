#include <stdio.h>
#include <string.h>

void runLengthEncoding(char* a){
    
    int len = strlen(a);
    int count;
    for (int i = 0; i < len; i++) {
        count = 1;
        while (i < len - 1 && a[i] == a[i+1]) {
            count++;
            i++;
        }
        printf("%c%d", a[i], count);
    }
}

int main(){
    char a[] = "AABBBCCCCddd";
    runLengthEncoding(a);
    return 0;
}
