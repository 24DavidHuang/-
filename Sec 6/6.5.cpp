#include <stdio.h>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
const int maxn = 1000001;
int dp[maxn], tp;//dp 数组用于存储递增子序列的最后一个元素，tp 表示当前子序列的长度。
ll arr[maxn];
int LIS(ll a[], int n)
{
    tp = -1;
    for(int i = 0; i < n; i ++)
    {
        int dpIth;//dpIth 表示当前元素在 dp 数组中的位置。
        if(tp == -1 || dp[tp] < a[i])
            dp[++ tp] = a[i];
        else if(dp[tp] > a[i]){
            dpIth =upper_bound(dp, dp + tp + 1, a[i]) - dp;//使用 upper_bound 函数找到 dp 数组中第一个大于当前元素的位置
            if(dpIth == 0 || dp[dpIth - 1] < a[i])
                dp[dpIth] = a[i];
        }
    }
    return tp + 1;
}

int main() {
    int n,b;
    while (scanf("%d %d", &n,&b)!=EOF) {
//        ll *arr = (ll*)malloc(n * sizeof(ll));
        arr[0]=b;
        for (int i = 1; i < n; i++) {
            arr[i] = 1LL * (arr[i - 1] + 1) * (arr[i - 1] + 1) % mod;
        }
        int result = LIS(arr, n);
        printf("%d\n", result);
    }
}