#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

int main() {
    char a[] = "-9 8 7 6 5 -4 3 -2 1";
    int i = 4;

    int nums[9];
    char *p = strtok(a, " ");
    int index = 0;
    while (p != NULL) {
        nums[index++] = atoi(p);
        p = strtok(NULL, " ");
    }

    qsort(nums, sizeof(nums)/sizeof(int), sizeof(int), cmp);

    int count = 0;
    for (int j = 0; j < sizeof(nums)/sizeof(int); j++) {
        if (nums[j] != 0) {
            count++;
            if (count == i) {
                printf("%d\n", nums[j]);
                break;
            }
        }
    }

    return 0;
}
