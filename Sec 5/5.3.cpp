//#include<stdio.h>
//#include<string.h>
//using namespace std;
//typedef long long ll;
//const int MAXN = 33;
//ll dp[MAXN][MAXN];
//ll DPS(int l, int r) {
//    if (l == r) return 1;
//    // 如果已经计算过，直接返回结果
//    if (dp[l][r] != -1) return dp[l][r];
//    dp[l][r] = 0;//初始化为0
//    for (int k = l; k < r; k++) {
//        // 计算左和右子问题的乘法方案数
//        ll left = DPS(l, k);
//        ll right = DPS(k + 1, r);
//        dp[l][r] += left * right;// 更新当前区间 [l, r] 的乘法方案数
//    }
//    return dp[l][r];
//}
//
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) {
//        memset(dp, -1, sizeof(dp));
//        printf("%lld\n", DPS(0, n - 1));
//    }
//}
