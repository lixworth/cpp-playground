//
// Created by Worth Lix on 2023/12/7 19:19.
//
#include <iostream>
#include <algorithm>

using namespace std;

int a[1000][1000];
int a_index[1000];

long long b[1000][1000][200];
int b_index[1000][1000];

int main() {

  int n,m,k;
  cin >> n >> m >> k;

  for (int i = 1; i < n+1; ++i) {
    int t1,t2;
    cin >> t1 >> t2;
    a[t1][a_index[t1]] = t2;
    a_index[t1]++;
    b[t1][t2][b_index[t1][t2]] = i;
    b_index[t1][t2]++;
  }

  for (int i = 1; i <= m; ++i) {
    if(a_index[i] == 0){
      cout << "-1" << endl;
      continue;
    }
    sort(a[i],a[i]+a_index[i],greater<int>());
    for (int j = 0; j < a_index[i]; ++j) {
      if(j != 0 && a[i][j] == a[i][j-1]){
        continue;
      }
      for (int l = 0; l < b_index[i][a[i][j]]; ++l) {
        cout << b[i][a[i][j]][l] << " ";
      }
    }
    cout << endl;
  }
  return 0;
}