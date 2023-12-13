//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//const int n=8;
//int res[n];//用来存放结果的数组
//int num[n];
//int main(){
//    while (~scanf("%d",&num[0])){
//        for (int i = 1; i < n; ++i) {
//            scanf("%d",&num[i]);
//        }
//        sort(num,num+n);
//        int left=n/2-1;
//        int right=n/2;
//        int i = n-1;
//        while (left>=0&&right<n&&i>=0){
//            res[left--]=num[i--];
//            res[right++]=num[i--];
//        }
//
//        int result=res[0]*res[1]+res[n-2]*res[n-1];
//        for (int i = 1; i <=n-2 ; ++i) {
//            result+=res[i-1]*res[i]*res[i+1];
//        }
//        printf("%d\n",result);
//    }
//}