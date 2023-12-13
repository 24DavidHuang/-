//#include <stdio.h>
//typedef long long ll;
//const int MAX=21;
//ll C[MAX][MAX];
//
//void init(){
//    C[0][0]=1;
//    C[MAX-1][MAX-1]=1;
//    for (int i = 1; i < MAX; ++i) {
//        C[i][0]=0;
//    }
//    for (ll p = 1; p < MAX; ++p) {
//        for (int k = 0; k <= p; ++k) {
//            C[p][k]=(p-1)*C[p-1][k]+C[p-1][k-1];
//        }
//    }
//}
//int main(){
//    init();
//    int m,n;
//    while (~scanf("%d %d",&n,&m)){
//        printf("%lld\n", C[n][m]);
//    }
//}

