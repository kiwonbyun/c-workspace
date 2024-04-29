#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("sample3.dat","a");
    fputs("CHO SD\n",fp);
    fputs("HAN JG\n",fp);
    fclose(fp);
}