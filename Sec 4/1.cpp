//#include<bits/stdc++.h>
//using namespace std;
//const int Enter_count[]={0,1,2,6,24,120,720,5040};
//int enter_count;
//bool first_enter= false;
//int n, input[15],res[15], vis[15];
//
//void dfs(int step) {  // step表示接下来准备填第几个数字
//    if(step == n + 1) { // step == n + 1: 准备填第n+1个数字，说明前面n个数字都填好了
//        for(int i = 1; i <= n; i++) {
//            printf("%d ", res[i]);
//        }
//        if (enter_count>0) {
//            printf("\n");
//            enter_count--;
//        } // 注意换行
//    }
//    for(int i = 1; i <= n; i++) {  // 遍历每个开头数字
//        if(vis[i])  continue;  // 查看是否访问过
//        res[step] = input[i];
//        vis[i] = 1;  // 标记
//        dfs(step + 1);  // 填写step + 1个数字
//        vis[i] = 0;  // 回溯，退回来找新的可能
//    }
//}
//
//int main() {
//    while(scanf("%d",&n)!=EOF) {
//        enter_count=Enter_count[n]-1;
//
//        if (first_enter== false)
//            first_enter= true;
//        else
//            printf("\n");
//
//        memset(vis, 0, sizeof(vis));  // 多组数据输入，需要初始化标记数组
//        for (int i = 1; i <=n ; ++i) {
//            scanf("%d",&input[i]);
//        }
//        dfs(1);
//    }
//    return 0;
//}
