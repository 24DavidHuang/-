//#include <stdio.h>
//const int MAX=101;
//int dp[MAX];
////dp[i] 存储的是和为 i 的本质不同解的数量
////对于和为 j 的情况，我们通过累加 dp[j - i] 来考虑使用数字 i 后的解的数量。
//void catalanNumber(int n) {
//    dp[0]=1;
//    for (int i = 1; i < MAX; ++i) {
//        dp[i]=0;
//    }
//
//    for (int i = 1; i < MAX; ++i) {
//        for (int j = i; j < MAX; ++j) {
//            dp[j] += dp[j - i];
//        }
//    }
//}
//
//int main() {
//    int n;
//    catalanNumber(MAX);
//    while (~scanf("%d", &n)) {
//        printf("%d\n", dp[n]);
//    }
//}
//
