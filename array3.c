#include <stdio.h>

int main(){
    // char name[] = "HONG GIL DONG";

    // // null문자를 명시적으로 삽입해야함
    // char address1[6] = {'S', 'E', 'O', 'U', 'L', '\0'};
    // char address2[6] = {'S', 'E', 'O', 'U', 'L'};

    // printf("\n name: %s", name);
    // printf("\n address1: %s", address1);
    // printf("\n address2: %s", address2);
    char string[50];
    int i = 0;
    printf("문자열을 입력하시오:");
    scanf("%s", string);
    printf("입력받은 문자열 %s\n", string);
    printf("문자단위 출력");
    while(string[i] != '\0'){
        printf("%c", string[i]);
        i += 1;
    }
}
