//
// Created by Worth Lix on 2023/11/26 19:13.
//
/*
第一次考核项目
制作一个万年历
有如下功能：
1.查询某年某月某日的日期是周几，该年是否为闰年
2.输入年份，输出这一年的日历，要求能够单列输出和双列输出
3.需要一个菜单选择功能
4.年份数据范围在公元后
5.一个防报错功能，用户输出错误信息时能够提醒用户并重新输入
6.可以自行添加细节
*/
#include <cstdio>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

#define INFO (std::cout << RESET)
#define WARN (std::cout << YELLOW)
#define ERROR (std::cout << RED)
#define SUCCESS (std::cout << GREEN)
#define LOG_CLEAR (std::cout << "\033c")

vector<string> stringStream;

int get_week(int y, int m, int d) {
  if (m == 1 || m == 2) {
    m += 12;
    y--;
  }
  return ((d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7) +
         1;
}
int check_leap_year(int year) {
  return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}
int get_month_days_count(int year, int month) {
  // 1 3 5 7 8 10 12
  if (month == 2) {
    if (check_leap_year(year)) {
      return 29;
    } else {
      return 28;
    }
  }
  int day31[] = {1, 3, 5, 7, 8, 10, 12};
  for (int i = 0; i <= 6; ++i) {
    if (day31[i] == month) {
      return 31;
    }
  }
  return 30;
}

void menu() {
  LOG_CLEAR;
  time_t now = time(0);
  struct tm *local = localtime(&now);

  printf("现在的时间是: %d/%02d/%02d %02d:%02d:%02d\n\n菜单:\n",
         1900 + local->tm_year, 1 + local->tm_mon, local->tm_mday,
         local->tm_hour, local->tm_min, local->tm_sec);
  WARN << "1.查询对应年份的日历" << endl;
  WARN << "2.查询对应日期的星期" << endl;
  WARN << "3.查询对应年份是否为闰年" << endl;
  WARN << "4.退出" << endl;

  INFO << endl << "请输入菜单编号(1-4): ";
}

void query_year() {
  cout << "请输入要查询的年份:" << endl;
  int query;
  cin >> query;
  LOG_CLEAR;

  cout << "请选择想要输出的日历格式:" << endl;
  cout << "1.竖向输出:" << endl;
  cout << "2.2*6格式横向输出:" << endl;

  int input;
  cin >> input;
  string cache;

  string echo_month[100][100] = {};
  int echo_month_line;

  switch (input) {
  case 1:
    LOG_CLEAR;
    if (query == 1582) {
      ERROR << "不支持该年份的查询! 震惊派蒙一整年.jpg" << endl;
      break;
    }
    SUCCESS << "====================== " << query
            << "年 ======================" << endl;
    for (int i = 1; i <= 12; ++i) {
      cout << RED << i << "月" << endl;
      cout << RESET << "周日\t周一\t周二\t周三\t周四\t周五\t周六" << endl;
      int start = get_week(query, i, 1);
      if (start < 7) {
        for (int j = 0; j < start; ++j) {
          cout << "\t";
        }
      }
      for (int j = 1; j <= get_month_days_count(query, i); ++j) {
        printf("%02d\t", j);
        if (get_week(query, i, j) == 6) {
          printf("\n");
        }
      }
      printf("\n\n");
    }
    break;
  case 2:
    LOG_CLEAR;
    if (query == 1582) {
      ERROR << "不支持该年份的查询! 震惊派蒙一整年.jpg" << endl;
      break;
    }
    SUCCESS << "====================== " << query
            << "年 ======================" << endl;
    for (int i = 1; i < 12; i = i + 2) {
      cache += RED + to_string(i) + "月" + "\t\t\t\t\t\t\t\t" +
               to_string(i + 1) + "月";
      stringStream.push_back(cache);
      cache.clear();
      cache = cache + RESET + "周日\t周一\t周二\t周三\t周四\t周五\t周六" +
              "\t\t周日\t周一\t周二\t周三\t周四\t周五\t周六";
      stringStream.push_back(cache);
      cache.clear();
      int start = get_week(query, i, 1);
      if (start < 7) {
        for (int j = 0; j < start; ++j) {
          cache += "\t";
        }
      }
      echo_month_line = 0;
      for (int j = 1; j <= get_month_days_count(query, i); ++j) {
        if (j < 10) {
          cache += to_string(0) + to_string(j) + "\t";
        } else {
          cache += to_string(j) + "\t";
        }
        if (get_week(query, i, j) == 6) {
          echo_month[i][echo_month_line] = cache;
          cache.clear();
          echo_month_line++;
        }
        if (j == get_month_days_count(query, i)) {
          int week = get_week(query, i, j);
          week = week == 7 ? 0 : week;
          for (int k = 0; k < 7 - week; ++k) {
            if (k == 7 - week - 1) {
              cache + " ";
              continue;
            }
            cache += "  \t";
          }
          echo_month[i][echo_month_line] = cache;
          cache.clear();
        }
      }
      echo_month_line = 0;
      start = get_week(query, i + 1, 1);
      if (start < 7) {
        for (int j = 0; j < start; ++j) {
          cache += "\t";
        }
      }
      for (int j = 1; j <= get_month_days_count(query, i + 1); ++j) {
        if (j < 10) {
          cache += to_string(0) + to_string(j) + "\t";
        } else {
          cache += to_string(j) + "\t";
        }
        if (get_week(query, i + 1, j) == 6 ||
            j == get_month_days_count(query, i + 1)) {
          echo_month[i + 1][echo_month_line] = cache;
          cache.clear();
          echo_month_line++;
        }
      }
      cache.clear();

      for (int j = 0; j < 6; ++j) {
        if (echo_month[i][j] == "") {
          cache = "  \t  \t  \t  \t  \t  \t  \t\t" + echo_month[i + 1][j];
        } else {
          cache = echo_month[i][j] + "\t" + echo_month[i + 1][j];
        }

        stringStream.push_back(cache);

        cache.clear();
      }
      stringStream.push_back("\n");
    }
    for (unsigned int i = 0; i < stringStream.size(); ++i) {
      cout << stringStream[i] << endl;
    }
    stringStream.clear();
    break;
  default:
    cout << 123 << endl;
    break;
  }
}
void query_week() {
  cout << "请输入要查询的日期: (年月日才用空格间隔)" << endl;
  int y, m, d;
  cin >> y >> m >> d;
  if (y == 1582) {
    ERROR << "不支持该年份的查询! 震惊派蒙一整年.jpg" << endl;
  } else {
    int week = get_week(y, m, d);

    switch (week) {
    case 1:
      SUCCESS << "周一" << endl;
      break;
    case 2:
      SUCCESS << "周二" << endl;
      break;
    case 3:
      SUCCESS << "周三" << endl;
      break;
    case 4:
      SUCCESS << "周四" << endl;
      break;
    case 5:
      SUCCESS << "周五" << endl;
      break;
    case 6:
      SUCCESS << "周六" << endl;
      break;
    case 7:
      SUCCESS << "周日" << endl;
      break;
    default:
      break;
    }
  }
}
void query_leap_year() {
  cout << "请输入要查询的年份:" << endl;
  int year;
  cin >> year;

  if (check_leap_year(year)) {
    SUCCESS << "闰年" << endl;
  } else {
    SUCCESS << "平年" << endl;
  }
}

int main() {
  int run = 1;
  while (run) {
    menu();
    int command;
    cin >> command;

    switch (command) {
    case 1:
      LOG_CLEAR;
      query_year();
      system("pause");
      break;
    case 2:
      LOG_CLEAR;
      query_week();
      system("pause");
      break;
    case 3:
      LOG_CLEAR;
      query_leap_year();
      system("pause");
      break;
    case 4:
      run = 0;
      break;
    default:
      ERROR << "菜单错误: 后面的区域请以后再探索吧!" << endl;
      system("pause");
      break;
    }
  }
  return 0;
}
