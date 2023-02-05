#include <stdio.h>
 
int main(void){
    int i, j, num;
    //数値を格納する配列、今回は100個まで保管できるようにした。
    int scores[100];
    //数値の総数を入力
    int total;
    printf("入力する数値の総数（ただし、100個以下） = ");
    scanf("%d", &total);
    //配列に格納する数値を入力
    printf("%d個の数値を入力 \n", total);
    for(i=0; i<total; ++i){
        scanf("%d", &scores[i]);
    }
    printf("scores=");
    for (i=0; i<total; ++i){
        printf("%d,", scores[i]);
    }
    printf("\n");
    //数値を降べきの順にソートするためのfor文を作る
    //入力された数字を全て比較する
    for (i=0; i<total-1; ++i) {
        for (j=0; j<total-1; ++j) {
            //数字を比較し、数字を降べきの順に並び直す
            //このif文によって適当に入力された数値を降べきの順に整理されたものをnumという配列に保管し直す
            if (scores[j+1] < scores[j]) {
                num =  scores[j];
                scores[j] = scores[j+1];
                scores[j+1] = num;
                }
            }
        }

    //降べきの順にソートした数値を出力する
    printf("results=");
    for (i=0; i<total; ++i){
        printf("%d,", scores[i]);
    }
    printf("\n");
}