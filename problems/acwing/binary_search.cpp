//
// Created by Worth Lix on 2024/3/4.
//
#include <vector>

using namespace std;

// 二分搜索
int BinarySearch(std::vector<int> nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        int mid = (left + right) >> 1;
        if (nums[mid] == target) return mid;
        if (nums[mid] > target) { // 在左边
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}
