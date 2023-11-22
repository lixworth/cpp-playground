//
// Created by Worth Lix on 2023/11/22 19:05.
//
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  int n;
  cin >> n;
  getchar();
  while (n--){
    int sum = 0;
    int item = 0;
    string input;
    getline(cin,input);
    stringstream ss(input);
    while(ss >> item){
      sum += item;
    }
    cout << sum << endl;
  }
  return 0;
}