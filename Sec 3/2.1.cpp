//#include <iostream>
//#include <stdio.h>
//#include <vector>
//using namespace std;
//int num[100001];
//
//vector<int> maxSubArray(vector<int> num,int size) {
//    int maxNum = num[0];
//    int start = 0, end = 0;
//    int finalStart = 0, finalEnd = 0;
//    for (int i = 1; i < size; i++) {
//        if (num[i - 1] > 0) {
//            num[i] += num[i - 1];
//            end = i;
//        } else {
//            start = end = i;
//        }
//        if (num[i] > maxNum) {
//            finalStart = start;
//            finalEnd = end;
//        }
//        maxNum = maxsize(maxNum, num[i]);
//    }
//    return vector<int>{finalStart, finalEnd};
//}
//
//
//int main() {
//    int n;
//    while (cin>>n){
//        vector<int> num(n);
//        for (int i = 0; i < n; ++i) {
//            cin>>num[i];
//        }
//        vector<int> res=maxSubArray(num,n);
//        printf("%d %d\n",res[0]+1,res[1]+1);
//    }
//}
