#include <cstdio>

int main(){
    int handle[] = {};
    int number;
    scanf("%d",&number);
    printf("12");
    int index = 0;
    int stop = 0;
    while (!stop){
        int run = 0;
        for (int i = 0; i <= index; ++i) {
            printf("%d|",index++);
            if(handle[i] >= 3){
                printf("%d",index++);
                handle[index++] = handle[i]-1;
                printf("%d",index++);
                handle[index++] = handle[i]-2;
                handle[i] = 0;
                run = 1;
            }
        }
        if(!run){
            stop = 1;
        }
    }
    printf("finished");
    for (int i = 0; i <= index; ++i) {
        printf("%d",handle[i]);
    }
    return 0;
}