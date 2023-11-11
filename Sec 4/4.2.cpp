//#include<stdio.h>
//#include<cstring>
//#include<vector>
//#include <iostream>
//typedef long long ll;
//using namespace std;
//int money[50000000];
//const int mod=1e9+7;
////输入：50000000 37806862 42999190
////输出：859991792
//int QuickSort(int str[], int left, int right, int index){
//    int l=left,r=right,key=l;//保留原来边界，并选定初始key
//    while (left<right){
//        while (str[right] >= str[key] && right > left){
//            right--;
//        }
//
//        while (str[left] <= str[key] && right > left){
//            left++;
//        }
//        swap(str[left], str[right]);
//    }
//    swap(str[key], str[right]);
//    int pos = right;
//    if (pos == index - 1)
//        return str[pos];
//    else if(pos > index - 1)
//        return QuickSort(str, l, pos - 1, index);
//    else
//        return QuickSort(str, pos + 1, r, index);
//}
//int main(){
//    ll n,m;
//    int k;
//    scanf("%lld %lld %d",&n,&m,&k);
//    money[0] = m;
//    for(int i = 1; i < n; i ++){
//        money[i] = 1LL * money[i - 1] * m % mod;//1LL: int暂时转换为longlong
//    }
//    int res= QuickSort(money,0,n-1,k);
//    printf("%d",res);
//}