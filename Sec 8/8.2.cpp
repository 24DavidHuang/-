//#include <stdio.h>
//#include <string.h>
//using namespace std;
//typedef long long ll;
//const ll mod=1e9+7;
//const ll MAX_DIGITS=600;
//// 计算 a 的 b 次幂取模 mod，用于计算逆元
//ll powerMod(ll a, ll b) {
//    ll result = 1;
//    a = a % mod;
//    while (b > 0) {
//        if (b % 2 == 1) {
//            result = (result * a) % mod;
//        }
//        a = (a * a) % mod;
//        b = b >> 1;
//    }
//    return result;
//}
////生成函数+牛顿二项式
//int main(){
//    char number[MAX_DIGITS];
//    while (~scanf("%s",&number)){
//        int len = strlen(number);
//        ll result=0;
//        for (int i = 0; i < len; ++i) {
//            int digit = number[i] - '0';
//            result = (result * 10 + digit) % mod;
//        }
//        ll numerator=((((2+result)%mod * (1+result)%mod) % mod) * result%mod)%mod;
//        long long inverse_factorial_3 = powerMod(6, mod - 2);
//        long long res = (numerator * inverse_factorial_3) % mod;
//        printf("%lld\n",res);
//    }
//}
