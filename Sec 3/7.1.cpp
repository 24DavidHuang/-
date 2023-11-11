//#include<stdio.h>
//#include<cstring>
//#include<vector>
//#include <iostream>
//using namespace std;
//typedef vector<int> Binarynum;
//const int maxsize = 1e5;
//char str[maxsize];
//Binarynum A, B;
//void Check_num(Binarynum &x)
//{
//    while(!x.empty() && x.back()==0) x.pop_back();
//    int current = 0;
//    for(int i=0;i<x.size();i++)
//    {
//        x[i]+=current;
//        current=x[i] >> 1;x[i]&=1;
//    }
//    for(; current; current>>= 1)x.push_back(current & 1);
//}
//void Print(Binarynum &x)
//{
//    Check_num(x);
//    for(int i = x.size() - 1; i >= 0; i --) printf("%d", x[i]);
//    if(x.empty()) printf("0");
//    printf("\n");
//}
//Binarynum Add(const Binarynum &money, const Binarynum &b, int negFlag=1)
//{
//    Binarynum mix(money);
//    for(int i = 0; i < b.size(); i ++) mix[i] += b[i] * negFlag;
//    return mix;
//}
//Binarynum Minus(const Binarynum &money, const Binarynum &b)
//{
//    return Add(money, b, -1); // 本算法保证了减法结果不小于0
//}
//Binarynum Mul(const Binarynum &money, const Binarynum &b)
//{
//    Binarynum mix;
//    mix.resize(money.size() * b.size() + 1);
//    for(int i = 0; i < money.size(); i ++)
//        for(int j = 0; j < b.size(); j ++){
//            mix[i + j] += money[i] * b[j];
//        }
//    return mix;
//}
//void MulN2(Binarynum &money, int n_2)
//{
//    int i_size = money.size();
//    money.resize(i_size + n_2);
//
//    for(int i=money.size()-1,j= i_size-1;j >= 0;i--,j--)
//        money[i]=money[j];
//    for(int i = n_2 - 1; i >= 0; i--)
//        money[i]=0;
//}
//
//Binarynum FasterMul(const Binarynum &money, const Binarynum &b)
//{
//    if(money.size()<16) return Mul(money,b);
//    int n_2 = money.size() >> 1;
//    Binarynum A(money.begin() + n_2, money.end());Binarynum B(money.begin(), money.begin() + n_2);
//    Binarynum C(b.begin() + n_2, b.end());Binarynum D(b.begin(), b.begin() + n_2);
//    Binarynum A_C = FasterMul(A, C);Binarynum B_D = FasterMul(B, D);
//    // AD+BC = (A+B)*(C+D)-AC-BD，避免减法出现负数
//    Binarynum ADpBC = Minus(Minus(FasterMul(Add(A, B), Add(C, D)), A_C), B_D);
//    MulN2(A_C, n_2 << 1);MulN2(ADpBC, n_2);
//    return Add(Add(A_C, ADpBC), B_D);
//}
//int main()
//{
//    while(scanf("%s", str) != EOF)
//    {
//        A.clear();B.clear();
//        for(int i = strlen(str) - 1; i >= 0; i --)A.push_back(str[i] == '1');
//        scanf("%s", str);
//        for(int i = strlen(str) - 1; i >= 0; i --)B.push_back(str[i] == '1');
//        if(A.size() < B.size())
//            A.resize(B.size(), 0);
//        else
//            B.resize(A.size(), 0);
//        Binarynum res = FasterMul(A, B);
//        Print(res);
//    }
//}