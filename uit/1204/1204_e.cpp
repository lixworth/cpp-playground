//
// Created by Worth Lix on 2023/12/4 19:30.
//
#include <iostream>
#include <set>

using namespace std;

int map[10][10];

int checkArray(int a[10]){
  set<int> test;
  for (int i = 0; i < 10; ++i) {
    test.insert(a[i]);
  }
  return test.size() == 10;
}
int main() {
  for (int i = 0; i < 9; ++i) {
    int a[10] = {};
    for (int j = 0; j < 9; ++j) {
      cin >> map[i][j];
      a[j] = map[i][j];
    }
    if(!checkArray(a)){
      cout << "NO";
      return 0;
    }
  }

  for (int i = 0; i < 9; ++i) {
    int b[10] = {};
    for (int j = 0; j < 9; ++j) {
      b[j] = map[j][i];
    }
    if(!checkArray(b)){
      cout << "NO";
      return 0;
    }
  }

  for (int i = 0; i < 9; i=i+3) {
    int c[10] = {};
    for (int j = 0; j < 9; j=j+3) {
      c[0] = map[i][j];
      c[1] = map[i+1][j];
      c[2] = map[i+2][j];
      c[3] = map[i][j+1];
      c[4] = map[i][j+2];
      c[5] = map[i+1][j+1];
      c[6] = map[i+1][j+2];
      c[7] = map[i+2][j+1];
      c[8] = map[i+2][j+2];

      if(!checkArray(c)){
        cout << "NO";
        return 0;
      }
    }
  }
  cout << "YES";
  return 0;
}