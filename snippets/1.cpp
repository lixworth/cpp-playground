#include <bits/stdc++.h>


// void reverse_string(char *str) {
//     char tmp[6];
//     for (int i = 0; i < strlen(str); ++i) { tmp[strlen(str) - 1 - i] = str[i]; }
//     *str = *tmp;
// }

void find_min_max(int *arr, int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 0; i < size; ++i) {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}


int main() {
    int arr[10] = {10, 2, 3, 4, 5, 6, 7, 8, 1, 1};
    int min = 0, max = 0;
    find_min_max(arr, 10, &min, &max);

    cout << min << " " << max << endl;
}
/ / 1 2 3 4,
