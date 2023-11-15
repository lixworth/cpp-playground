//
// Created by Worth Lix on 2023/11/14 19:14.
//

#include <stdio.h>
int main() {
  int n, m;
  scanf("%d%d", &n, &m);

  int map[100000][100000] = {};
  int index[100000] = {};

  for (int i = 0; i <= n; ++i) {
    map[i+1][0] = 0;
  }

  while (m--) {
    char c[2] = {};
    int a, b;
    scanf("%s%d%d", c, &a, &b);
    printf("%d",map[0]);

    if (c[0] == 'Q') {
      int check = 0;
      if (index[a] == 0) {
        printf("NO");
        continue;
      }

      check ? printf("YES") : printf("NO");
    }
  }
  return 0;
}