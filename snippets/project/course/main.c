/**
 * 简单的学生选课系统
 * author: LixWorth<lixworth@hotmail.com>
 * 2025/4/12
 */
#include "course.h"

void sysMenu() {
    logClear();
    int n = 0;
    do {
        printf("  简单的学生选课系统\n");
        printf("*************************");
        printf("\n 1. 查看课程列表");
        printf("\n 2. 新增课程信息");
        printf("\n 3. 删除课程信息");

        printf("\n");
        printf("\n 4. 新增学生选课记录");
        printf("\n 5. 查询选某门课的学生");

        printf("\n");
        printf("\n 6. 按学分查询课程");
        printf("\n 7. 按名称查询课程");

        printf("\n");
        printf("\n 8. 保存并退出系统");
        printf("\n*************************\n");

        printf("请输入选项(1-8): [ ]\b\b");
        scanf("%d", &n);
    } while (n < 1 || n > 8);

    logClear();

    switch (n) {
        case 1:
            queryCoursesList();
            break;
        case 2:
            insertCourse();
            break;
        case 3:
            deleteCourse();
            break;
        case 4:
            addStudentCourse();
            break;
        case 5:
            queryStudentsByCourse();
            break;
        case 6:
            queryByScore();
            break;
        case 7:
            queryByName();
            break;
        case 8:
            exit(0);
        default:
            break;
    }
    rollBack();
}

int main() {
    sysMenu();
    return 0;
}
