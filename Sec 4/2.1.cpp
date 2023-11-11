//#include <stdio.h>
//#include <stdlib.h>
//
//// 交换两个整数的值
//void swap(int *num, int *b) {
//    int temp = *num;
//    *num = *b;
//    *b = temp;
//}
//
//// 反转数组的元素
//void reverse(int arr[], int start, int end) {
//    while (start < end) {
//        swap(&arr[start], &arr[end]);
//        start++;
//        end--;
//    }
//}
//
//// 找到下一个排列
//int nextPermutation(int arr[], int n) {
//    int i = n - 2;
//    while (i >= 0 && arr[i] >= arr[i + 1]) {
//        i--;
//    }
//
//    if (i < 0) {
//        return 0; // 已经是最后一个排列
//    }
//
//    int j = n - 1;
//    while (arr[j] <= arr[i]) {
//        j--;
//    }
//
//    swap(&arr[i], &arr[j]);
//    reverse(arr, i + 1, n - 1);
//
//    return 1;
//}
//
//int main() {
//    int n;
//    while (scanf("%d", &n) == 1) {
//        int arr[n];
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &arr[i]);
//        }
//
//        // 打印第一个排列
//        for (int i = 0; i < n; i++) {
//            printf("%d", arr[i]);
//            if (i < n - 1) {
//                printf(" ");
//            }
//        }
//        printf("\n");
//
//        // 生成其他排列
//        while (nextPermutation(arr, n)) {
//            for (int i = 0; i < n; i++) {
//                printf("%d", arr[i]);
//                if (i < n - 1) {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}


