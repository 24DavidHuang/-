//#include<stdlib.h>
//#include <iostream>
//#include <vector>
//#include<climits>
//using namespace std;
//
//int main(){
//    int N;
//    cin >> N;
//
//    vector<int> A(N);
//    for (int i = 0; i < N; i++) {
//        cin >> A[i];
//    }
//
//    int min_sum =INT_MAX;
//    int min_sum_i = -1;
//    int min_sum_j = -1;
//
//    for (int i = 0; i < N-1; i++) {
//        for (int j = i+1; j < N; j++) {
//            int max_sum = abs(A[i] + A[j]);
//            if (max_sum < min_sum || (max_sum == min_sum && i < min_sum_i)) {
//                min_sum = max_sum;
//                min_sum_i = i;
//                min_sum_j = j;
//            }
//        }
//    }
//    cout<<min_sum_i+1<<" "<<min_sum_j+1;
//}