//#include <iostream>
//#include<algorithm>
//using namespace std;
//
//struct pack {
//    int value;
//    int weight;
//} arr[1001];
//int Maxweight;
//
//bool cmp(pack x, pack y) {
//    if (x.value > y.value) {
//        return true;
//    } else if (x.value == y.value) {
//        if (x.weight > y.weight) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int Package(pack[],int m){
//    int valueSum=0;
//    for (int i = 0; i < m; ++i){
//        if(arr[i].weight <= Maxweight)
//        {
//            valueSum += arr[i].value * arr[i].weight;
//            Maxweight = Maxweight - arr[i].weight;
//        }
//        else {
//            valueSum += Maxweight  * arr[i].value;
//            break;
//        }
//    }
//    return valueSum;
//}
//
//int main(){
//    int m;
//    int temp;
//    while(~scanf("%d %d", &Maxweight, &m)){
//        if(Maxweight==0)
//            break;
//        for (int i = 0; i < m; ++i) {
//            scanf("%d %d", &arr[i].value, &arr[i].weight);
//        }
//        sort(arr, arr + m, cmp);
//        printf("%d\n", Package(arr, m));
//    }
//}