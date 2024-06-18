/*
 * Created by LixWorth on 2024/03/28 22:58
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

using std::cin, std::cout;
using ll = long long;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int h, m;
        scanf("%d:%d", &h, &m);
        if (h == 12) {
            printf("%02d:%02d PM\n", h, m);
        } else if (h == 0) {
            printf("%02d:%02d AM\n", 12, m);
        } else if (h < 12 && m >= 0) {
            printf("%02d:%02d AM\n", h, m);
        } else {
            printf("%02d:%02d PM\n", h - 12, m);
        }
    }
    return 0;
}
