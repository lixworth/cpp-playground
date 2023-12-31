# C++ 语言基础

## 语法

### 变量

> 字节 B = Byte,位 b = bit,1 Byte = 8 bit,8 Mb = 1 MB

* bool 布尔 true/false 1byte
* char 字符 1byte
  * 一个字符用单引号 `char 'a',' ','\n';` 
* int 整型 4byte
  * -2^31~2^31-1
  * -2147483648 ~ 2147483647
* float 单精度浮点数 4byte
  * 有效数字位数 6-7位
  * 科学计数法 1.235*10^2 = 1.235e2
* double 双精度浮点数 8byte
  * 有效数字位数 15-16位
* long long ll整型 8byte
  * -2^63~2^63-1
* long double
  * 有效数字位数 18-19位

* 变量声明 
  * `int a, b = 2, c = b;`
  * `float d = 1.5, f = 1.235e2;`
  * `char j = 'a',k = 'b';`
  * long long 类型的常量 `long long l = 10000000000ll`; 赋值的时候，如果大于2^31-1，那么后面需要加上ll/LL
  * 