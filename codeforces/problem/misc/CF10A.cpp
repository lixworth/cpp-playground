// Problem: A. Power Consumption Calculation
// Contest: Codeforces - Codeforces Beta Round 10
// URL: https://codeforces.com/problemset/problem/10/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Created by Worth Lix on 2023-12-04 19:58:10
//
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>

using namespace std;

int map[100][3] = {};
int main(){
  int n,p1,p2,p3,t1,t2;

  cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;

  for (int i = 0; i < n; ++i) {
    cin >> map[i][0] >> map[i][1];
  }

  int power = 0;

  for (int i = 0; i < n; ++i) {
    power += (map[i][1] - map[i][0]) * p1;

    if (i != n - 1) {
      int test = map[i + 1][0] - map[i][1];
      if (test <= t1) {
        power += test * p1;
      } else {
        power += t1 * p1;
        if (test <= t1 + t2) {
          power += (test - t1) * p2;
        } else {
          power += t2 * p2;
          power += (test - t1 - t2) * p3;
        }
      }
    }
  }

  cout << power << endl;
  return 0;
}