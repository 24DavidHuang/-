//#include <stdio.h>
//#include <vector>
//using namespace std;
//int n,m,b;//全定义在外部
//int C[10];
//vector<int> res;
//
//bool back_and_bound(int answer, int begin, int cur_answer){
//    if (cur_answer > answer)  // 无解，剪枝
//        return false;
//    else if (cur_answer == answer)  // 找到解
//        return true;
//    else
//        for (int i = begin; i < n; ++i)    // 遍历xi
//            for (int j = 0; j < m; ++j) {  // xi的取值为1~m
//                cur_answer += C[i] * j;
//                res.push_back(j + 1);
//                if (back_and_bound(answer, i + 1, cur_answer)) // 递归
//                    return true;    // 有解，一路返回true
//                res.pop_back();  // 无解，继续回溯
//                cur_answer =cur_answer- C[i] * j;
//            }
//    return false;
//}
//
//int main(){
//    scanf("%d %d %d",&n,&m,&b);
//    int sum=0;
//    for (int i = 0; i < n; ++i) {
//        scanf("%d",&C[i]);
//        sum+=C[i];
//    }
//    bool ifsolve= false;
//
//    if (sum>b||m*sum<b){//无解
//        printf("-1\n");
//        return 0;
//    }
//    else if(b % sum == 0){//有解，且x_i刚好相等
//        int res=b/sum;
//        for (int i = 0; i < n; ++i){
//            printf("%d ",res);
//        }
//        printf("\n");
//        return 0;
//    }
//    else{
//        ifsolve=back_and_bound(b-sum,0,0);
//        if (ifsolve){
//            while (res.size()<n)
//                res.push_back(1);
//            for (int i = 0; i < n; ++i) {
//                printf("%d ",res[i]);
//            }
//        }
//        else
//            printf("-1\n");//无解
//    }
//}