#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int main(){
    char *str[3];
    char temp[100];
    int i,j,size;
    printf("문자열 3개 입력하시오.\n");
    for(i=0; i<3; i++){
        printf(" %d 번째 문자열 : ", i+1);
        gets(temp);
        size = strlen(temp);
        str[i] = (char*)malloc((sizeof(char)*size) +1);
        strcpy(str[i],temp);
    }
    printf("입력과 반대로 출력(문자열 순서도 반대로)\n");
    for(i=2; i>=0; i--){
        size = strlen(str[i]);
        temp[size] = '\n';
        for(j=size;  )
    }
}