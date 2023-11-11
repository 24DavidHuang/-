//#include <iostream>
//#include <vector>
//using namespace std;
//
//int Count(vector<int> &res, int index) {
//    int i = 1;
//    while (index > 0||res[i] != 0) {
//        if (res[i] == 0) {
//            index--;
//        }
//        i++;
//    }
//    return i;
//}
//
//int main() {
//    int n;
//    while (cin >> n) {
//        vector<int> res(n + 1);
//        for (int i = 1; i <= n; ++i) {
//            cin >> res[i];
//        }
//        vector<int> res(n + 1);
//
//        for (int i = 1; i <= n; ++i) {
//            int count = Count(res, res[i]);
//            res[count] = i;
//        }
//
//        for (int i = 1; i <= n; ++i) {
//            cout << res[i] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}

