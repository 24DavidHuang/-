
//#include <stdio.h>
//int A[10000000];
//
//int Binary_find(int Q,int N){
//    int begin=1,end=N,mid;
//    while (end>begin){
//        mid=(begin+end)/2;
//        if (Q>A[mid]) {
//            begin=mid+1;
//        }
//        else end=mid;
//    }
//    return end;
//}
//
//int main(){
//    int N,M;
//    scanf("%d%d",&N,&M);
//    for (int i = 1; i <=N; ++i) {
//        scanf("%d",&A[i]);
//        //注意不能用scanf("%d",A[i]);，必须添加 & ，或者使用scanf("%d",A+i);
//    }
//    for (int i = 0; i < M; ++i) {
//        int Q;
//        scanf("%d",&Q);
//        int index=Binary_find(Q,N);
//        printf("%d\n",index);
//    }
//}