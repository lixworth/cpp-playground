//
// Created by Worth Lix on 2023/11/28 19:06.
//
#include <iostream>
#include <cstdio>

using namespace std;

// 一坨大便
int main() {
  string input;
  cin >> input;

  int d = input.find('=');

  int result = 0;
  int start = 0;
  int x = 0;
  string w;
  int d_start = 0;
  for (int i = 0; i < input.length(); ++i) {
    if (input[i] == '=') {
      d_start = 1;
        string tmp = input.substr(start, i - start);
      if (isdigit(tmp[tmp.length() - 1])) {
        result += stoll(tmp);
      } else {
        w = tmp.substr(tmp.length() - 1, 1);
        x -= stoll(tmp.substr(0, tmp.length() - 1));
      }
      start = i + 1;
    } else if (input[i] == '+' || input[i] == '-') {
      if (i == 0) {
        start = 0;
        continue;
      }
      if (d_start) {
        if (i == d + 1) {
          continue;
        }
      }
      string tmp = input.substr(start, i - start);
      if (isdigit(tmp[tmp.length() - 1])) {
        if (i < d) {
          result += stoll(tmp);
        } else {
          result -= stoll(tmp);
        }
      } else {
        w = tmp.substr(tmp.length() - 1, 1);
        if (i < d) {
          x -= stoll(tmp.substr(0, tmp.length() - 1));
        } else {
          x += stoll(tmp.substr(0, tmp.length() - 1));
        }
      }
      start = i;
    } else if (i == input.length() - 1) {
      string tmp = input.substr(start, i - start + 1);
      if (isdigit(tmp[tmp.length() - 1])) {
        result -= stoll(tmp);
      } else {
        w = tmp.substr(tmp.length() - 1, 1);
        x += stoll(tmp.substr(0, tmp.length() - 1));
      }
    }
  }
  cout << w << "=";
  printf("%.3f", result * 1.0 / x * 1.0);
  return 0;
}