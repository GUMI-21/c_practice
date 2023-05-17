#include<stdio.h>

int main(){
    printf("singned char min = %d\n", -(char)((unsigned char)~0>>1)-1);
    return 0;
}