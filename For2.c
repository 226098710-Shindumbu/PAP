#include <stdio.h>
int main() {
    int i;
    int mark[5]; // Array to store marks
    while (i<5) {
        printf("Enter mark %d: ", i);
        scanf("%d", mark[i]);
        i++;
    }
    return 0;
    }