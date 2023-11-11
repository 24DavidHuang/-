//#include<stdio.h>
//#include <algorithm>
//#include <climits>
//#include <cmath>
//using namespace std;
//struct Node{
//    double x;
//    double y;
//    int id;
//};
//Node point[100003];
//
//int A=INT_MAX;
//int B=INT_MAX;
//int ans=INT_MAX;
//int temp[300005];
//double distance(Node money, Node b){
//    return (money.x - b.x) * (money.x - b.x) + (money.y - b.y) * (money.y - b.y);
//}
////按照x坐标升序，排序后分左右平面
//bool comparex(Node money, Node b)
//{
//    if (money.x == b.x){
//        return money.y < b.y;
//    }
//    else return money.x < b.x;
//}
//bool comparey(int idA, int idB)
//{
//    return point[idA].y < point[idB].y;
//}
//
//void Update(int id_A, int id_B, int temp_ans){
//    if (id_A > id_B)
//        swap(id_A, id_B);//两个点的编号id必须小的在前
//    if (temp_ans == ans){
//        if ( id_A<A || A == id_A && id_B<B){
//            A = id_A;
//            B = id_B;
//        }
//    }
//    else{
//        A = id_A;
//        B = id_B;
//        ans= temp_ans;
//    }
//}
//void MiniDistance(int left, int right)
//{
//    if (left == right)return;//如果自己和自己的距离最近，则距离为0，应该返回
//    if (left+1 == right)//两点挨着
//    {
//        int res=distance(point[left], point[right]);
//        if (ans>=res)
//            Update(point[left].id,point[right].id,res);
//        return;
//    }
//
//    int mid=(left+right)/2;
//    //递归分治
//    MiniDistance(left, mid-1);//左边
//    MiniDistance(mid, right);//右边
//    int index = 0;//记录序号
//    for (int i = left; i <= right; i++)
//    {
//        if (fabs(point[mid].x - point[i].x) <= ans)
//            temp[++index]=i;
//    }
//    sort(temp + 1, temp + index + 1, comparey);//按y坐标升序排列
//    //线性扫描
//    for (int i = 1; i <= index; i++){
//        for (int j = i + 1; j <= index && point[temp[j]].y - point[temp[i]].y <= ans; j++){
//            if (ans >= distance(point[temp[i]], point[temp[j]])){
//                int new_distance = distance(point[temp[i]], point[temp[j]]);
//                Update(point[temp[i]].id, point[temp[j]].id, new_distance);
//            }
//        }
//    }
//    return;
//}
//
//int main(){
//    int n;
//    scanf("%d",&n);
//    for (int i = 1; i <= n; i++){
//        scanf("%lf %lf", &point[i].x, &point[i].y);
//        point[i].id = i - 1;
//    }
//    sort(point+1,point+n+1,comparex);//按x坐标排序
//    MiniDistance(1, n);
//    printf("%d %d",A,B);
//}