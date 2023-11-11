//#include <stdio.h>
//void Count_Binary(int n, int r,bool &enter) {
//    int max_binary = (1 << n) - 1; //最大n位二进制，全为1
//    for (int i = 0; i <= max_binary; i++) {
//        int curBinary = i;
//        int ones = 0;//记录有多少位为1
//        for (int j = 0; j < n; j++) {//检查每一位是否为1
//            if (curBinary & 1) {
//                ones++;
//            }
//            curBinary >>= 1;
//        }
//        if (ones == r) {//如果ones==r，数量够了直接输出
//            curBinary = i;
//            if (enter==false)
//                enter= true;
//            else
//                printf("\n");
//            for (int j = 0; j < n; j++) {
//                if (curBinary & 1) {
//                    printf("%d ", j + 1);
//                }
//                curBinary >>= 1;
//            }
//
//        }
//    }
//}
//
//int main() {
//    int n, r;
//    bool enter=false;
//    while (scanf("%d %d", &n, &r)!=EOF){
//        Count_Binary(n, r,enter);
//    }
//    return 0;
//}

