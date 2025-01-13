#include <stdio.h>
int main() {
    int n;
    printf("请输入您要打印的行数：");
    scanf("%d", &n);
    for (int i = 0; i < n / 2 + 1; i++) {
        for (int j = 0; j < n / 2 - i; j++) { printf(" "); }
        for (int j = 0; j < 2 * i + 1; j++) { printf("*"); }
        printf("\n");
    }
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < i + 1; j++) { printf(" "); }
        for (int j = 0; j < n - 2 - 2 * i; j++) { printf("*"); }
        printf("\n");
    }
    return 0;
}
