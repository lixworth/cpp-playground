//
// Created by Worth Lix on 2024/3/2.
//
// 二分搜索 BinarySearch
#include <iostream>

using namespace std;

int BinarySearch(int *num, int left, int right,int target) {
    if(left > right) return -1;
    int mid = (left + right)/2;
    if(num[mid] == target) return mid;
    if(num[mid] > target){ // 在左边
        return BinarySearch(num,left,right-1,target);
    }else{
        return BinarySearch(num,left+1,right,target);
    }
}

int main() {
    int arr[] = {-1,0,3,5,9,12}, target = 9;
    cout << BinarySearch(arr, 0, 10, target) << endl;
}

// https://leetcode.cn/problems/binary-search/
int search(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] > target) { // 在左边
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}
