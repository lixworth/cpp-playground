# 数据结构与算法 CPP

参考教程（强推前俩者，后者请结合参考）
* https://www.bilibili.com/video/BV13W4y127Ey/
* https://www.hello-algo.com/chapter_data_structure/ 
* https://dsa.cs.tsinghua.edu.cn/~deng/ds/dsacpp/
* https://www.itbaima.cn/document/8a046ps2e4w6k4py
* 数据结构与算法（C语言版）清华大学出版社 霍利、董靓瑜、郑巍、李静

## 绪论
### 概括分类
* 线性数据结构（**一对一**）：数组(Array)、链表(Linked List)、栈(Stack)、队列(Queue)、哈希表/散列表(Hash)，元素之间是一对一的顺序关系。
* 非线性数据结构：树(Tree)、堆(Heap)、图(Graph)、哈希表。
  * 树形结构（**一对多**）：树、堆、哈希表，元素之间是一对多的关系。
  * 网状结构（**多对多**）：图，元素之间是多对多的关系。

### 复杂度分析

<img src="//image.itbaima.cn/markdown/2022/07/09/Tr6jI5uPzy2NeDd.png" alt="o"/>
### 二分搜索 `binary_search.cpp`
[https://www.itbaima.cn/document/8a046ps2e4w6k4py](https://www.itbaima.cn/document/8a046ps2e4w6k4py)

## 线性表 LinearList
* 顺序表 SequenceList `sequence_list.c`
  * 插入、删除 需要向前或者向后操作 时间复杂度 O(n)
  * 获取元素直接下标访问 O(1)
* 单链表 LinkedList `linked_list.c`
  * 插入、删除 需要从头循环寻找 O(n) 但是优于 顺序表
  * 获取元素需要从头顺序访问 O(n) 不支持随机访问
