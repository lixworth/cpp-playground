//
// Created by Worth Lix on 2023/11/2.
//
#include <stdio.h>

int main() {
    long int a, b, c, d;
    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
    long int score[] = {};
    // 原始
    long int x = a < c ? a : c;
    long int y = b < d ? b : d;
    score[0] = x * y;

    // 翻转 2
    x = a < d ? a : d;
    y = b < c ? b : c;
    score[1] = x * y;

    // 翻转 1
    x = b < c ? b : c;
    y = a < d ? a : d;
    score[2] = x * y;

    long int max = 1;

    for (int i = 0; i < 3; ++i) {
        if(score[i] > max){
            max = score[i];
        }
    }
    printf("%ld\n",max);
    return 0;
}