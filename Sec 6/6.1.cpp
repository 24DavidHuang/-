//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//const int MAX =1001;
//char str1[MAX];
//char str2[MAX];
//int dp[MAX][MAX];
//
//int main(){
//    memset(dp, 0, sizeof(dp));
//    while(scanf("%s %s",str1+1,str2+1) != EOF){
//    //从1开始而不是0开始，让第一个dp[0]刚好是0
//        for(int i = 1; str1[i]; i ++)
//            for(int j = 1; str2[j]; j ++){
//                if(str1[i] == str2[j])
//                    dp[i][j] = dp[i - 1][j - 1] + 1;
//                else
//                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//            }
//        printf("%d\n", dp[strlen(str1+1)][strlen(str2+1)]);
//    }
//}
