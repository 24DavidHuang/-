//#include <iostream>
//#include<algorithm>
//using namespace std;
//
//struct pack {
//    int value;
//    int weight;
//} arr[1510];
//int Maxmoney;
//
//bool cmp(pack x, pack y) {
//    if (x.value < y.value) {
//        return true;
//    } else if (x.value == y.value) {
//        if (x.weight < y.weight) {
//            return true;
//        }
//    }
//    return false;
//}
//
//float Package(pack[],int m){
//    float weightSum=0;
//    for (int i = 0; i < m; ++i){
//        if(arr[i].value * arr[i].weight <= Maxmoney)
//        {
//            weightSum += arr[i].weight;
//            Maxmoney = Maxmoney - arr[i].value * arr[i].weight;
//        }
//        else {
//            weightSum += Maxmoney * 1.0 / arr[i].value;
//            break;
//        }
//    }
//    return weightSum;
//}
//
//int main(){
//    int t;
//    scanf("%d",&t);
//    for (int T = 0; T < t; ++T) {
//        int m;
//
//        scanf("%d %d", &Maxmoney, &m);
//        for (int i = 0; i < m; ++i) {
//            scanf("%d %d", &arr[i].value, &arr[i].weight);
//        }
//        sort(arr, arr + m, cmp);
//        printf("%.2f\n", Package(arr, m));
//    }
//}