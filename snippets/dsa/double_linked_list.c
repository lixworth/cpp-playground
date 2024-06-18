//
// Created by Worth Lix on 2024/3/4.
//
// 双向链表 DoubleLinkedList
#include <stdio.h>
#include <stdlib.h>

typedef int Element;

struct ListNode {
    Element element;
    struct ListNode* next; // 指向下一个node的指针
    struct ListNode* prev; // 指向上一个node的指针
};

typedef struct ListNode* NodePrt; // 头指针

// 初始化链表
void initLinkedList(NodePrt head) {
    head->next = NULL;
    head->prev = NULL;
    head->element = -1;
}

// 拆入元素到指定位置
int insertElement(NodePrt head,Element element,int index) {
    if (index < 0) return 0;
    if (element < 0) return 0;
    if (index == 0) {
        head->element = element;
        return 1;
    }
    index--; // 因为第一个index是0 所以这边处理一下
    while (index--) {
        head = head->next;
        if (head == NULL) return 0;
    }

    NodePrt nodePrt = malloc(sizeof(struct ListNode));
    if (nodePrt == NULL) return 0; // 分配内存出错
    nodePrt->element = element;

    if(head->next == NULL){ // 后继没有节点
        nodePrt->next = NULL;
    }else{ // 有节点
        nodePrt->next = head->next;
        head->next->prev = nodePrt;
    }
    nodePrt->prev = head;
    head->next = nodePrt;
    return 1;
}

// 删除指定位置的元素
int deleteElement(NodePrt headPrt,int index) {
    if (index < 0) return 0;
    NodePrt head = headPrt;
    if (index == 0) { // 特别处理一下 index 0
        NodePrt nextPrt = head->next;
        if (nextPrt == NULL) {
            head->element = -1;
            return 0;
        }
        headPrt->element = nextPrt->element;
        headPrt->next = nextPrt->next;
        return 1;
    }
    index--; // 同样先处理 index初始0适合的问题
    while (index--) {
        head = head->next;
    }
    NodePrt deletePrt = head->next;

    if(deletePrt->next == NULL){  // 后继节点不存在
        head->next = NULL;
    }else{
        deletePrt->next->prev = head;
        head->next = deletePrt->next;
    }
    deletePrt->next = NULL;
    deletePrt->prev = NULL;
    free(deletePrt);
    return 1;
}

// 获取指定位置的元素
int getElement(NodePrt headPrt,int index) {
    if (index < 0) return -1;
    NodePrt head = headPrt;
    if (index == 0) return head->element;
    while (index--) {
        head = head->next;
    }
    return head->element;
}

// 查找元素在哪个位置
int findElement(NodePrt nodePrt,Element element) {
    NodePrt head = nodePrt;

    int index = 0;
    while (head->element != element) {
        head = head->next;
        index++;
    }
    return index;
}

// 打印链表元素
void printList(NodePrt headPrt) {
    printf("%d ", headPrt->element);
    NodePrt head = headPrt->next;
    while (head != NULL) {
        printf("%d ", head->element);
        head = head->next;
    }
    printf("\n");
}

// 获取链表长度
int LinkedListSize(NodePrt nodePrt) {
    int index = 0;
    NodePrt head = nodePrt;
    if (head->element != -1) {
        index++;
    }
    while (head->next != NULL) {
        head = head->next;
        index++;
    }
    return index;
}

int main() {
    struct ListNode head; // head
    initLinkedList(&head);

    for (int i = 0; i < 10; ++i) {
        insertElement(&head, i * 100, i);
    }

    printList(&head);
    insertElement(&head, 3, 2);
    printList(&head);
    deleteElement(&head, 0);
    printList(&head);
    deleteElement(&head, 2);
    printList(&head);

    printf("%d\n", findElement(&head, 800));
    printf("%d\n", getElement(&head, 6));
    printf("%d\n", LinkedListSize(&head));
}