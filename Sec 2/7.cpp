//#include <iostream>
//using namespace std;
//const int mod=1000000009;
//
//int ack(int m, int n) {
//    int i, j;
//    int val[m+1];
//    int ind[m+1];
//
//    for (i=1; i<=m; i++) {
//        ind[i] = -1;
//        val[i] = -1;
//    }
//
//    ind[0] = 0;
//    val[0] = 1;
//
//    while (ind[m] < n) {
//        val[0]++;
//        ind[0]++;
//
//        for (j=1; j<=m; j++) {
//            if (1 == ind[j-1]) {
//                val[j] = val[j-1];
//                ind[j] = 0;
//            }
//
//            if (val[j] != ind[j-1])
//                break;
//
//            ind[j]++;
//            val[j] = val[j-1];
//        }
//    }
//
//    return val[m]%mod;
//}
//
//int main(){
//    int m,n;
//    cin>>m>>n;
//    int k= ack(m,n);
//    printf("%d",k);
//}
