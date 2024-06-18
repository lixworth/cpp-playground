//
// Created by Worth Lix on 2023/11/16 19:27.
//
#include <stdio.h>
int main() {
  int n, v;
  scanf("%d%d", &n, &v);
  int map[100000] = {};
  for (int i = 0; i < n; ++i) {
    scanf("%d", &map[i]);
  }
  int count = 0;
  int now = v;
  for (int i = n-1; i >= 0; --i) {
    int once = map[i];
    if(once == now){
      count++;
      now = v;
    }else if(once < now){
      now-=once;
    }else{
      // once > now
      count++;
      now = v-once;
    }
  }
  if (now != 0 && now < v) {
    count++;
  }
  printf("%d", count);
  return 0;
}