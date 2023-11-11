//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//typedef long long ll;
//const int MAXN=310;
//ll num[MAXN], n;
//ll dp[MAXN][MAXN];
//int main(){
//    while(scanf("%d", &n) != EOF){
//        for(int i = 0; i <= n; i ++)
//            scanf("%d", &num[i]);
//        for(int i = 1; i <= n; i ++)
//            dp[i][i] = 0;
//        for(int length=2; length <= n; length++){
//            for(int l = 1; l<= n - length + 1; l ++){
//                int r = l + length - 1;
//                dp[l][r] = dp[l+1][r]+num[l - 1]*num[l]*num[r];//dp[l+1][r] + num[l-1]*num[l]*num[r] 是一种最简单的划分，设为基，方便后面比较min
//                for(int i = l + 1; i < r; i ++)
//                    dp[l][r] =min(dp[l][r], dp[l][i]+dp[i + 1][r]+num[l - 1]*num[i]*num[r]);
//            }
//        }
//        printf("%lld\n", dp[1][n]);
//    }
//}
