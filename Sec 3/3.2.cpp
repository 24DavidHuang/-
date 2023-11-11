//#include <iostream>
//using namespace std;
//const int MAX=1001;
//long long int f[MAX][MAX];
//int n,m;
//const long long int mod=1e9+7;
//
//int main(){
//    for (long long int i = 2; i <MAX; ++i) {
//        f[2][i]=i;
//        f[i][2]=i;
//    }
//    for (int i = 3; i < MAX; i++) {
//        for (int j = 3; j<MAX ; j++) {
//            if(i > j) f[i][j] = f[j][i];//不用重复计算
//            else f[i][j]=(f[i - 1][j] + f[i][j - 1]) % mod;
//        }
//    }
//    while (cin>>m>>n){
//        printf("%lld\n",f[m][n]);
//    }
//}

