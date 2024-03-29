/* #define _CRT_SECURE_NO_WARNINGS */
#include <stdio.h>

int main(){
    int x, y, sum;
    char s[30] = "Tutor site is very GOOD!!";

    printf("중간평가 점수를 입력하세요:");
    scanf("%d", &x);
    printf("중간평가 점수를 입력하세요:");
    scanf("%d", &y);
    sum = x + y;
    printf("이번학기 성적은 %d 입니다. \n", sum);

    printf("*************\n\n");
    printf("입력한 문자는?");
    putchar('A');
    printf("\n\n");
    printf("입력한 문자열은?");
    puts(s);
    printf("\n\n");
}