//#include <iostream>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
//int main(){
//    stack<char>s;
//    string str;
//    int flag=0;
//    while (cin>>str){
//        for (int i = 0; i < str.length(); ++i) {
//            if (str[i]=='('||str[i]=='{'||str[i]=='[')
//                s.push(str[i]);
//            else if(str[i]==')'||str[i]==']'||str[i]=='}'){
//                if (s.empty()){
//                    flag=1;
//                    break;
//                }
//
//                if (s.top()=='('&&str[i]!=')'  ||  s.top()=='['&&str[i]!=']'  ||  s.top()=='{'&&str[i]!='}'){
//                    flag=1;
//                    break;
//                }
//                s.pop();
//            }
//            else continue;
//        }
//        if (!s.empty()||flag==1)printf("No\N");
//        else printf("Yes\N");
//    }
//}
