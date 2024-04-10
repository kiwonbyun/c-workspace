#include <stdio.h>

// int main(){
//     int *p, a[] = {10, 20, 30, 40, 50};
//     p = &a[0];
//     printf("*p == %d\n", *p);
//     printf("*p++ == %d\n", *p++);
//     printf("*++p == %d\n", *++p);
//     p = p + 2;
//     printf("*p == %d\n", *p);
//     printf("a[2] == %d\n", a[2]);
//     printf("*p+2 == %d\n", *p + 2);
// }

int main(){
    int *p, *q;
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    p = &a[3];
    printf("*p = %d\n", *p);
    printf("*(p+3) = %d\n", *(p + 3));
    q = p + 3;
    printf("*q = %d\n", *q);
    printf("p-q = %d\n", p - q);
    printf("q-p = %d\n", q - p);
}