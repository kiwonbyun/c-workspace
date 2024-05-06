#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define MAXFILENAME 50

int main(){
    char fname[MAXFILENAME];
    int c;
    FILE *fp = NULL;
    fprintf(stdout,"파일명을 입력하세요:");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    fseek(fp, 0, SEEK_END);
    if(ftell(fp)==0){
        return 0;
    }
    fseek(fp, -1, SEEK_CUR);
    while(1){
        c = fgetc(fp);
        putchar(c);
        if(ftell(fp)==1){
            break;
        }
        fseek(fp,-2,SEEK_CUR);
    }
    fclose(fp);

}



