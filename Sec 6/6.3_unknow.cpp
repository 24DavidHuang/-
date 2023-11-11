//#include <stdio.h>
//#include <string.h>
//#include <cmath>
//#define MAXN 1000000
//char num[MAXN];
//int main() {
//    while (scanf("%s",num)!=EOF){
//        int len = strlen(num);
//        int o_len=len;
//        for (int i = 1; i < o_len; i++) {
//            int j = 0;
//            for (int k = 0; k < len - 1; k++) {
//                num[j++] = abs(num[k] - num[k+1]) + '0';
//            }
//            len--;
//        }
//        printf("%c\n", num[0]);
//    }
//}










//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#define MAXN 100001
//int main()
//{
//    char* str;
//    int len, result, q, p;
//    str = (char*)malloc(sizeof(char) * (MAXN + 1));
//    while (scanf("%s", str) != EOF) {
//        len = strlen(str) - 1;
//        result = 0;
//        for (int i = 0; i <= len; i++) {
//            q = len;p = i;
//            while ((q & 1) >= (p & 1) && q != 0 && p != 0) {
//                q >>= 1;p >>= 1;
//            }
//            if (p == 0) {
//                result ^= str[i] - '0';
//            }
//        }
//        printf("%d\n", result);
//    }
//}
