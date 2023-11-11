//#include<stdio.h>
//int num[100][100];
//int dp[100][100];
//int max(int X, int Y)
//{
//    return X > Y ? X : Y;
//}
//int main(){
//    int T;
//    scanf("%d",&T);
//    for (int t = 0; t < T; ++t) {
//        int n;
//        scanf("%d",&n);
//        for (int i = 0; i < n; ++i) {
//            int b=0;
//            while (b<=i){
//                scanf("%d",&num[i][b]);
//                if (i==0)
//                    dp[i][b]=num[i][b];
//                else{
//                    if (b==0)
//                        dp[i][b]=dp[i-1][b]+num[i][b];
//                    else if (b==i)
//                        dp[i][b]=dp[i-1][b-1]+num[i][b];
//                    else
//                        dp[i][b]=max(dp[i-1][b] , dp[i-1][b-1])+num[i][b];
//                }
//                b++;
//            }
//        }
//        int res=dp[n-1][0];
//        for (int j = 1; j < n; ++j) {
//            res= max(res,dp[n-1][j]);
//        }
//        printf("%d\n",res);
//    }
//}

