//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//const int maxsize = 1e5 + 10;
//int A[maxsize], mergeTemp[maxsize], n;
//int MergeSort(int left, int right)
//{
//    // TODO: 统计数组 A 上 [left, right) 区间的逆序对个数
//    int count = 0;
//    if (right - left > 1) {
//        int mid = left + (right - left) / 2;
//        count += MergeSort(left, mid);
//        count += MergeSort(mid, right);
//
//        int i = left, j = mid, k = 0;
//        while (i < mid && j < right) {
//            if (A[i] <= A[j]) {
//                mergeTemp[k++] = A[i++];
//            } else {
//                mergeTemp[k++] = A[j++];
//                count += mid - i;
//                //如果a[i]大于a[j]，将a[j]放入mergeTemp中，并将j和k分别加1。此时，由于a[i]大于左子区间中剩余的所有元素，因此逆序对的数量要加上mid - i
//            }
//        }
//
//        while (i < mid) {
//            mergeTemp[k++] = A[i++];
//            //说明左子区间中还有剩余的元素，将这些元素依次放入mergeTemp中，并将i和k加1
//        }
//
//        while (j < right) {
//            mergeTemp[k++] = A[j++];
//            //说明右子区间中还有剩余的元素，将这些元素依次放入mergeTemp中，并将j和k加1。
//        }
//        k=0;//从0开始复制
//        memcpy(A+left, mergeTemp+k, sizeof(int) * (right - left));
//    }
//    return count;
//}
//int main()
//{
//    while(scanf("%d", &n) != EOF)
//    {
//        for(int i = 0; i < n; i ++)
//            scanf("%d", &A[i]);
//        printf("%d\n", MergeSort(0, n));
//    }
//    return 0;
//}

