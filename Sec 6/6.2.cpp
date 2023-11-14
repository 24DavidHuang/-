//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//无限物品背包
//int completeKnapsak(vector<int>&value, vector<int>&weight, int&volume){
//    vector<int>dp(volume+1,0);
//    for(int i=0; i < weight.size(); i++){
//        for(int v=weight[i]; v <= volume; v++){
//            dp[v]=max(dp[v], dp[v - weight[i]] + value[i]);
//        }
//    }
//    return dp[volume];
//}
//int main(){
//    int n,b;
//    while (~scanf("%d %d",&n,&b)){
//        vector<int>weight(n);
//        vector<int>value(n);
//        for (int i = 0; i < n; ++i) {
//            scanf("%d %d",&weight[i],&value[i]);
//        }
//        printf("%d\n",completeKnapsak(value,weight,b));
//    }
//}