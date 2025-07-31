#include "course.h"

void insertCourse() {
    int k = 0;
    int count = countCourse();

    printf("\n输入要添加的课程数量(1-%d):  ", N - count);
    scanf("%d", &k);

    if (count + k > N) {
        printf("错误: 不能超过最大课程数量 %d!\n", N);
        return;
    }

    for (int i = 0; i < k; ++i) {
        printf("\n请输入第%d条信息（课程编号 课程名称 课程性质 总学时 授课学时 实验或上机学时 学分 开课学期）\n",
               count + i + 1);
        scanf("%d %s %s %d %d %d %d %s", &courses[count + i].id, courses[count + i].name, courses[count + i].type,
              &courses[count + i].time, &courses[count + i].class_time, &courses[count + i].lab_time,
              &courses[count + i].score, courses[count + i].term);
    }

    FILE *fp = fopen("courses.dat", "wb");

    for (int i = 0; i < count + k; i++) { fwrite(&courses[i], sizeof(COURSES), 1, fp); }

    fclose(fp);
    printf("保存成功\n");
}

void queryCoursesList() {
    int n = countCourse();
    printf("当前一共 %d 条课程数据\n\n", n);
    for (int i = 0; i < n; ++i) {
        printf("课程编号: %d ", courses[i].id);
        printf("课程名称: %s \n", courses[i].name);
        printf("课程性质: %s ", courses[i].type);
        printf("总学时: %d ", courses[i].time);
        printf("授课学时: %d \n", courses[i].class_time);
        printf("实验或上机学时: %d ", courses[i].lab_time);
        printf("学分: %d ", courses[i].score);
        printf("开课学期: %s\n-------------\n", courses[i].term);
    }
}

void deleteCourse() {
    int n = countCourse();
    int k = 0;
    printf("当前一共 %d 条课程数据\n\n", n);
    for (int i = 0; i < n; ++i) {
        printf("课程编号: %d\t", courses[i].id);
        printf("课程名称: %s\n", courses[i].name);
    }

    printf("\n输入要要删除的课程数量(1-%d): ", n);
    scanf("%d", &k);
    for (int i = 0; i < k; ++i) {
        int del_id;
        printf("\n请输入第%d个要删除的课程编号: ", i + 1);
        scanf("%d", &del_id);

        int found = 0;
        for (int j = 0; j < n; ++j) {
            if (courses[j].id == del_id) {
                for (int m = j; m < n - 1; ++m) { courses[m] = courses[m + 1]; }
                n--;
                found = 1;
                printf("课程编号为 %d 的课程已删除。\n", del_id);
                break;
            }
        }

        if (!found) {
            printf("未找到课程编号为 %d 的课程，跳过该项。\n", del_id);
        }
    }

    FILE *fp = fopen("courses.dat", "wb");
    if (fp == NULL) {
        printf("错误: 无法打开文件以保存更改！\n");
        return;
    }

    for (int i = 0; i < n; ++i) { fwrite(&courses[i], sizeof(COURSES), 1, fp); }

    fclose(fp);

    queryCoursesList();
}
