//
// Created by Worth Lix on 2023/11/8 20:17.
//
#include <stdio.h>

// Tips 一坨大便 没有任何参考价值
int main() {
  int n;
  scanf("%d\n", &n);

  int result = 0;
  int speed = 0;
  int jump = 0;
  int handle[100000] = {};
  int handle_index = 0;
  int hearts[100000] = {};

  int need_input_heart = 0;
  int input;
  int need_start_handle = 0;
  while (scanf("%d", &input) != EOF) {
    if (need_start_handle) {
      // handler
      for (int i = handle_index - 1; i >= 0; --i) {
        if (handle[i] == 1) {
          result += hearts[i];
        } else if (handle[i] == 2) {
          result += (i+1) * hearts[i];
        } else if (handle[i] == 3) {
          break;
        } else if (handle[i] == 4) {
          i--;
        }
      }
      need_start_handle = 0;
      handle_index = 0;
    }
    if (need_input_heart) {
      hearts[handle_index - 1] = input;
      need_input_heart = 0;
      continue;
    }
    if (!jump) {
      jump = 1;
      if (speed == 0) {
        speed = input;
        continue;
      }
      if (input < speed) {
        need_start_handle = 1;
      }
      speed = input;
    } else {
      handle[handle_index] = input;
      if (input == 1 || input == 2) {
        need_input_heart = 1;
      }
      handle_index++;
      jump = 0;
    }
  }
  // 结束了但是最后一轮貌似话没有处理呢
  for (int i = handle_index - 1; i >= 0; --i) {
    if (handle[i] == 1) {
      result += hearts[i];
    } else if (handle[i] == 2) {
      result += (i+1) * hearts[i];
    } else if (handle[i] == 3) {
      break;
    } else if (handle[i] == 4) {
      i--;
    }
  }
  printf("%d", result);
  return 0;
}