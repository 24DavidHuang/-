//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//void Solve(long long max_sum,int x, int n,long long &e)
//{
//    if(n>0){
//        max_sum+=x*max_sum;
//        Solve(max_sum,x, n-1,e);
//    }
//    else if(n==0){
//        e=max_sum;
//    }
//}
//int main()
//{
//    long long x, n;
//    while(scanf("%lld%lld", &x, &n) != EOF)
//    {   long long max_sum=1;
//        long long e;
//        Solve(max_sum,x, n,e);
//        printf("%lld\n", e);
//    }
//    return 0;
//}
