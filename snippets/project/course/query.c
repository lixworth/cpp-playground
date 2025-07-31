#include "course.h"

void queryByScore() {
    int n = countCourse();
    if (n == 0) {
        printf("暂无课程数据。\n");
        return;
    }

    int target;
    printf("请输入要查询的学分: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < n; ++i) {
        if (courses[i].score == target) {
            printf("\n课程编号: %d\n", courses[i].id);
            printf("课程名称: %s\n", courses[i].name);
            printf("课程性质: %s\n", courses[i].type);
            printf("总学时: %d\n", courses[i].time);
            printf("授课学时: %d\n", courses[i].class_time);
            printf("实验或上机学时: %d\n", courses[i].lab_time);
            printf("学分: %d\n", courses[i].score);
            printf("开课学期: %s\n", courses[i].term);
            printf("------------------------------\n");
            found = 1;
        }
    }

    if (!found) {
        printf("没有找到学分为 %d 的课程。\n", target);
    }
}
void queryByName() {
    int n = countCourse();
    if (n == 0) {
        printf("暂无课程数据。\n");
        return;
    }

    char target[20];
    printf("请输入要查询的课程名称: ");
    scanf("%s", target);

    int found = 0;
    for (int i = 0; i < n; ++i) {
        if (strcmp(courses[i].name, target) == 0) {
            printf("\n课程编号: %d\n", courses[i].id);
            printf("课程名称: %s\n", courses[i].name);
            printf("课程性质: %s\n", courses[i].type);
            printf("总学时: %d\n", courses[i].time);
            printf("授课学时: %d\n", courses[i].class_time);
            printf("实验或上机学时: %d\n", courses[i].lab_time);
            printf("学分: %d\n", courses[i].score);
            printf("开课学期: %s\n", courses[i].term);
            printf("------------------------------\n");
            found = 1;
        }
    }

    if (!found) {
        printf("未找到课程名称为 \"%s\" 的课程。\n", target);
    }
}
