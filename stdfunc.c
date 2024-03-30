#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double x = 12.23;
    int i = -5, j = 2;
    int a, b, c;
    a = ceil(x);
    b = floor(x);
    c = pow(4, j);

    printf("abs(-5)=%d\n", abs(i));
    printf("ceil(12.23)=%d\n", a);
    printf("cos(10)=%f\n", cos(10));
    printf("exp(2)=%.f\n", exp(j));
}
