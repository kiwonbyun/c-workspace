#include <stdio.h>
#include <string.h>

int main(){
    char str[10];
    FILE *fp = fopen("sample6.txt","rt");
    fseek(fp, 7, SEEK_SET);
    fgets(str, 4, fp);
    printf("7번째부터 3글자 출력 %s \n", str);
    fseek(fp, -2, SEEK_CUR);
    fgets(str, 3, fp);
    printf("현재 위치에서 앞에 2글자부터 2글자 출력 %s \n", str);
    fseek(fp, -9, SEEK_END);
    fgets(str, 6, fp);
    printf("맨 뒤에서 9번째 앞부터 5글자 출력 %s \n", str);
    fclose(fp);
}