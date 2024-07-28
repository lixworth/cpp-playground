//
// Created by Worth Lix on 2023/11/28 20:41.
//
#include <iostream>
#include <algorithm>

using namespace std;
int main() {
  int n,x,y;
  cin >> n >> x >> y;

  int a[200000] = {};
  int b[200000] = {};

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    if(a[i] < y){
      a[i] = y;
    }
  }

  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }
  int max = 0;

  sort(a,a+n);
  sort(b,b+n);

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout <<  -1*(a[i]-b[i]) << " ";
    }
  }
  return 0;
}