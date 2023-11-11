//#include <stdio.h>
//using namespace std;
//typedef long long ll;
//const ll mod=1e9+7;
//const int MAX=2000;
//int range[10];
//int n,r;
//ll dp[MAX][MAX];
//void Count()
//{
//    for (int i = 0; i < MAX; i++) {
//        for (int j = 0; j<=i ; j++) {
//            if(j > i - j) dp[i][j] = dp[i][i - j];//不用重复计算
//            else if(j==0) dp[i][j] = 1;
//            else if  (j == 1) dp[i][j] =i;//对于（j==1），dp[i][j]的值为i
//            else dp[i][j]=(dp[i - 1][j] + dp[i - 1][j - 1]) % mod;
//        }
//    }
//}
//
//ll res;
//ll temp[10];
//void method(ll i,ll j,ll len) {//递归方法
//    i++;//确定第i层循环
//    for(ll k=j;k<n;k++) {
//        temp[i-1]=k;//每一层循环都将抽取一个数字，记录其下标
//
//        if(i!=len) {//深入到下一层循环
//            j++;//在前一循环初始条件的基础上+1
//            method(i,j,len);
//        }else {
//            ll add=0;
//            for (int l = 0; l < len; ++l) {
//                add+=range[temp[l]];
//            }
//            if (add>r)
//                continue;
//            else
//                res= (res + dp[r - add + n - 1][r - add]) % mod;
//        }
//    }
//}//结束method方法
//int main(){
//    Count();
//    while (~scanf("%d %d",&n,&r)){
//        int flag=1;
//        for (int i = 0; i <n ; ++i) {
//            scanf("%d",&range[i]);
//            range[i]+=1;
//        }
//
//        ll result= dp[r + n - 1][n - 1] % mod;
//
//        for (int i = 0; i < n; ++i) {
//            res=0;
//            for (int j = 0; j < 10; ++j) {
//                temp[j]=0;
//            }
//
//            method(0,0,i+1);
//            flag*=(-1);
//            result=(result+flag*res + mod) %mod;
//        }
//        printf("%lld\n",result);
//    }
//}