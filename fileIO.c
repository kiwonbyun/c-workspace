#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char name[64];
    FILE *fp;
    fp = fopen("sample2.dat","w");
    if(fp == NULL){
        puts("파일을 개방할수 없습니다!");
        exit(1);
    };
    gets(name);
    while(strcmp(name,"end")){
        strcat(name,"\n");
        fputs(name, fp);
        gets(name);
    }    
    fclose(fp);
}

