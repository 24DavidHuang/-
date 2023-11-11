// Ackermann函数（阿克曼函数）的递归实现算法
#include <iostream>
const int mod=1000000009;
using namespace std;

int ackermann(int m, int n);

//int main()
//{
//    int m, n = 0;
//
//    cin >> m;
//    cin >> n;
//
//    cout << "A(m, n) = " << ackermann(m, n) << endl;
//
//    return 0;
//}

int ackermann(int m, int n)
{
    if (m == 0)
        return (n + 1)%mod;
    else if (m > 0 && n == 0)
        return ackermann(m - 1, 1)%mod;
    else // else if (m > 0 && n > 0)
        return ackermann(m - 1, ackermann(m, n - 1)%mod)%mod;
}

