//#include <stdio.h>
//long long int num[1000001];
//const long long int mod=1e9+7;
//long long modInverse(long long num, long long m) {
//    long long m0 = m, t, q;
//    long long x0 = 0, x1 = 1;
//    if (m == 1)
//        return 0;
//    while (num > 1) {
//        q = num / m;
//        t = m;
//
//        m = num % m, num = t;
//        t = x0;
//
//        x0 = x1 - q * x0;
//        x1 = t;
//    }
//    // Make x1 positive
//    if (x1 < 0)
//        x1 += m0;
//
//    return x1;
//}
//void init(){
//    num[1]=1;
//    for (long long int i = 2; i <=1000000 ; ++i) {
//        num[i]=(i*num[i-1]) %mod;
//    }
//}
//int main(){
//    int n,t;
//    while (scanf("%d %d",&t,&n)!=EOF){
//        init();
//        long long res=num[n];
//        for (int i = 0; i < t; ++i) {
//            int k;
//            scanf("%d",&k);
//            if (k==0)
//                continue;
//            long long inverse = modInverse(num[k], mod);
//            res = (res * inverse) % mod;
//        }
//        printf("%lld\n",res);
//    }
//}
