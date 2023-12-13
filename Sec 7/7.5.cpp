//#include <stdio.h>
//#define mod 1000000007
//typedef long long ll;
//const int MAX=1000001;
//int n;
////公式：Qn=Dn+Dn-1
//ll d[MAX];
//void Init_D(){
//    d[1]=0;
//    d[2]=1;
//    for (ll i = 3; i < MAX; ++i) {
//        d[i]=( (i-1)*((d[i-1]+d[i-2])%mod ) )%mod;
//    }
//}
//int main() {
//
//    Init_D();
//    while (scanf("%d", &n) != EOF) {
//        if (n==1)
//            printf("%d\n",1);
//        else{
//            ll result=(d[n]+d[n-1])%mod;
//            printf("%lld\n",result);
//        }
//    }
//}