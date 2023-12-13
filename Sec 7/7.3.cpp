//#include <stdio.h>
//#include <iostream>
//using namespace std;
//// 计算至少需要的纸币张数并输出方案
//void calculateMinimumCoins(int value) {
//    int money[] = {100, 50, 20, 10, 5, 2, 1};
//    int nummoney = sizeof(money) / sizeof(money[0]);//计算种类
//    int finalres=value;//保存输入的最终结果
//    int finalnum=0;//用于计算最终的纸币数
//    string s="";//字符串的输出
//    for (int i = 0; i < nummoney; i++) {//从最大的开始，先尽量用100填满
//        int numCoins = value / money[i];
//        value %= money[i];
//        if (numCoins > 0) {
//            if (numCoins > 1){
//                s=s + to_string(money[i])+ "*"+ to_string(numCoins);
//                finalnum+=numCoins;
//            }
//            else{
//                s=s + to_string(money[i]);
//                finalnum+=1;
//            }
//            if (value > 0) {//还不够，要接着填
//                s=s +"+";
//            }
//        }
//    }
//    s=s+"="+ to_string(finalres);
//    cout<<finalnum<<' '<<s<<endl;
//}
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) {
//        calculateMinimumCoins(n);
//    }
//}
//
