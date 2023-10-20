//
// Created by Worth Lix on 2023/10/20.
//

#include <cstdio>
#include <cmath>

int main(){
    // 1-1 圆柱表面积
    const double pi = acos(-1.0); // 反cos
    double r,h,s = 0;

    printf("PI: %lf\n",pi);
    scanf("%lf %lf",&r,&h);
    s += 2*pi*(pow(r,2));
    s += 2*pi*r*h;
    printf("Area = %.3lf\n",s);
    return 0;
}