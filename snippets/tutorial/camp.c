// FreeCodeCamp
// Created by Worth Lix on 2023/10/13.
// https://www.freecodecamp.org/chinese/news/the-c-beginners-handbook/

#include <stdio.h>
#include <string.h>

#define PI 3.1415926

//void demo(char args = NULL,int agrs = 1){
//
//}
int main(){
//    char name = '!';
//    printf("Hello World%c",name);
//    printf('Hello World'); // 不可以单引号

//    double age = 0;
//    age = 37.2;
//    printf("%u",age);

//    char j = '66';
//    printf("%c\n",j);
//    j = j + 2;
//    printf("%u\n",j);

//    char d = 127; // signed char -128~127 // unsigned char 0~255
//    d = d + 10;
//    printf("%d", d); /* 4294967177 */

//    int j  = 10;
//    j += 100;
//    int a = j + 100;
//    printf("%d\n%i\n",j,a);
//
//    printf("%lu\n",sizeof(int));
//    printf("%lu\n",sizeof(char)); // n bytes
//    printf("%lu\n",sizeof(unsigned char)); // n bytes
//    printf("%zd\n",sizeof(unsigned char)); // n bytes

//    const int AGE = 1;
//    printf("%d\n",AGE);
//    printf("%f",PI);

//    int plus = 1;
//    int agr = 2;
//    plus = +agr;
//    printf("%d",plus);

//    int age = 37;
//    printf("%ld\n", sizeof(age));
//    printf("%ld", sizeof(short int ));

//    int a = 0;
//    if(a=0){
//        printf("a=1");
//    }
//    int a = 1;
//
//    while (a==1){
//        printf("Hello");
//        a=2;
//    }

//    char name[7] = "Flaviod";
//    printf("%s",name);
    // string h
    /*
strcpy()：将一个字符串复制到另一个字符串
strcat()：将一个字符串追加到另一个字符串
strcmp()：比较两个字符串是否相等
strncmp()：比较两个字符串的前 n 个字符
strlen()：计算字符串的长度
     */
//
//    int age = 19;
//
//    printf("%p",&age);
//
//    printf("\n%d",strlen(name));
//
//    printf("\n|%010d|",age);

//    int age = 37;
//
//    int *address = &age;
//    *address = 10;
//    printf("%d", *address); /* 37 */

//    int prices[3] = { 5, 4, 3 };
//    printf("%u", *prices); /* 5 */
//    printf("%u",*(prices + 1)); /* 4 */


//int TRUE = 1;

//    int x,y;
//
//    scanf("%d%d",&x,&y);
//    printf("%d|%d",x,y);

//  printf("Hello World!\n");
//  printf("%f\n", 7/3.0);
//


//  int test1 = 1;
//  if(test1 == 1) printf("1"); else printf("demo");

//  int demo = 0;

//scanf("%i",&demo);
//  printf("%i",demo);

    // array
//  int num = 5;

//  scanf("%i",&num);

//    int arr[5] = {2,3,4,5,6};
//
//  arr[0] = 1;
//  arr[1] = 2;
////
//  for(int i = 0;i<3;i++){
//      printf("%\n",arr[i]);
//  }

//    printf("%lu",sizeof(arr));

//    int test = 1,result;
//
//    printf("%i\n",test);
//    result = test++;
//    printf("%i\n",test);
//    printf("%i\n",result);
//    result = ++test;
//    printf("%i\n",result);
//    printf("%i\n",test);

//    int map[] = {1,2,3};
//
//    // 交换 元素 0 和 1
//
//    int tmp = 0;
//    tmp = map[1];
//    map[1] = map[0]; // 我的意思是这里元素1就没了 下面把元素0改成1就没数据了 所以得拿个tmp
//    map[0] = tmp;
//
//    for (int i = 0; i < 3; ++i) {
//        printf("%d",map[i]);
//    }

//    int a = 0;
//    int b = 20;
//    printf("%d",!a);

    // 冒泡排序
//    int map[7] = {3,4,2,1,5,6,7};
//
//    for (int i = 0; i < 7; ++i) {
//        printf("%d\n",map[i]);
//    }
//
//    for(int i = 0; i<6; i++) {
//        for (int j = 0; j < 5; j++) {
//            int tmp = 0;
//            if (map[j] > map[j + 1]) {
//                tmp = map[j + 1];
//                map[j + 1] = map[j];
//                map[j] = tmp;
//            }
//            tmp = 0;
//        }
//    }
//
//    printf("handled\n");
//    for (int i = 0; i < 7; ++i) {
//        printf("%d\n",map[i]);
//    }
//    int x = 0;
//    if(x++)
//        printf("1");
//    printf("2");
    return 0;
}