#include <stdio.h>
#include <string.h>

void runLengthEncoding(char* str){
    
    int len = strlen(str);
    int count;
    for (int i = 0; i < len; i++) {
        count = 1;
        while (i < len - 1 && str[i] == str[i+1]) {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
}

int main(){
    char str[] = "AABBBCCCCddd";
    runLengthEncoding(str);
    return 0;
}
