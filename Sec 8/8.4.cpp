////贪心算法正确性证明，本质是数学归纳递推，利用命题3：
//// vk+1 = pvk − δ ⇒ p = 3,δ = 1
////1 + G[2,δ] = 1 + 1 = 2 ≤ 3 = p
////若1 + G[2,δ]>p 则贪心算法不成立
//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//#include<math.h>
//using namespace std;
//int money[1001];
//bool cmp(int x, int y) {
//    if (x <= y) {
//        return true;
//    } else
//        return false;
//}
//// 计算至少需要的纸币张数并输出方案
//int calculateMinimumCoins(int value,int nummoney) {
//    int tempmoney[nummoney];
//    for (int i = nummoney-1; i >=0 ; --i) {
//        tempmoney[nummoney - 1 - i]=money[i];
//    }
//    int finalnum=0;//用于计算最终的纸币数
//    for (int i = 0; i < nummoney; i++) {//从最大的开始，先尽量填满
//        int numCoins = value / tempmoney[i];
//        value %= tempmoney[i];
//        if (numCoins > 0) {
//            if (numCoins > 1){
//                finalnum+=numCoins;
//            }
//            else{
//                finalnum+=1;
//            }
//        }
//    }
//    return finalnum;
//}
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) {
//        for (int i = 0; i < n; ++i) {
//            scanf("%d",&money[i]);
//        }
//        money[n]=1;
//        sort(money,money+n+1,cmp);
//        int flag=0;
//        for (int k=3; k <= n+1; ++k) {
//            int p= (money[k-1]-1) /money[k-2] +1;
//            int theta=p*money[k-2]-money[k-1];
//            if (1+calculateMinimumCoins(theta,k-1)>p){
//                flag=1;
//                break;
//            }
//        }
//        if (flag==0)
//            printf("yes\n");
//        else
//            printf("no\n");
//    }
//}
//
