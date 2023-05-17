#include<stdio.h>

int temptureTurn(int fahr)
{
    return ( (5.0/9.0) * (fahr-32));
}

main(){
    int fahr,c;
    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        c = temptureTurn(fahr);
        printf("%3d %6.1f\n",fahr, c);
    }
}