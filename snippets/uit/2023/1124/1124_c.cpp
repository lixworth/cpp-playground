//
// Created by Worth Lix on 2023/11/24 19:07.
//
#include <iostream>

using namespace std;

int main() {
  int count;
  cin >> count;
  while (count--){
    string input;
    cin >> input;
    int result = input.length();
    for (int i = 1; i < input.length(); ++i) {
      if(input.at(i) == input.at(i-1)){
        result++;
      }
    }
    cout << result << endl;
  }
  return 0;
}