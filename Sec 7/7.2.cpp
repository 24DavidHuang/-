//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <climits>
//using namespace std;
//typedef long long ll;
//struct Task {
//    ll start;
//    ll end;
//};
//struct device{
//    ll start;
//    ll end;
//};
//// 按照开始时间排序的比较函数
//bool compareTasks(const Task& a, const Task& b) {
//    return a.start < b.start;
//}
//
//// 计算最小设备数量和总时长的函数
//void calculateDevices(const vector<Task>& tasks,int n) {
//    vector<Task> sortedTasks = tasks;
//    sort(sortedTasks.begin(), sortedTasks.end(), compareTasks);
//    vector<device> dev;
//    ll totalRuntime = 0;
//    device d0;  //至少需要一台设备，所以先创建
//    d0.start = sortedTasks[0].start;
//    d0.end = sortedTasks[0].end;
//
//    dev.push_back(d0);
//    for (int i = 1; i < n; i++) {
//        int flag = 1; // 判断是否被已有的设备运行
//        ll MIN = INT_MAX;
//        int index = 0; //记录任务结束时间与设备结束时间最小值的设备下标
//        for (int j = 0; j < dev.size(); j++) {
//            if (dev[j].end > sortedTasks[i].start) //说明无法调度该进程，查询下一个设备
//                { }
//            else { //找到空闲时间最小的设备下标
//                ll temp = sortedTasks[i].start - dev[j].end;
//                if(temp < MIN) {
//                    MIN = temp;
//                    index = j;
//                }
//                flag = 0; //说明至少有一个设备可以运行该任务
//            }
//        }
//        if(flag) { //找不到,创建一个新设备
//            device d2;
//            d2.start = sortedTasks[i].start;
//            d2.end = sortedTasks[i].end;
//            dev.push_back(d2);
//        } else
//            dev[index].end = sortedTasks[i].end;
//    }
//    for (int i = 0; i < dev.size(); i++) {
//        totalRuntime += (dev[i].end - dev[i].start);
//    }
//    cout << dev.size() << " " << totalRuntime << endl;
//}
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        vector<Task> tasks(n);
//        for (int i = 0; i < n; ++i) {
//            cin >> tasks[i].start >> tasks[i].end;
//        }
//        calculateDevices(tasks,n);
//    }
//}