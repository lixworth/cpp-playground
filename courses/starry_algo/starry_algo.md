# StarryCoding Algo 基础课

## 00 Tips
* `scanf` `printf` 不能取消同步流
* `cin` `cout` 取消同步流情况下，会更快 
* 输入规模小于 10^5 两者相同
* `endl` 不要使用，改用 `\n`
* `defind` 宏定义 慎用 除非记得加括号
* 在全局开数组，自动初始化为0
* `for(int i = 0;i < n; ++i) cin >> a[i];` 让 输入io 与 计算 分开，提高微乎其微的效率

## 01 前缀和与差分

### 前缀和数组 
[https://www.starrycoding.com/problem/7](https://www.starrycoding.com/problem/7)

存储前n项和，然后通过不同前n项和相互加减求出所需范围（一次计算）。

### 差分数组
