//#include <stdio.h>
//using namespace std;
//typedef long long ll;
//const ll mod=1e9+7;
//ll n;
//// 快速幂:计算 a 的 b 次幂取模 mod
//ll fastPowerMod(ll a, ll b) {
//    ll result = 1;
//    a = a % mod;
//    while (b > 0) {
//        // 如果 b 是奇数，则将结果乘以 a
//        if (b % 2 == 1) {
//            result = 1LL*(result * a) % mod;
//        }
//        // 将底数 a 自乘
//        a = 1LL*(a * a) % mod;
//        // 右移一位，相当于除以 2
//        b = b >> 1;
//    }
//    return result;
//}
//
////指数生成函数
//int main(){
//    while (~scanf("%lld",&n)){
//        ll result=0;
//        result=(result+fastPowerMod(4,n-1)) %mod;
//        result=(result+fastPowerMod(2,n-1)) %mod;
//        printf("%lld\n",result);
//    }
//}
