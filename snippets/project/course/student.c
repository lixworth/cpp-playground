#include "course.h"

void addStudentCourse() {
    int count = 0;
    FILE *fp = fopen("database.dat", "rb");

    if (fp != NULL) {
        while (fread(&database[count], sizeof(DATABASE), 1, fp) == 1) { count++; }
        fclose(fp);
    }

    int n;
    printf("输入要添加的选课记录数量: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        int stu_id, course_id;
        printf("\n请输入第%d条记录（格式: 学号 课程编号）: ", i + 1);
        scanf("%d %d", &stu_id, &course_id);

        int total_score = 0;
        for (int j = 0; j < count; ++j) {
            if (database[j].stu_id == stu_id) {
                for (int k = 0; k < countCourse(); ++k) {
                    if (courses[k].id == database[j].course_id) {
                        total_score += courses[k].score;
                        break;
                    }
                }
            }
        }
        printf("当前学号 %d 已选课程学分总计: %d 学分\n", stu_id, total_score);


        // 检查课程是否存在
        int courseFound = 0;
        for (int j = 0; j < countCourse(); ++j) {
            if (courses[j].id == course_id) {
                courseFound = 1;
                break;
            }
        }

        if (!courseFound) {
            printf("错误：课程编号 %d 不存在，跳过该记录！\n", course_id);
            continue;
        }

        // 检查是否已经选过这门课
        int duplicate = 0;
        for (int j = 0; j < count; ++j) {
            if (database[j].stu_id == stu_id && database[j].course_id == course_id) {
                duplicate = 1;
                break;
            }
        }

        if (duplicate) {
            printf("警告：学号 %d 已经选过课程编号 %d，跳过该记录！\n", stu_id, course_id);
            continue;
        }

        database[count].stu_id = stu_id;
        database[count].course_id = course_id;
        count++;
        printf("添加成功: 学号 %d -> 课程编号 %d\n", stu_id, course_id);
    }

    fp = fopen("database.dat", "wb");
    if (fp == NULL) {
        printf("错误：无法保存选课记录到文件！\n");
        return;
    }

    for (int i = 0; i < count; ++i) { fwrite(&database[i], sizeof(DATABASE), 1, fp); }

    fclose(fp);
    printf("选课记录保存成功。\n");
}

void queryStudentsByCourse() {
    int n = countCourse();
    printf("当前一共 %d 条课程数据\n\n", n);
    for (int i = 0; i < n; ++i) {
        printf("课程编号: %d\t", courses[i].id);
        printf("课程名称: %s\n", courses[i].name);
    }

    printf("\n");
    int course_id;
    int found = 0;
    int total = 0;

    FILE *fp = fopen("database.dat", "rb");
    if (fp == NULL) {
        printf("无法打开选课记录文件。\n");
        return;
    }

    n = 0;
    while (fread(&database[n], sizeof(DATABASE), 1, fp) == 1) { n++; }
    fclose(fp);

    printf("请输入要查询的课程编号: ");
    scanf("%d", &course_id);

    int exists = 0;
    for (int i = 0; i < countCourse(); ++i) {
        if (courses[i].id == course_id) {
            exists = 1;
            printf("\n课程编号: %d\n课程名称: %s\n", courses[i].id, courses[i].name);
            break;
        }
    }
    if (!exists) {
        printf("课程编号 %d 不存在！\n", course_id);
        return;
    }

    printf("\n选修该课程的学生学号如下：\n");
    printf("--------------------------\n");

    for (int i = 0; i < n; ++i) {
        if (database[i].course_id == course_id) {
            printf("学号: %d\n", database[i].stu_id);
            found = 1;
            total++;
        }
    }

    if (!found) {
        printf("暂无学生选修该课程。\n");
    } else {
        printf("--------------------------\n共 %d 位学生选修该课程。\n", total);
    }
}
