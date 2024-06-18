//
// Created by Worth Lix on 2023/11/12 12:45.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
  int n,q;
  scanf("%d %d\n",&n,&q);

  char map[10000][1000] = {};
  char small_map[10000][1000] = {};
  for (int i = 0; i < n; ++i) {
    scanf("%s",map[i]);
    int small_map_index = 0;
    // 65-90
    for (int j = 0; j < strlen(map[i]); ++j) {
      if(toascii(map[i][j]) > 64 && toascii(map[i][j]) < 91){
        small_map[i][small_map_index] = map[i][j];
        small_map_index++;
      }
    }
  }
  char input[1000];
  while (q--){
    scanf("%s\n",input);
    int count = 0;
    char answer[10000][1000] = {};
    for (int j = 0; j < n; ++j) {
      if(strlen(small_map[j]) == 0){
        continue;
      }
      if(strcmp(input,small_map[j]) == 0){
        for (int k = 0; k < strlen(map[j]); ++k) {
          answer[count][k] = map[j][k];
        }
        count++;
      }
    }
    printf("%d\n",count);
    for (int j = 0; j < count; ++j) {
      printf("%s\n",answer[j]);
    }
  }
  return 0;
}