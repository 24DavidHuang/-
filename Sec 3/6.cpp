//#include <iostream>
//typedef long long ll;
//using namespace std;
//const int mod = 1e9 + 7;
//ll n;
//struct Matrix{
//    ll a11, a12, a21, a22;
//    Matrix(ll a11,ll a12,ll a21,ll a22):a11(a11),a12(a12),a21(a21),a22(a22){}
//    Matrix operator*(const Matrix &y){
//        Matrix ans((a11 * y.a11 + a12 * y.a21) % mod,
//                   (a11 * y.a12 + a12 * y.a22) % mod,
//                   (a21 * y.a11 + a22 * y.a21) % mod,
//                   (a21 * y.a12 + a22 * y.a22) % mod);
//        return ans;
//    }
//};
//Matrix qpow(Matrix A, ll n)
//{
//    Matrix ans(1, 0, 0, 1); //单位矩阵
//    while (n)
//    {
//        if (n & 1)
//            ans = ans * A;
//        A = A * A;
//        n >>= 1;
//    }
//    return ans;
//}
//int main(){
//    Matrix m(0,1,1,1);//斐波那契迭代矩阵
//    while (cin>>n){
//        Matrix res= qpow(m,n-1);
//        printf("%lld\n", (res.a11 + res.a12) % mod);
//    }
//}