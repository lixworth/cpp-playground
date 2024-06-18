//
// Created by Worth Lix on 2023/11/26 16:11.
//
#include <iostream>

using namespace std;


int main() {
  int n;
  cin >> n;
  int max = 1;
  int map_index[100000] = {};
  int map[100000][100000] = {};

  for (int i = 0; i < n; ++i) {
    int u,v;
    cin >> u >> v;
    map[u][map_index[u]] = v;
    map_index[u]++;
//    map[v][++map_index[v]] = u;
    if(u > max){
      max = u;
    }
    if(v > max){
      max = v;
    }
  }
  for (int i = 1; i < max; ++i) {
    for (int j = 0; j < map_index[i]; ++j) {
      cout << map[i][j] << endl;
    }
  }
  return 0;
}