//#include <stdio.h>
//#include <stdlib.h>
//// 活动结构体
//typedef struct {
//    int start;
//    int end;
//} Activity;
//// 活动比较函数，用于排序
//int compareActivities(const void *a, const void *b) {
//    return ((Activity*)a)->end - ((Activity*)b)->end;
//}
//// 计算最多可以安排的活动个数
//int maxActivities(Activity activities[], int n) {
//    // 按结束时间排序
//    qsort(activities, n, sizeof(Activity), compareActivities);
//    int count = 1; // 最少有一个活动
//    int lastEnd = activities[0].end;
//    for (int i = 1; i < n; i++) {
//        // 如果当前活动的开始时间大于上一个活动的结束时间，可以安排
//        if (activities[i].start >= lastEnd) {
//            count++;
//            lastEnd = activities[i].end;
//        }
//    }
//
//    return count;
//}
//int main() {
//    int n;
//    while(~scanf("%d", &n)){
//        Activity activities[n];
//        for (int i = 0; i < n; i++) {
//            scanf("%d %d", &activities[i].start, &activities[i].end);
//        }
//        int result = maxActivities(activities, n);
//        printf("%d\n", result);
//    }
//}