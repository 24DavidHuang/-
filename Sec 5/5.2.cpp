//#include <stdio.h>
//
//// 快速幂模运算函数
//long long mod_pow(long long base, long long n, long long mod) {
//    long long result = 1;
//    while (n > 0) {
//        if (n % 2 == 1) {
//            result = (result * base) % mod;
//        }
//        base = (base * base) % mod;
//        n /= 2;
//    }
//    return result;
//}
//
//int main() {
//    long long p, n;
//    while (scanf("%lld %lld", &n, &p) != EOF) {
//        long long result = mod_pow(p - 1, n, p);
//        printf("%lld\n", result);
//    }
//
//    return 0;
//}
