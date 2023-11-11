//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//int num[100000];
//int low=-100000000;
//
//class joni {
//public:
//    int left, right;
//    int max_sum;
//};
//
//joni MiddleMax(int l, int r) {
//    joni Mid;
//    int m = (l + r) / 2;
//    int left_sum = low;
//    int sum = 0;
//    for (int i = m; i >= 1; i--) {
//        sum += num[i];
//        if (sum >= left_sum) {
//            Mid.left = i;
//            left_sum = sum;
//        }
//    }
//    int right_sum = 0;
//    sum = 0;
//    for (int i = m + 1; i <= r; i++) {
//        sum += num[i];
//        if (sum > right_sum) {
//            Mid.right = i;
//            right_sum = sum;
//        }
//    }
//    Mid.max_sum = left_sum + right_sum;
//    return Mid;
//}
//
//joni Divide(int l, int r) {
//    joni Max;
//    if (l == r) {
//        Max.left = l;
//        Max.right = r;
//        Max.max_sum = num[l];
//        return Max;
//    }
//    else {
//        int m = (l + r) / 2;
//        joni left = Divide(l, m);
//        joni right = Divide(m + 1, r);
//        joni mid = MiddleMax(l, r);
//        Max=left;
//        if (mid.max_sum > Max.max_sum)Max = mid;
//        if (right.max_sum > Max.max_sum)Max = right;
//    }
//    return Max;
//}
//
//int main() {
//    int n;
//    while(cin>>n){
//
//        for (int i = 1; i <= n; i++) {
//            cin>>num[i];
//        }
//        joni Max = Divide(1, n);
//        cout << Max.left << " " << Max.right << endl;
//    }
//}
