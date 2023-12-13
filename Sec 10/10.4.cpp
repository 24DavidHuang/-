//#include<stdio.h>
//#include<math.h>
//const int MAXN=10;
//using namespace std;
//double R[MAXN];//半径
//double Xposition[MAXN];//圆心x轴坐标
//double min_answer = 9999;
//
////得到每个圆的圆心位置
//double get_Xposition(int k) {
//    double temp = 0;
//    for (int i = 0; i < k; i++) {
//        //相切圆圆心横坐标距求法
//        double value = Xposition[i] + 2.0 * sqrt(R[k] * R[i]);
//        if (value > temp) {
//            temp = value;
//        }
//    }
//    return temp;
//}
//
////计算圆排列长度
//void countlen(int n) {
//    double left = 99999, right = -99999;
//    for (int i = 0; i < n; i++) {//找到最左边和最右边
//        if (Xposition[i] - R[i] < left)
//            left = Xposition[i] - R[i];
//        if (Xposition[i] + R[i] > right)
//            right= Xposition[i] + R[i];
//    }
//    if (right-left < min_answer) {//相减就是长度len
//        min_answer=right-left;
//    }
//}
//void back_and_bound(int cur_circle, int n) {
//    if (cur_circle == n)//已全部排列
//        countlen(n);
//    else {
//        for (int j = cur_circle; j < n; ++j){
//            swap(R[cur_circle], R[j]);
//            double curXpos = get_Xposition(cur_circle);
//
//            if (R[0]+curXpos+R[cur_circle] < min_answer){//注意少个R[0]
//                Xposition[cur_circle] = curXpos;
//                back_and_bound(cur_circle + 1, n);
//            }
//            //失败回溯
//            swap(R[cur_circle], R[j]);
//        }
//    }
//}
//int main() {
//    int n;
//    while (~scanf("%d",&n)) {
//        min_answer = 999999;
//        for (int i = 0; i < n; i++) {
//            scanf("%lf",&R[i]);
//        }
//        back_and_bound(0, n);
//        printf("%.3f\n",min_answer);
//    }
//}
//
