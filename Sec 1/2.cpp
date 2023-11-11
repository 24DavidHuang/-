//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//using namespace std;

//int main(){
//    int m,n;
//    while (scanf("%d %d",&n,&m)!=EOF){
//        int** A = new int*[n];
//        for (int i = 0; i < n; i++) {
//            A[i] = new int[n];
//            // 将数组元素设为0
//            for (int j = 0; j < n; j++) {
//                A[i][j] = 0;
//            }
//        }
//
//        int i=0;
//        int j=(n-1)/2;
//
//        int value=1;
//        A[i][j]=value;
//
//        while (value < pow(n,2)) {
//            if(i-1<0) {
//                if (A[n-1][(j+1)%n] != 0)
//                    A[(++i)%n][j%n] = ++value;
//                else{
//                    i=n-1;
//                    A[i][(++j)%n]=++value;
//                }
//            }
//            else{
//                if (A[i-1][(j+1)%n]!=0)
//                    A[(++i)%n][(j)%n] = ++value;
//                else
//                    A[--i][(++j)%n]=++value;
//            }
//
//        }
//        for (int k = 0; k < m; ++k) {
//            int h,l;
//            scanf("%d %d",&h,&l);
//            printf("%d\n",A[h-1][l-1]);
//        }
//    }
//
//}
