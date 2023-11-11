//#include <iostream>
//#include <math.h>
//#include <algorithm>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//int main(){
//    int N;
//    int Size=5;
//    while (scanf("%d",&N)!=EOF){
//        int A[N];
//        for (int i = 0; i < N; ++i) {
//            scanf("%d",&A[i]);
//        }
//        queue<int>s;
//        for (int i = 0; i < N; ++i) {
//            if (s.empty())s.push(i+1);
//            else{
//                int back_num=s.back();
//
//                if(A[i]<=A[back_num-1])continue;
//                else{
//                    if(s.size()<5){
//                        s.push(i+1);
//                    }
//                    else{
//                        s.pop();
//                        s.push(i+1);
//                    }
//                }
//            }
//        }
//
//        int len=s.size();
//        for (int i = 0; i < len; ++i) {
//            printf("%d ",s.front());
//            s.pop();
//        }
//
//    }
//
//}
