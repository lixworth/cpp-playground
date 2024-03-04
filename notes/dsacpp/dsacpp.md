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

## 线性表(LinearList)
* 顺序表 SequenceList `sequence_list.c`
  * 插入、删除 需要向前或者向后操作 时间复杂度 O(n)
  * 获取元素直接下标访问 O(1)
* 单链表 LinkedList `linked_list.c`
  * 插入、删除 需要从头循环寻找 O(n) 但是优于 顺序表，因为顺序表扩容是需要拷贝的
  * 获取元素需要从头顺序访问 O(n) 不支持随机访问
* 双向链表和循环链表
  * 双向链表：让每个节点 存储**前后俩个节点**的指针 开头和末尾分别都只含有一个节点指针
  * 循环链表：指的是单向链表或者双向链表的头尾节点相互链接
* 优缺点
  * 顺序访问相邻结点更灵活，随机访问顺序表更优

## 栈(Stack) 与 队列(Queue) 操作受限的特殊线性表
* 栈/堆栈/Stack 是一种遵循先入后出逻辑的线性数据结构。
* 队列/Queue 是一种遵循先入先出规则的线性数据结构。顾名思义，队列模拟了排队现象，即新来的人不断加入队列尾部，而位于队列头部的人逐个离开。
这俩者的没有具体实现，请参考CPP STL库中的俩者。