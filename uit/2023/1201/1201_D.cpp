//
// Created by Worth Lix on 2023/12/1 19:15.
//
#include <iostream>
#include <algorithm>

using namespace std;

int map[1000000] = {};
int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> map[i];
  }

  sort(map, map + n);

  int max_count_id = 0;
  int max_count = 0;
  int count = 0;
  int lian_map[100000] = {};
  int tmp_map[100000] = {}; // 记录每组第一个
  int tmp_map_index = 0;
  for (int i = 0; i < n; ++i) {
    if (count == 0) {
      tmp_map[tmp_map_index] = map[i];
      tmp_map_index++;
    }
    if (map[i] + 1 == map[i + 1]) {
      count++;
    } else {
      count++;
      lian_map[tmp_map_index - 1] = count;
      if (count > max_count) {
        max_count = count;
        max_count_id = tmp_map_index - 1;
      }
      count = 0;
    }
  }

  int result = 0;
  int result_l = 0;
  int result_r = 0;
  if (tmp_map[max_count_id] + lian_map[max_count_id] + 1 ==
      tmp_map[max_count_id + 1]) {
    result_l = lian_map[max_count_id] + lian_map[max_count_id + 1];
  }
  if (tmp_map[max_count_id - 1] + lian_map[max_count_id - 1] ==
      tmp_map[max_count_id] - 1) {
    result_r = lian_map[max_count_id] + lian_map[max_count_id - 1];
  }
  result = lian_map[max_count_id];

  int result_max = result_l > result_r ? result_l : result_r;

  if (result_max > result) {
    result = result_max;
  }
  if (result == n) {
    result -= 1;
  }
  cout << result << endl;
  return 0;
}