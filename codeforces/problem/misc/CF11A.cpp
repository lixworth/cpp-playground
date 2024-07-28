// Problem: A. Increasing Sequence
// Contest: Codeforces - Codeforces Beta Round 11
// URL: https://codeforces.com/problemset/problem/11/A
// Memory Limit: 64 MB
// Time Limit: 1000 ms
//
// Created by Worth Lix on 2023-12-04 20:23:44
//
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>

using namespace std;

int b[2000];
int a[2000];
int main() {
  int n,d;
  cin >> n >> d;
  int count = 0;
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }

  for (int i = 1; i < n; ++i) {
    int e = (b[i]-b[i-1])/d;
    count += e;
    b[i] += e*d;
    if((b[i]-b[i-1])%d != 0){
      count += 1;
      b[i] += d;
    }
  }
  cout << count;
  return 0;
}
