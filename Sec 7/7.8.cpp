//#include <stdio.h>
//#include <math.h>
//using namespace std;
//#define MAX 1000001
//typedef long long ll;
//const ll mod=1e9+7;
//int n,k;
////计算欧拉函数
//int eulerPhi[MAX];
//void computeEulerPhi() {
//    for (int i = 1; i < MAX; ++i) {
//        eulerPhi[i] = i;
//    }
//    for (int i = 2; i < MAX; ++i) {
//        if (eulerPhi[i] == i) {
//            for (int j = i; j < MAX; j += i) {
//                eulerPhi[j] -= eulerPhi[j] / i;
//            }
//        }
//    }
//}
////找到所有因子
//int factor[MAX];
//int findFactors(int n) {
//    int k=0;
//    int limit = sqrt(n);
//    for (int i = 1; i <= limit; ++i) {
//        if (n % i == 0) {
//            factor[k++]=i;
//            if (i != n / i) {
//                factor[k++]=n/i;
//            }
//        }
//    }
//    return k;
//}
////快速幂
//ll quickpower(double base, int e) {
//    if (e == 0) return 1;
//    ll result = 1;
//    ll current = base;
//    ll exp = (e > 0) ? e : -e;
//    while (exp > 0) {
//        if (exp % 2 == 1) {
//            result =(result* current) %mod;
//        }
//        current = (current*current)%mod;
//        exp /= 2;
//    }
//    return (e > 0) ? result : 1 / result;
//}
////依据多重循环排列计算公式h(n)=(1/n)∑{𝑒:𝑒|𝑛}( Φ(n/e) * k^e),其中e为n的全部因数，Φ表示欧拉函数
//int main(){
//    computeEulerPhi();
//    while (scanf("%d %d",&n,&k)!=EOF){
//        ll len=findFactors(n);
//        ll result=0;
//        for (ll i = 0; i < len; ++i) {
//            ll k_e=quickpower(k,factor[i]);
//            ll eul=eulerPhi[n/factor[i]];
//            result=(result+( eul* k_e ) )%mod ;
//        }
//        //注意不能直接除n，在mod的意义下要计算逆元
//        result = (result * quickpower(n, mod - 2)) % mod;
//        printf("%lld\n",result);
//    }
//}
