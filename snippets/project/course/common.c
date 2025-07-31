#include "course.h"

void rollBack() {
    printf("\n按下回车键返回上一级菜单...");
    while (getchar() != '\n')
        ;
    getchar();
    sysMenu();
}

int countCourse() {
    int count = 0;
    FILE *fp = fopen("courses.dat", "rb");

    if (fp == NULL) {
        return 0;
    }

    while (fread(&courses[count], sizeof(COURSES), 1, fp) == 1) { count++; }

    fclose(fp);
    return count;
}

void logClear() { printf("\033c"); }
