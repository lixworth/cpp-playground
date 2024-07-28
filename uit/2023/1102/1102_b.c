//
// Created by Worth Lix on 2023/11/2.
//
#include <stdio.h>

int main(){
    double const PI = 3.141592653589;
    int count;
    scanf("%d\n",&count);
    for (int i = 0; i < count; ++i) {
        double r,h;
        scanf("%lf %lf\n",&r,&h);
        int c = h/(r*2); // 高度可以塞多少个
        double vc = (PI*r*r*r*c)*4/3;
        double vh = PI*r*r*h;
        printf("%.3lf\n",vh-vc); // lf
    }
    return 0;
}