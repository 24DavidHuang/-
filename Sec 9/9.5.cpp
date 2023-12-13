//#include <iostream>
//using namespace std;
////卡特兰数（带mod）
//typedef long long ll;
//const ll MOD = 1e9 + 7;
//const int MAX = 200002;
//
//ll Catalan[MAX];
//ll modInverse(ll base) {
//    ll result = 1, exp = MOD - 2;
//    while (exp > 0) {
//        if (exp % 2 == 1) {
//            result = (result * base) % MOD;
//        }
//        base = (base * base) % MOD;
//        exp /= 2;
//    }
//    return result;
//}
//// 计算卡塔兰数
//void initCatalan() {
//    Catalan[0] = 1;
//    for (int i = 1; i < MAX; i++) {
//        Catalan[i] = (Catalan[i - 1] * (2 * (2 * i - 1)) % MOD) * modInverse(i + 1) % MOD;
//    }
//}
//int main() {
//    initCatalan();
//    int n;
//    while (cin >> n) {
//        printf("%lld\n", 2 * Catalan[n] % MOD);
//    }
//}
