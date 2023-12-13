//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct Task {
//    int durtime;
//    int deadline;
//};
//// 按照截止时间排序的比较函数
//bool compareTasks(const Task& a, const Task& b) {
//    return a.deadline < b.deadline;
//}
//// 计算最小化最大延迟的函数
//int minimizeMaxDelay(vector<Task>& tasks) {
//    // 按照截止时间排序
//    sort(tasks.begin(), tasks.end(), compareTasks);
//
//    int curtime = 0; // 当前时间
//    int maxDelay = 0;    // 最大延迟
//
//    for (const Task& task : tasks) {
//        curtime += task.durtime;
//        maxDelay = max(maxDelay, curtime - task.deadline);
//    }
//    return maxDelay;
//}
//
//int main() {
//    int t;
//    scanf("%d",&t);
//    while (t--) {
//        int n;
//        cin >> n;
//        vector<Task> tasks(n);
//        for (int i = 0; i < n; ++i) {
//            std::cin >> tasks[i].durtime >> tasks[i].deadline;
//        }
//
//        int result = minimizeMaxDelay(tasks);
//        cout << result << std::endl;
//    }
//}