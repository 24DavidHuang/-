//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//bool isWin(const vector<int> &A){
//    int sum=0;
//    for (int i = 0; i < A.size(); ++i) {
//        sum^= A[i];
//    }
//
//    if (sum==0)return false;//先手玩家打破平衡态，必输
//    else return true;//先手玩家可以建立平衡态，必胜
//}
//
//int main() {
//    int n;
//    while (cin >> n) {
//        vector<int> A;
//        for (int i = 0; i < n; ++i) {
//            int k;
//            cin >> k;
//            A.push_back(k);
//        }
//        if (isWin(A))printf("Alice\n");
//        else printf("Bob\n");
//    }
//}
