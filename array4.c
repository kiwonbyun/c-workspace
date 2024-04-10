#include <stdio.h>
void score_sum(int gr[][5], int,int);

int main(){
    int score[2][5] = {{10, 30, 50, 23, 45}, {20, 52, 12, 42, 32}};
    score_sum(score, 2, 5);
}

void score_sum (int gr[][5], int row, int column) {
    int sum[2] = {0};
    int i, j;
    for (i = 0; i < row; i++){
        for (j = 0; j < column;j++){
            sum[i] += gr[i][j];
            printf("sum[%d] = %d\n", i, sum[i]);
        }
    }
}