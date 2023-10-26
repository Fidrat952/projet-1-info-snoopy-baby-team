#include <stdio.h>

void decor(){
    char decor[10][20];
    for (int i=0;i<10;i++){
        printf("\n");
        for(int j=0;j<20;j++){
            decor[i][j] = '0';
            printf("%c",decor[i][j]);
        }
    }
}

