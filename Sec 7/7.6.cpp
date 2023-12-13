//#include <stdio.h>
//#define MAX 1000001
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
//int main() {
//    int a;
//    computeEulerPhi();
//    while(~scanf("%d", &a)){
//        printf("%d\n",eulerPhi[a]);
//    }
//}
//
