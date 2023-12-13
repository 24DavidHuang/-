//#include <stdio.h>
//#define MAX 1000001
//typedef long long ll;
//int eulerPhi[MAX];
//ll addeulerPhi[MAX];
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
//void computeAddEulerPhi(){
//    addeulerPhi[1]=eulerPhi[1];
//    for (int i = 2; i < MAX; ++i) {
//        addeulerPhi[i]=addeulerPhi[i-1]+eulerPhi[i];
//    }
//}
//int main() {
//    int a,b;
//    computeEulerPhi();
//    computeAddEulerPhi();
//    while(~scanf("%d %d", &a,&b)){
//        ll result=addeulerPhi[b]-addeulerPhi[a-1];
//        printf("%lld\n",result);
//    }
//}
//
