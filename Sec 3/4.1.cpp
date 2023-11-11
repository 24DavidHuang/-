//#include <iostream>
//#include <vector>
//
//void rearrangeArray(std::vector<int>& arr) {
//    int n = arr.size();
//    int i = 0, j = n - 1;
//    while (i < j) {
//        // 如果当前元素是奇数位置
//        if (i % 2 == 0) {
//            // 如果是偶数位置的元素，则跳过
//            if (j % 2 == 1) {
//                j--;
//                continue;
//            }
//            // 如果是奇数位置的元素，则交换
//            std::swap(arr[i], arr[j]);
//            i += 2;
//            j -= 2;
//        } else {
//            // 如果当前元素是偶数位置
//            // 如果是奇数位置的元素，则跳过
//            if (j % 2 == 0) {
//                i++;
//                continue;
//            }
//            // 如果是偶数位置的元素，则交换
//            std::swap(arr[i], arr[j]);
//            i += 2;
//            j -= 2;
//        }
//    }
//}
//
//int main() {
//    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//    rearrangeArray(arr);
//
//    // 打印结果
//    for (int num : arr) {
//        std::cout << num << " ";
//    }
//
//    return 0;
//}