//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//#include <vector>
//using namespace std;
//
//
//void change(vector<int>& num,int left,int right){
//    int length=right-left+1;
//    if (length<3) {
//        return;
//    }
//
//    int mid=(left+right)/2;
//    int in_begin=left+1;
//    for (int j = 2; j <length; j=j+2) {
//        int ji=num[left+j];
//        num.erase(num.begin()+left+j);
//        num.insert(num.begin()+in_begin,ji);
//        in_begin++;
//    }
//
//    change(num,left,mid);
//    change(num,mid+1,right);
//
//}
//
//int main(){
//    int n;
//    cin>>n;
//    vector<int> num(n);
//    for (int i = 0; i < n; ++i) {
//        cin>>num[i];
//    }
//    change(num,0,n-1);
//    for (int i = 0; i < n; ++i) {
//        if(i<n-1)
//            cout<<num[i]<<" ";
//        else
//            cout<<num[i];
//    }
//    cout<<endl;
//}
