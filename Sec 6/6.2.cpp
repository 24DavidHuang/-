//#include <stdio.h>
//#include <stdlib.h>
//int longest_decreasing_subsequence(int *arr, int n) {
//    // 定义dp数组，dp[i]表示以第i个元素为结尾的最长递减子序列的长度
//    int *dp = (int*)malloc(n * sizeof(int));
//    for (int i = 0; i < n; i++) {
//        dp[i] = 1;
//    }
//    // 从前往后遍历整数序列
//    for (int i = 0; i < n; i++) {
//        // 每个元素，找出它之前所有比它大的元素
//        for (int j = 0; j < i; j++) {
//            // 如果找到比它大的元素，更新dp[i]为它们的dp值加1的最大值
//            if (arr[j] >= arr[i]) {
//                if (dp[j] + 1 > dp[i]) {
//                    dp[i] = dp[j] + 1;
//                }
//            }
//        }
//    }
//    // dp数组中的最大值就是最长递减子序列的长度
//    int max_len = 0;
//    for (int i = 0; i < n; i++) {
//        if (dp[i] > max_len) {
//            max_len = dp[i];
//        }
//    }
//    return max_len;
//}
//int main() {
//    int n;
//    while (scanf("%d", &n)!=EOF) {
//        int arr[n];
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &arr[i]);
//        }
//        int result = longest_decreasing_subsequence(arr, n);
//        printf("%d\n", result);
//    }
//}



//#include<stdio.h>
//#include<functional>
//#include<algorithm>
//using namespace std;
//const int MAX=1010;
//int n, num[MAX],dp[MAX], longest;
//int FindLongest(int a[], int n){
//    longest = -1;
//    for(int i = 0; i < n; i ++){
//        int dep = 0;
//        if(dp[longest]>a[i]||longest==-1) { dep = ++longest; }
//        else {
//            dep = upper_bound(dp, dp + longest + 1, a[i], greater<int>()) - dp;
//        }
//        dp[dep] = a[i];
//    }
//    return 1+longest;
//}
//int main()
//{
//    while(scanf("%d", &n) != EOF){
//        for(int i = 0; i < n; i ++)
//            scanf("%d", &num[i]);
//        printf("%d\n", FindLongest(num, n));
//    }
//}