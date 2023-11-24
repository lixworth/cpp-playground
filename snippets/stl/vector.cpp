//
// Created by Worth Lix on 2023/11/23 20:55.
//
#include <vector>
#include <iostream>

using namespace std;

int main() {
  vector<int> vecTemp;

  for (int i = 0; i < 6; i++) {
    vecTemp.push_back(i);
  }

  for (int i = 0; i < vecTemp.size(); i++) {
    cout << vecTemp[i] << " "; // 输出：0 1 2 3 4 5
  }
  vecTemp.

  return 0;
}
