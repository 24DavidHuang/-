//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//using namespace std;
//
//int schedule[100][100];
//
//int main(){
//
//    schedule[1][1]=1;
//    int n;
//    while (cin>>n){
//
//        int k=1;
//        while (pow(2,k)<=n){
//            //对角线
//            for (int i = 1; i <= (int)pow(2,k-1); ++i) {
//                for (int j = 1; j <= (int)pow(2,k-1); ++j) {
//                    schedule[i+(int)pow(2,k-1)][j+(int)pow(2,k-1)]=schedule[i][j];
//                }
//            }
//            //右侧
//            for (int i = 1; i <= (int)pow(2,k-1); ++i) {
//                for (int j = 1; j <= (int)pow(2,k-1); ++j) {
//                    schedule[i][j+(int)pow(2,k-1)]=schedule[i][j]+ pow(2,k-1);
//                }
//            }
//            //下侧
//            for (int i = 1; i <= (int)pow(2,k-1); ++i) {
//                for (int j = 1; j <= (int)pow(2,k-1); ++j) {
//                    schedule[i+(int)pow(2,k-1)][j]=schedule[i][j]+pow(2,k-1);
//                }
//            }
//            k++;
//        }
//        for (int i = 1; i <= n; ++i) {
//            for (int j = 2; j <= n; ++j) {
//                cout<<schedule[i][j]<<" ";
//            }
//            cout<<endl;
//        }
//
//    }
//}