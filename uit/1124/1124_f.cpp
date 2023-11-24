//
// Created by Worth Lix on 2023/11/24 20:02.
//
#include <iostream>
#include <cstdio>

using namespace std;
int main() {
  long long n;
  scanf("%lld",&n);
  while (n--) {
    long long m;
    scanf("%lld",&m);
    if (m == 1 || m == 24) {
      printf("Fake news!\n");
    } else {
      printf("Nobody knows it better than me!\n");
    }
  }
  return 0;
}