//#include<stdio.h>
//#include<string.h>
//int max(int X, int Y)
//{
//    return X > Y ? X : Y;
//}
//int n, money;
//int main()
//{
//    int num[2][2];
//    while(scanf("%d", &n) != EOF)
//    {
//        memset(num, 0, sizeof(num));
//        for(int i = 0; i < n; i ++)
//        {
//            scanf("%d", &money);
//            num[i&1][0] = max(num[~i&1][1], num[~i&1][0]);
//            num[i&1][1] = num[~i&1][0] + money;
//        }
//        printf("%d\n", max(num[~n&1][0],num[~n&1][1]));
//    }
//}