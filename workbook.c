#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define TOTAL 5

int main(){
    char *song[10];
    char newSong[80];
    int i;
    for(i=0; i<TOTAL; i++){
        printf("애창곡 #%d?", i+1);
        gets(newSong);
        song[i] = (char*)malloc((strlen(newSong)+1)*sizeof(char));
        strcpy(song[i], newSong);
    }
    printf("****입력한 노래 제목****\n");
    for(i=TOTAL-1; i>=0; i--){
        printf("노래 #%d : %s\n", i+1, song[i]);
        free(song[i]);
    }

}





