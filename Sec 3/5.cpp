//#include <iostream>
//typedef long long ll;
//using namespace std;
//ll A,B,num;
//ll fastPower(ll A, ll B, ll num){
//    ll result = 1 % num;
//    while(B){
//        if(B&1){//&是“位与”运算，二进制数每位对应相乘，然后相加
//            result = result * A % num;
//        }
//        A = A * A % num;
//        B>>=1;
//    }
//    return result;
//}
//
//int main(){
//    int t;
//    cin>>t;
//    for (int i = 0; i < t; ++i) {
//        cin>>A>>B>>num;
//        cout << fastPower(A,B,num) << endl;
//    }
//}