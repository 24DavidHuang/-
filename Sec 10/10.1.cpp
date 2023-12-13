////分支界限法：
//#include<iostream>
//#include<queue>
//#include <cstring>
//using namespace std;
//
//const int MAX=1e9;
//const int MAXN=16;
//
//int n;
//int taskcost[MAXN][MAXN];
//int best[MAXN];				//最优分配方案
//int Mincost = MAX;			//最小成本
//int totalnum = 1;			//结点个数累计
//
//struct Node{
//    int No;	//结点编号
//    int num;//机器编号
//    int tasknum[MAXN];//tasknum[i]为机器i分配的任务编号
//    bool ifwork[MAXN];	//ifwork[i]=true表示任务i已经被分配
//    int cur_cost;//当前已分配任务的总成本
//    int bottom;	//下界
//    bool operator<(const Node& s) const{
//        return bottom > s.bottom;
//    }
//};
//
//void Solve_bound(Node& node) {
//    int minsum = 0;
//    for (int i = node.num + 1; i <= n; i++) {//求e[node.num+1...n]中的最小元素
//        int minc = MAX;
//        for (int j = 1; j <= n; j++){
//            if (node.ifwork[j] == false && taskcost[i][j] < minc){
//                minc = taskcost[i][j];
//            }
//        }
//        minsum += minc;
//    }
//    node.bottom = node.cur_cost + minsum;
//}
//void BFS() {
//    int j;
//    Node node1, node2;
//    priority_queue<Node>qu;
//    memset(node1.tasknum, 0, sizeof(node1.tasknum));
//    memset(node1.ifwork, 0, sizeof(node1.ifwork));
//    node1.num = node1.cur_cost = 0;
//    Solve_bound(node1);//求根节点的bottom
//    node1.No = totalnum++;
//    qu.push(node1);//根节点进队列
//    while (!qu.empty()) {
//        node1 = qu.top();
//        qu.pop();//弹出队列结点e，当前考虑机器e.num
//        if (node1.num == n) {//结束，比较求最优解
//            if (node1.cur_cost < Mincost) {
//                Mincost = node1.cur_cost;
////                for (j = 1; j <= n; j++)
////                    best[j] = node1.tasknum[j];
//            }
//        }
//        node2.num = ++node1.num;//拓展分配下一个机器的任务，对应结点node1
//        for (j = 1; j <= n; j++) {//n个任务
//            if (node1.ifwork[j])
//                continue;
//
//            for (int i = 1; i <= n; i++) {//复制已经分配的属性
//                node2.tasknum[i] = node1.tasknum[i];
//            }
//
//            node2.tasknum[node2.num] = j;//分配任务j
//            for (int k = 1; k <= n; k++) {
//                node2.ifwork[k] = node1.ifwork[k];
//            }
//            node2.ifwork[j] = true;	//表示任务j已经分配
//            node2.cur_cost = node1.cur_cost + taskcost[node2.num][j];
//            Solve_bound(node2);
//            node2.No = totalnum++;
//            if (node2.bottom <= Mincost)//剪枝
//                qu.push(node2);
//        }
//    }
//}
//
//int main() {
//    scanf("%d",&n);
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            scanf("%d",&taskcost[i][j]);
//        }
//    }
//    BFS();
//    printf("%d\n",Mincost) ;
//}



