//
// Created by Worth Lix on 2023/11/13 18:58.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  int n, k;
  scanf("%d%d", &n, &k);
  char input[100000] = {};
  scanf("%s", input);
  int later = n-k;
  for (int i = 0; i < strlen(input); ++i) {
    if (i <= k - 1) {
      printf("%c", toupper(input[i]));
    } else if (i >= n-1-later) {
      printf("%c", tolower(input[i]));
    } else {
      printf("%c", input[i]);
    }
  }
  return 0;
}