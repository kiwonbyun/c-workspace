#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;
    char name[10];
    fp = fopen("sample5.dat","rb");
    if(fp == NULL){
        puts("에러");
        exit(1);
    }
    while(1){
        if(fread(name, 10,1,fp) != 1){
            break;
        }
        puts(name);
    }
    fclose(fp);
}