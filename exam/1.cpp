//#include <iostream>
//#include <vector>
//using namespace std;
////将小球按编号顺序平均分成两组
//vector<vector<int>> splitBalls(vector<int> balls) {
//    vector<vector<int>> devide(2); // 存储两组小球的编号
//    int n = balls.size(); // 小球的个数
//    int m = n / 2; // 每组小球的个数
//    for (int i = 0; i < m; i++) {
//        devide[0].push_back(balls[i]); // 将前m个小球放入第一组
//        devide[1].push_back(balls[i + m]); // 将后m个小球放入第二组
//    }
//    if (n % 2 == 1) { // 如果小球的个数是奇数，那么最后一个小球不放入任何一组
//        devide.push_back({balls[n - 1]});
//    }
//    return devide;
//}
////根据称量结果找出次品小球的编号
//int find_defective_ball(int n, vector<int> weights) {
//    vector<int> balls(n); //存储所有小球的编号
//    for (int i = 0; i < n; i++) {
//        balls[i] = i + 1; //小球的编号从1开始
//    }
//    for (int w : weights) { //遍历每次称量的结果
//        vector<vector<int>> groups = splitBalls(balls); //将当前保留的小球分成两组
//        if (w == 0) { //如果左边轻，那么保留左边的小球
//            balls = groups[0];
//        } else if (w == 1) { //如果右边轻，那么保留右边的小球
//            balls = groups[1];
//        } else { //如果天平平衡，那么次品小球就是不放在天平上的那个
//            return groups[2][0];
//        }
//    }
//    return balls[0]; // 最后剩下的就是次品小球
//}
//int main() {
//    int n, m; // 输入n和m
//    while (scanf("%d %d",&n,&m) !=EOF){
//        vector<int> weights(m);
//        for (int i = 0; i < m; i++) {
//            cin >> weights[i];
//        }
//        int ans = find_defective_ball(n, weights);
//        printf("%d\n",ans);
//    }
//}
