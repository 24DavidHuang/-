//#include<stdio.h>
//using namespace std;
//typedef long long int ll;
//#define MOD 1000000007
//ll QuickPower(long long int n, int p) {
//    long long int res = 1;
//    n %= MOD;
//    while (p) {
//        if (p % 2 != 0) {
//            res *= n;
//            res = res % MOD;
//        }
//        n *= n;
//        n %= MOD;
//        p >>= 1;
//    }
//    return res;
//}
//
//ll Feima_inv(long long int n) {
//    n %= MOD;
//    return QuickPower(n, MOD - 2);
//}
//
//int main()
//{
//    ll q, n,fenzi, fenmu, res;
//    while (scanf("%lld%lld", &q, &n) != EOF) {
//        fenmu = QuickPower(1000, n);
//        fenzi = (QuickPower(1000 - 2 * q, n) + fenmu)%MOD;
//        fenmu = Feima_inv(fenmu * 2);
//        res = fenzi * fenmu % MOD;
//        printf("%lld\n", res);
//    }
//}
//P(朝上为偶数) = sum_{k=0,2,4,…} C_n^k * (q/1000)^k * (1-q/1000)^(n-k)
//技巧：
//P(朝上为偶数)
//         = 1/2 * (( 1-q/1000 + q/1000)^n + ( 1-q/1000 - q/1000)^n)   q的次幂为偶数的都保留了，而次幂为奇的都抵消了，留下的是二倍的偶数次朝上的概率，*1/2就行了
//           =1/2 * (1^n + (1-2q/1000 )^n)