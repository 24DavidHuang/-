//#include <iostream>
//using namespace std;
//struct Pair{
//    int num;
//    int dir=-1;
//}arr[10];
//// 交换
//void swap(Pair arr[], int start, int end) {
//    int temp_num = arr[start].num;
//    arr[start].num = arr[end].num;
//    arr[end].num = temp_num;
//    //左右判断也要更换
//    int temp_dir = arr[start].dir;
//    arr[start].dir = arr[end].dir;
//    arr[end].dir = temp_dir;
//}
//
//void Print(Pair *arr, int n) {
//    printf("\n");
//    for (int i = 0; i < n; ++i) {
//        //printf("%d (%d)",arr[i].num,arr[i].dir);
//        printf("%d ",arr[i].num);
//    }
//}
//
//int Findmax_index(Pair *arr,int n){
//    int m=0;
//    int m_index=n+1;
//    for (int i = 0; i<n; ++i) {
//        if ((i+arr[i].dir)>=0 && (i+arr[i].dir)<n  && arr[i].num > arr[i+arr[i].dir].num){
//            if (arr[i].num>m){
//                m=arr[i].num;
//                m_index=i;
//            }
//        }
//    }
//    return m_index;
//}
////书上代码逻辑有问题，应该是
//// 1、找出第一个m_index
////2、交换
//// 3、找m_index
//// 4、更换所有p>m的方向
////2-4重复
//void Move(Pair *arr,int n){
//    int m_index= Findmax_index(arr,n);//1.
//        while (m_index!=n+1){
//            //2
//            swap(arr,m_index + arr[m_index].dir,m_index);
//            //3.
//            m_index=Findmax_index(arr,n);
//            //4.
//            for (int i = 0; i < n; ++i) {
//                if (arr[i].num>arr[m_index].num){
//                    arr[i].dir =arr[i].dir*(-1);
//                }
//            }
//            //输出
//            Print(arr,n);
//        }
//}
//
//int main(){
//    int n;
//    bool enter=false;
//    while (scanf("%d",&n)!=EOF){
//        for (int i = 0; i < n; ++i) {
//            scanf("%d",&arr[i].num);
//            arr[i].dir=-1;
//        }
//
//        if (enter== false)
//            enter=true;
//        else
//            printf("\n");
//
//        for (int i = 0; i < n; ++i) {
//            printf("%d ",arr[i].num);
//        }
//        Move(arr, n);
//    }
//
//}