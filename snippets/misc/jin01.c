#include<stdio.h>
int main() {
  int map[10000] = {};
  int map_index = 0;
  double z;
  scanf("%lf", &z);
  int x = z;
  while (x != 0) {
    if (x % 10 >= 8) { // 7 8 1
      map[map_index] += x % 10 - 8;
      map_index++;
      map[map_index] = 1;
    } else {
      map[map_index] += x % 10;
      map_index++;
    }
    x /= 10;
  }
  for (int i = map_index - 1; i >= 0; i--) {
    printf("%d", map[i]);
  }
  printf(".");
  int a = z;
  double s = z - a;
  while (s != 0) {
    s = s * 8;
    int q = s;
    printf("%d", q);
    s -= q;
  }
  return 0;
}
