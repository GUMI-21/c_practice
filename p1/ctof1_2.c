# include <stdio.h>
main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("摄氏度转换\n");
    while (celsius <= upper) {
        fahr = celsius / (5.0/9.0) + 32;
        printf("%3.0f %6.0f\n",fahr,celsius);
        celsius = celsius + step;
    }
}