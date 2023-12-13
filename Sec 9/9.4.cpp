//#include<stdio.h>
//typedef long long ll;
//using namespace std;
//const int MAX=1e6;
//const ll mod=1e9+7;
//ll number[MAX];
//
//ll Inverse(ll X, ll Y)
//{
//    ll sum=1;
//    while(Y){
//        if(Y & 1) sum= sum * X % mod;
//        Y/=2;
//        X= X * X % mod;
//    }
//    return sum%mod;
//}
//void init(int n){
//    number[1]=1;
//    number[0]=1;
//    if(n==1) {
//        printf("1\n");
//    }
//    else{
//        for(int i=2;i<=n;i++){
//            number[i] = (((6 * i - 3) % mod) * number[i - 1] % mod - ((i - 2) % mod) * number[i - 2] % mod + mod) % mod * Inverse(i + 1, mod - 2) % mod;
//        }
//    }
//}
//int main(){
//    int n;
//    init(MAX);
//    while(~scanf("%d",&n)){
//        printf("%lld\n", number[n - 1] * 2 % mod);
//    }
//}