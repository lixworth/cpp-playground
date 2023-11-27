//
// Created by Worth Lix on 2023/11/26 15:48.
//
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  string input;
  cin >> input;

  int count = 0;
  for (int i = 0; i < n-2; ++i) {
    for (int j = i+1; j < n; ++j) {
      if(input[i] == input[j]){
        continue;
      }
      for (int k = j+1; k < n; ++k) {
        if(input[j] == input[k]){
          count++;
        }
      }
    }
  }

  cout << count << endl;
  return 0;
}