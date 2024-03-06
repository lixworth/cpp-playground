//
// Created by Worth Lix on 2024/3/2.
//
// https://www.itbaima.cn/document/8a046ps2e4w6k4py
// 线性表-顺序表 SeqList
#include <stdio.h>
#include <stdlib.h>

typedef int Element; // 均存储以int为类型的元素

struct SeqList {
    Element* array; // 顺序表的底层数组
    int capacity; // 容量
    int size; // 元素数量
};

typedef struct SeqList *ArrayList; // 定义一个叫 ArrayList 的结构指针

// 初始化线性表
int initSeqList(ArrayList list) {
    list->array = malloc(sizeof(Element) * 10);
    if (list->array == NULL) return 0;
    list->capacity = 10;
    list->size = 0;
    return 1;
}

// 在指定位置插入元素
int insertElement(ArrayList list,Element element,int index) {
    if (index < 0 || index > list->size + 1) return 0;
    if (list->size == list->capacity) { // 扩容
        int newCapacity = list->capacity * 2;
        Element *newArray = realloc(list->array, sizeof(Element) * newCapacity);
        if (newArray == NULL) return 0;
        list->array = newArray;
        list->capacity = newCapacity;
    }
    for (int i = list->size - 1; i > index; --i) {
        // 最后一位 list->size - 1
        // 插入位置的index
        list->array[i] = list->array[i - 1];
    }
    list->array[index] = element;
    list->size++;
    return 1;
}

// 删除指定位置的元素
int deleteElement(ArrayList list,int index) {
    if (index < 0 || index > list->size - 1) return 0;
    for (int i = index; i < list->size; ++i) {
        list->array[i] = list->array[i + 1];
    }
    list->size--;
    return 1;
}

// 获取指定位置上的元素
int getElement(ArrayList list,int index) {
    if (index < 0 || index > list->size - 1) return -1;
    return list->array[index];
}

// 获取元素的位置
int findElement(ArrayList list,Element element) {
    for (int i = 0; i < list->size; ++i) {
        if (list->array[i] == element) {
            return i;
        }
    }
    return -1;
}

// 获取表的长度
int sizeSeqList(ArrayList list) {
    return list->size + 1;
}

// 遍历表
void printSeqList(ArrayList list) {
    printf("\n");
    for (int i = 0; i < list->size; ++i) {
        printf("%d=%d\n", i, list->array[i]);
    }
    printf("\n");
}

// 在末尾插入一个元素
int addElement(ArrayList list,Element element) {
    return insertElement(list, element, sizeSeqList(list));
}

int main() {
    struct SeqList list;
    if (!initSeqList(&list)) {
        printf("顺序表创建时内存申请失败!");
        return 0;
    }
    insertElement(&list, 666, 0);
    printSeqList(&list);
    insertElement(&list, 7777, 1);
    printSeqList(&list);
    insertElement(&list, 88888, 2);
    printSeqList(&list);

    deleteElement(&list, 1);
    printSeqList(&list);

    addElement(&list, 23333);
    printSeqList(&list);

    printf("getElement#%d: %d\n", 1, getElement(&list, 1));
    printf("findElement#%d: %d\n", 88888, findElement(&list, 88888));
    printf("findElement#%d: %d\n", 7777, findElement(&list, 7777));

    return 0;
}