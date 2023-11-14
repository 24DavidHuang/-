//#include <stdio.h>
//#include <stdlib.h>
//typedef long long ll;
//const ll mod=1e9+7;
//int longest_decreasing_subsequence(ll *arr, int n) {
//    // 定义dp数组，dp[i]表示以第i个元素为结尾的最长递增子序列的长度
//    int *dp = (int*)malloc(n * sizeof(int));
//    for (int i = 0; i < n; i++) {
//        dp[i] = 1;
//    }
//    // 从前往后遍历整数序列
//    for (int i = 0; i < n; i++) {
//        // 每个元素，找出它之前所有比它小的元素
//        for (int j = 0; j < i; j++) {
//            // 如果找到比它小的元素，更新dp[i]为它们的dp值加1的最大值
//            if (arr[j] < arr[i]) {
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
//    int n,b;
//    while (scanf("%d %d", &n,&b)!=EOF) {
//        ll *arr = (ll*)malloc(n * sizeof(ll));
//        arr[0]=b;
//        for (int i = 1; i < n; i++) {
//            arr[i] = 1LL * (arr[i - 1] + 1) * (arr[i - 1] + 1) % mod;
//        }
//        int result = longest_decreasing_subsequence(arr, n);
//        printf("%d\n", result);
//    }
//}