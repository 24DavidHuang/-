//#include <iostream>
//#include <math.h>
//#include <algorithm>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//int main(){
//    int N;
//    while (cin>>N){
//        queue<long long>A;
//        queue<char>opt;
//
//        for (int i = 0; i < N; ++i) {
//            int k;
//            cin>>k;
//            A.push(k);
//        }
//        for (int i = 0; i < N-1; ++i) {
//            char k;
//            cin>>k;
//            opt.push(k);
//        }
//
//        long long num1,num2,num3;
//        char opt1,opt2;
//
//        num1=A.front();
//        A.pop();
//        num2=A.front();
//        A.pop();
//        opt1=opt.front();
//        opt.pop();
//
//        for (int i = 0; i < N; ++i) {
//            if(A.size()==0){
//
//                if (opt1=='+'){
//                    A.push(num1+num2);
//                    break;
//                }
//                else if (opt1=='-'){
//                    A.push(num1-num2);
//                    break;
//                }
//                else if (opt1=='*'){
//                    A.push(num1*num2);
//                    break;
//                }
//            }
//            else {
//                num3=A.front();
//                A.pop();
//
//                opt2=opt.front();
//                opt.pop();
//
//                if (opt1=='*'){
//                    num1=num1*num2;
//                    num2=num3;
//                    opt1=opt2;
//                }
//                else if (opt1=='+' && opt2!='*'){
//                    num1=num1+num2;
//                    num2=num3;
//                    opt1=opt2;
//                }
//                else if (opt1=='-' && opt2!='*'){
//                    num1=num1-num2;
//                    num2=num3;
//                    opt1=opt2;
//                }
//                else{
//                    num2=num2*num3;
//                }
//
//            }
//        }
//        printf("%lld\N",A.front());
//    }
//}
