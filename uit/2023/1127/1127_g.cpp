//
// Created by Worth Lix on 2023/11/27 20:30.
//
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int m,m2;
  double result = 1;
  cin >> m;
  int cheng = 0;
  int chu = 0;

  for (int i = 0; i < m; ++i) {
    int op,x;
    cin >> op >> x;
    if(op == 1){
      cheng+=x;
    }else{
      chu+=x;
    }
  }

  cin >> m2;
  int cheng2 =0;
  int chu2 = 0;
  for (int i = 0; i < m2; ++i) {
    int op,x;
    cin >> op >> x;
    if(op == 1){
      cheng2+=x;
    }else{
      chu2+=x;
    }
  }

  if(cheng/chu == cheng2/chu2){
    cout << "YES";
  }else{
    cout << "NO";
  }

  return 0;
}