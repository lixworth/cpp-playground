//
// Created by Worth Lix on 2023/11/17 19:53.
//
#include <cstdio>
#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
  long long t;
  scanf("%lld\n",&t);
  while (t--){
    string s;
    long long lines = 0,words = 0,sum = 0;
    while (getline(cin,s)){
      if(s == "====="){
        break;
      }
      lines++;
      sum+=s.length();
      if(s.length() == 0){
        continue;
      }
      long long flag = 0;
      for (const auto &item : s){
        if(flag){
          if(toascii(item) == 39 || (toascii(item) >= 65 && toascii(item) <= 90) || (toascii(item) >= 97 && toascii(item) <= 122)){
          }else{
            flag = 0;
            words++;
          }
        }else{
          if(toascii(item) == 39 || (toascii(item) >= 65 && toascii(item) <= 90) || (toascii(item) >= 97 && toascii(item) <= 122)){
            flag = 1;
          }
        }
      }
    }
    printf("%lld %lld %lld\n",lines,words,sum);
  }
  return 0;
}