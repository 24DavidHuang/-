//#include <iostream>
//#include <stdio.h>
//#include <math.h>
//#include <string>
//using namespace std;
//
//void count_one(int len,long long *dp){
//    if (len==0)return ;
//    dp[1]=1;
//    for (int i = 2; i <=len ; ++i) {
//        dp[i]=dp[i-1]*9+pow(10,i-1);
//    }
//}
//
//long long countNumbers(long long n,long long *dp) {
//    if (n<=0)return 0;//这一步不能少
//    if (n<=9)return 1;
//
//    int len = to_string(n).length();  // 计算 n 的位数
//    long long count = 0;
//    int highDigit = n / pow(10, len - 1);  // n 的最高位数字
//    if (highDigit==1){
//        //count += dp[len-1]+countNumbers( n-highDigit*pow(10,len-1) , dp);
//        count += dp[len-1]+n-pow(10,len-1)+1;
//    }
//    else {
//        count+=(highDigit-1)*dp[len-1]+pow(10,len-1)+countNumbers( n-(highDigit)*pow(10,len-1) , dp);
//    }
//    return count;
//}
//
//int main(){
//    long long n;
//    while (cin>>n){
//        int len=to_string(n).length();
//        long long dp[len+1];
//        for (int i = 0; i <=len; ++i) {
//            dp[i]=0;
//        }
//
//        count_one(len,dp);
//
//        long long count=countNumbers(n,dp);
//        printf("%lld\n",count);
//    }
//}


