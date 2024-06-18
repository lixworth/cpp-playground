//
// Created by Worth Lix on 2023/12/5 22:53.
//
#include <iostream>
#include <string>

using namespace std;

char map[10] = {'a','b','c','d','e','f','g','h'};

int main() {
  int t;
  cin >> t;
  while (t--) {
    string input;
    cin >> input;

    for (int i = 0; i < 8; ++i) {
      if (map[i] != input[0]) {
        cout << map[i] << input[1] << endl;
      }
    }

    for (int i = 1; i < 9; ++i) {
      if ((input[0] + to_string(i)) != input) {
        cout << input[0] << i << endl;
      }
    }
  }
  return 0;
}