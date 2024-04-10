#include <stdio.h>

int main(){
    int a = 100;
    char b = 'b';
    void *p = NULL;
    p = (int *)&a;
    printf("*p = %d\n", *(int *)p);
    p = (char*) & b;
    printf("*p = %c\n", *(char *)p);
}

// int main(){
    // int days = 365;
    // int month = 12;
    // int Table[5] = {1, 2, 3, 4, 5};
    // printf("days의 주소는 %x\n", &days);
    // printf("month의 주소는 %x\n", &month);
    // printf("Table의 주소는 %x\n", Table);
    // printf("Table의 첫번째 요소의 주소는 %x\n", &Table[0]);
    // printf("Table의 두번째 요소의 주소는 %x\n", &Table[1]);   
// }

// int main(){
//     int *p, i = 3, j;
//     p = &i;
//     j = *p;
//     j++;
//     printf("*p = %d\n", *p);
//     printf("i = %d\n", i);
//     printf("j = %d\n", j);
// }