#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float a;
    a = exp(1);
    
    
    printf("%f\n", a);
    printf("%.1f\n", floor(a));
    printf("%.1f\n", ceil(a));
    int b = 4;
    printf("%.0f\n", sqrt(b));
    
    return 0;
}