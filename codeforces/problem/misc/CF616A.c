//
// Created by Worth Lix on 2023/11/5 20:21.
//

#include <stdio.h>
#include <string.h>

int main(){
  char a[] = {},b[] = {};
  scanf("%s\n",&a);
  scanf("%s\n",&b);
  char final_a[] = {};
  char fa_index = 0;
  int tick = 0;
  for (int i = 0; i < strlen(a); ++i) {
    if(!tick){
      if(a[i] != 0){
        final_a[fa_index]= a[i];
        printf("%d",a[i]);
        fa_index++;
        tick = 1;
      }
    }else{
      final_a[fa_index]= a[i];
      fa_index++;
    }
  }

  char final_b[] = {};
  char fb_index = 0;
  tick = 0;
  for (int i = 0; i < strlen(b); ++i) {
    if(!tick){
      if(b[i] != 0){
        final_b[fb_index]= b[i];
        fa_index++;
        tick = 1;
      }
    }else{
      final_b[fb_index]= b[i];
      fa_index++;
    }
  }
  printf("%s|%s",final_a,final_b);

  int result = strcmp(final_a,final_b);

  if(result == 0){
    printf("=");
  }else if(result < 0){
    printf("<");
  }else{
    printf(">");
  }
  return 0;
}