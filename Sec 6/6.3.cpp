//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
////01背包
//int n,b;
//int dp[1001][6000];
//
//int singlebag(vector<int>&value, vector<int>&weight, int&volume){
//    //初始化
//    for (int i = weight[0]; i < volume; ++i) {
//        dp[0][i]=value[0];
//    }
//    //i=1,从第二个开始
//    for(int i=1; i < weight.size(); i++){
//        for(int v=0; v <= volume; v++){
//            if (v<weight[i])//特殊处理
//                dp[i][v]=dp[i-1][v];
//            else
//                dp[i][v]=max(dp[i-1][v], dp[i-1][v - weight[i]] + value[i]);
//        }
//    }
//    return dp[n-1][b];
//}
//int main(){
//    while (~scanf("%d %d",&n,&b)){
//        vector<int>weight(n);
//        vector<int>value(n);
//        for (int i = 0; i < n; ++i) {
//            scanf("%d %d",&weight[i],&value[i]);
//        }
//        printf("%d\n",singlebag(value,weight,b));
//    }
//}
