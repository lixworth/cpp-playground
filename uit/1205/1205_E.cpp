//
// Created by Worth Lix on 2023/12/5 19:03.
//
#include <iostream>
using namespace std;

int map[100000];

int main() {
  int n;
  cin >> n;
  int max = 0;
  for (int i = 0; i < n; ++i) {
    cin >> map[i];
    if(map[i] > max){
      max = map[i];
    }
  }

  int count = 0;
  for (int i = 0; i < n; ++i) {
    if(map[i] != max){
      count++;
    }
  }

  cout << count << endl;
  return 0;

}