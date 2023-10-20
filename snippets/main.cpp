#include <cstdio>

int main() {
    int n;
    int search;
    scanf("%d %d",&n,&search);
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        int tmp = i;
        while (tmp > 0) {
            if (tmp % 10 == search){
                count++;
            }
            tmp /= 10;
        }
    }
    printf("%d",count);
}
