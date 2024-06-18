//
// Created by Worth Lix on 2023/11/27 19:14.
//
#include <algorithm>
#include <iostream>
using namespace std;

int check(int i,int j,int k,int map[6]) {
  int other[4] = {};
  int other_index = 0;
  for (int l = 0; l < 6; ++l) {
    if(l != i && l != j && l != k){
      other[other_index] = map[l];
      other_index++;
    }
  }
  return ((map[i] + map[j]) > map[k] && (map[i] + map[k]) > map[j] && (map[j] + map[k]) > map[i])
         && ((other[0] + other[1]) > other[2] && (other[0] + other[2]) > other[1] && (other[2] + other[1]) > other[0]);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int map[6] = {};
    for (int i = 0; i < 6; ++i) {
      cin >> map[i];
    }
    //    sort(map, map + 6);
    int result = 0;
    for (int i = 0; i < 6; ++i) {
      for (int j = 0; j < 6; ++j) {
        if (i == j)
          continue;
        for (int k = 0; k < 6; ++k) {
          if (i == k || j == k)
            continue;
          if (check(i, j, k, map)) {
            result = 1;
            break;
          }
        }
      }
    }

    if (result) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}