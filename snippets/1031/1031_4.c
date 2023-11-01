//
// Created by Worth Lix on 2023/10/31.
//
#include <stdio.h>

int main() {
    int y, m, d;
    scanf("%d-%d-%d", &y, &m, &d);
    if (d - 2 >= 1) {
        printf("%d-%.2d-%.2d\n", y, m, d - 2);
    } else if (m - 1 == 2) {
        if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) { // 29
            printf("%d-%.2d-%.2d\n", y, 2, 29 + (d - 2));
        } else {
            printf("%d-%.2d-%.2d\n", y, 2, 28 + (d - 2));
        }
    } else if (m - 1 >= 1) {
        // 4 6 9 11
        if (m - 1 == 4 || m - 1 == 6 || m - 1 == 9 || m - 1 == 11) {
            printf("%d-%.2d-%.2d\n", y, m - 1, 30 + (d - 2));
        } else {
            printf("%d-%.2d-%.2d\n", y, m - 1, 31 + (d - 2));
        }
    } else { // m-1 < 0
        printf("%d-%.2d-%.2d\n", y - 1, 12, 31 + (d - 2));
    }
    return 0;
}
