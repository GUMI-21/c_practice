#include<stdio.h>

int main() {
    int c,len;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            ++len;
        } else {
            printf("%d",len);
            len = 0;
        }
    }
    printf("\n");
    return 0;
}