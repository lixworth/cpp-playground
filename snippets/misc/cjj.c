#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int num = rand() % 3;
    switch (num) {
        case 0:
        case 1:
            printf("mai");
            break;
        case 2:
            printf("bumai");
            break;
    }
}