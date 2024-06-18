//
// Created by Worth Lix on 2023/11/2.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d\n", &n);
    int data[10000000] = {};
    int index = 0;
    while (scanf("%d", &data[index]) != EOF) {
        index++;
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        count = count + (data[i] - (i + 1));
    }
    if (count % 2 != 0) {
        printf("ZZZ");
    } else {
        printf("SSZ");
    }
    return 0;
}
