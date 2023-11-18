//
// Created by Worth Lix on 2023/11/17 19:11.
//
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
  return *(int *)a - *(int *)b;
}

int main() {
  int n;
  scanf("%d",&n);
  int result = 0;
  int numbers[100000] = {};
  int ji_index = 0;
  for (int i = 0; i < n; ++i) {
    int input;
    scanf("%d",&input);
    if(input%2 == 0){
      result+=input;
    }else{
      numbers[ji_index] = input;
      ji_index++;
    }
  }

  if(ji_index%2 == 0){
    for (int i = 0; i < ji_index; ++i) {
      result+=numbers[i];
    }
  }else{
    qsort(numbers,ji_index,sizeof(int),cmp);
    for (int i = 1; i < ji_index; ++i) {
      result+=numbers[i];
    }
  }
  printf("%d",result);
  return 0; 
}