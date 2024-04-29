#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;
    char name[10];
    fp = fopen("sample5.dat","wb");
    if(fp ==NULL){
        puts("파일을 개방핧 수 없습니다");
        exit(1);
    }

    gets(name);
    while(strcmp(name, "END")){
        fwrite(name, 10, 1,fp);
        gets(name);
    }
    fclose(fp);
}