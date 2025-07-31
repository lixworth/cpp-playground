#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10000

typedef struct courses_type {
    int id; // 课程编号
    char name[20]; // 课程名称
    char type[10]; // 课程性质
    int time; // 总学时
    int class_time; // 授课学时
    int lab_time; // 实验或上机学时
    int score; // 学分
    char term[10]; // 开课学期
} COURSES;


typedef struct database_type {
    int stu_id; // 学号
    int course_id; // 课程ID
} DATABASE;

DATABASE database[N]; // 选课信息存储
COURSES courses[N]; // 课程信息存储

void sysMenu(); // 菜单

void rollBack(); // 返回
void logClear(); // 清命令行
int countCourse(); // 获取课程数量

void queryCoursesList(); // 查询课程列表
void insertCourse(); // 插入课程
void deleteCourse(); // 删除课程

void addStudentCourse(); // 添加学生选课信息
void queryStudentsByCourse(); // 查询某门课的选课学生

void queryByScore(); // 使用学分查询课程
void queryByName(); // 使用名称查询课程
