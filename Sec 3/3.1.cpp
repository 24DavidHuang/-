//#include <iostream>
//using namespace std;
//typedef long long ll;
//
//typedef struct CH_Remainder
//{
//    ll result, mod_num;
//}CH_Remainder,ch_remainder[100];
//
//int ex_gcd(ll num, ll b, ll &x, ll &y)       //扩展欧几里得
//{
//    if (!b)
//    {
//        x = 1;
//        y = 0;
//        return num;
//    }
//    ll r = ex_gcd(b, num%b, x, y);
//    ll t = x;
//    x = y;
//    y = t - num / b * y;
//    return r;
//}
//ll mod_reverse(ll num, ll n)//ax=1(mod n) 求a的逆元x
//{
//    ll d, x, y;
//    d = ex_gcd(num, n, x, y);
//    if (d == 1)
//        return (x%n + n) % n;
//    else
//        return -1;
//}
//
//ll Ch_remainder_theorem(ch_remainder num,int n)//主体部分
//{
//    ll k=num[0].mod_num;
//    ll b = 0, z = 0;
//    for (ll i = 1; i<n; i++)
//    {
//        k *= num[i].mod_num;
//    }
//    for (ll i = 0; i<n; i++)
//    {
//        z = mod_reverse(k / num[i].mod_num, num[i].mod_num);//乘法逆元
//        if (z==-1) return -1;
//        b += (num[i].result*(k / num[i].mod_num)*z)%k;
//    }
//    return b % k;
//}
//
//
//
//int main(){
//    int n;
//    while (cin>>n){
//        CH_Remainder ch[n];
//        for (int i = 0; i < n; ++i) {
//            CH_Remainder num;
//            ll mod,res;
//            cin>>res>>mod;
//            num.mod_num=mod;
//            num.result=res;
//            ch[i]=num;
//        }
//        cout <<Ch_remainder_theorem(ch,n) << endl;
//    }
//}
//
