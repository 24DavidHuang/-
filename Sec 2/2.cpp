//#include <iostream>
//#include <stdio.h>
//#include <vector>
//#include <math.h>
//using namespace std;
//
//const long long mod=1e9 + 7;
//vector<int> nPrime(int n) {
//    int k = 2;
//    vector<int> v;
//    while (k <= n) {
//        bool isPrime = true;
//        int t = sqrt(k);
//        for (; t > 1; t--) {
//            if (k%t == 0) {
//                isPrime = false;
//                break;
//            }
//        }
//        if (isPrime)
//            v.push_back(k);
//        k++;
//    }
//    return v;
//}
//
////计算n!中素数m的次数
//int dPrime(int n, int m) {
//    int pow = 0;
//    while (n >= m) {
//        int temp = n / m;
//        pow += temp;
//        n = temp;
//    }
//    return pow;
//}
//
////计算组合数C(n,m)
//long long C(int n, int m) {
//    long long ans = 1;
//    vector<int> v = nPrime(n);
//    for (int i = 0; i < v.size(); i++) {
//        int k = v.at(i),pow;
//        pow = dPrime(n, k) - dPrime(m, k) - dPrime(n - m, k);
//        for (int j = 0; j < pow; j++) {
//            ans *= k;
//            ans %= mod;
//        }
//    }
//    return ans;
//}
//
//
//int main(){
//    int n,m;
//    while (cin>>n>>m){
//        cout<< C(n+m-1,n-1)%mod<<endl;
//    }
//}
//
//#include <iostream>
//#include <stdio.h>
//#include <vector>
//#include <math.h>
//using namespace std;
//
//typedef long long ll;
//
//const ll mod = 1e9 + 7;
//const int MAXN = 2e5 + 5;
//
//int T;
//ll N;
//
////快速幂
//ll quick_power(ll a, ll b)
//{
//    ll ans = 1;
//    while(b)
//    {
//        if(b&1) ans = ans%mod*a%mod;
//        b>>=1;
//        a=a%mod*a%mod;
//    }
//    return ans;
//}
//
//ll fa[MAXN];//阶乘
//ll fb[MAXN];//阶乘的逆元
//
////计算组合数
//ll comb(ll n, ll m)
//{
//    ll ans;
//    if(m > n || m < 0 || n < 0) return 0;
//    else return (fa[n]%mod * fb[m]%mod * fb[n-m]%mod)%mod;
//}
//
////预处理
//void init()
//{
//    fa[0] = 1, fb[0] = 1;
//    fa[1] = 1;
//    fb[1] = 1;
//    for(int i = 2; i < MAXN; i++) fa[i] = (fa[i-1] * i)%mod;
//    for(int i = 2; i < MAXN; i++) fb[i] = quick_power(fa[i], mod-2)%mod;
//
//}