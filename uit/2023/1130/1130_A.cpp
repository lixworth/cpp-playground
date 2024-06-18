//
// Created by Worth Lix on 2023/11/30 19:16.
//
#include <iostream>
#include <algorithm>

long long map[1000000] = {};

using namespace std;
int main() {
  int n,k;
  cin >> n >> k;

  for (int i = 0; i < n; ++i) {
    cin >> map[i];
  }

  sort(map,map+n);

  long long result = 0;
  for (int i = 0; i < k; ++i) {
    result+= map[n-1-i]-map[i];
  }

  cout << result << endl;
  return 0;
}