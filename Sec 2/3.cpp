//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//char A[3]={'A','B','C'};
//
//void Hannoi(int n,int start, int end, int aux)//起点，终点，盘子个数
//{
//    //处理递归终点，并递归输出移动过程
//    if (n==1){
//        printf("Move disk 1 from %c to %c\n",A[start],A[end]);
//        return;
//    }
//    //如果超过一个盘子，先将n-1个盘子转移到辅助柱子，
//    // 然后将剩下的那一个盘转移到end柱子，
//    // 最后将辅助柱子上的n-1个盘转移到end柱子
//    else{
//        Hannoi(n-1, start, aux, end);
//        printf("Move disk %d from %c to %c\n", n,A[start],A[end]);
//        Hannoi(n-1, aux, end, start);
//    }
//}
//int main()
//{
//    int n;
//    while(scanf("%d", &n) != EOF)
//        Hannoi(n,0, 2, 1); //从0号柱子转移n个盘子到2号柱子
//    return 0;
//}
//
