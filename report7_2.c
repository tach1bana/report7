#include <stdio.h>
 
int main(void){
    int i, j, num;
    int scores[6] = {100, 60, 70, 100, 90, 80};
    printf("scores　=　");
    for (i=0; i<6; ++i){
        printf("%d　", scores[i]);
    }
    printf("\n");
    //数値を降べきの順にソートするためのfor文を作る
    //入力された数字を全て比較する
    for (i=0; i<6; ++i) {
        for (j=i+1; j<6; ++j) {
            //数字を比較し、数字を降べきの順に並び直す
            //このif文によって適当に入力された数値を降べきの順に整理されたものをscoresという配列に保管し直す
            //numは一時的に数字を保管しとくためだけに使用している。
            if (scores[i] < scores[j]) {
                num =  scores[i];
                scores[i] = scores[j];
                scores[j] = num;
                }
            }
        }

    //降べきの順にソートした数値を出力する
    printf("results　=　");
    for (i=0; i<6; ++i){
        printf("%d　", scores[i]);
    }
    printf("\n");
}