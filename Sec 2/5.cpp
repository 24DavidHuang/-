//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//const int mod = 100003;
//int n, k;
//int ans[1111111];
//int main()
//{
//    while(scanf("%d%d", &n, &k) != EOF)
//    {
//        ans[0] = 1;
//
//        for (int i = 1; i <= n; i++) {
//            ans[i] = 0;
//            for (int j = 1; j <= k && j <= i; j++) {
//                ans[i] = (ans[i] + ans[i-j]) % mod;
//            }
//        }
//
//        printf("%d\n", ans[n]);
//    }
//    return 0;
//}