//#include <stdio.h>
//const int MOD=1e9+7;
//using namespace std;
//int n, m;
//const int mod = 1e9 + 7;
//const int MAX = 1001;
//int dp[MAX][MAX];
////直接计算某个最大的值，然后调用
//
//void Count()
//{
//
//    for (int i = 0; i < MAX; i++) {
//        for (int j = 0; j<=i ; j++) {
//            if(j > i - j) dp[i][j] = dp[i][i - j];//不用重复计算
//            else if(j==0) dp[i][j] = 1;
//            else if  (j == 1) dp[i][j] =i;//对于（j==1），dp[i][j]的值为i
//            else dp[i][j]=(dp[i - 1][j] + dp[i - 1][j - 1]) % mod;
//        }
//    }
//}
//
//int main() {
//    int n;
//    Count();
//    while (scanf("%d",&n) != EOF) {
//        for (int i = 0; i < n; ++i) {
//            printf("%lld ",dp[n-1][i]);
//        }
//        printf("\n");
//    }
//}



