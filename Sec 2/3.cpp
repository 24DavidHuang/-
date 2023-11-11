//#include <iostream>
//#include <stdio.h>
//using namespace std;
//const long long mod=1e9 + 7;
//
//void exgcd(long long a,long long b,long long& d,long long& x,long long& y){
//        if(!b) { d = a; x = 1; y = 0; }
//        else{ exgcd(b, a%b, d, y, x); y -= x*(a/b); }
//
//}
//long long inv(long long a, long long p){
//        long long d,x,y;
//        exgcd(a,p,d,x,y);
//        return d == 1 ? (x+p)%p : -1;
//}
//
//int main(){
//    int n,m;
//    while (cin>>n>>m){
//        long long P=1;
//        for (int i = 1; i <= m; ++i) {
//            P=P*i*i%mod;
//        }
//        long long Q=1;
//        for (int i = n; i >= n-m+1; --i) {
//            Q=Q*i*i%mod;
//        }
//        long long Q_1=inv(Q,mod);
//        printf("%lld\n",P*Q_1%mod);
//    }
//
//}