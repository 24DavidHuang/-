//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//int weight[10001];
//// 计算最多可以安排的货物个数
//int Maxweight(int weight[], int n,int m) {
//    // 按结束时间排序
//    sort(weight, weight+m);
//    int count = 1; // 最少有一个活动
//    int leftweight = n-weight[0];
//    for (int i = 1; i < m; i++) {
//        if (weight[i] <= leftweight) {
//            count++;
//            leftweight -= weight[i];
//        }
//    }
//    return count;
//}
//int main() {
//    int t;
//    scanf("%d",&t);
//    for (int T = 0; T < t; ++T) {
//        int n,m;
//        scanf("%d %d",&n,&m);
//        for (int i = 0; i < m; ++i) {
//            scanf("%d",&weight[i]);
//        }
//        int result = Maxweight(weight, n,m);
//        printf("%d\n", result);
//
//    }
//}