//#include <iostream>
//using namespace std;
//int N,M;
//int B[1000000];
//
//void swap(int* A, int* B) {
//    int t = *A;
//    *A = *B;
//    *B = t;
//}
//
//int partition(int arr[], int low, int high) {
//    int pivot = arr[high];
//    int i = (low - 1);
//
//    for (int j = low; j <= high - 1; j++) {
//        if (arr[j] < pivot) {
//            i++;
//            swap(&arr[i], &arr[j]);
//        }
//    }
//    swap(&arr[i + 1], &arr[high]);
//    return (i + 1);
//}
//
//void quickSort(int arr[], int low, int high) {
//    if (low < high) {
//        int pi = partition(arr, low, high);
//        quickSort(arr, low, pi - 1);
//        quickSort(arr, pi + 1, high);
//    }
//}
//
//int Binary_find(int A[],int Q,int N){
//    int begin=0;
//    int end=N-1;
//    int mid=0;
//    while (end>begin){
//        mid=(begin+end)/2;
//        if (A[mid]>=Q) {
//            end=mid;
//        }
//        else{
//            begin=mid+1;
//        }
//    }
//    return end;
//}
//
//int main(){
//    scanf("%d %d",&N,&M);
//    for (int i = 0; i < N; ++i) {
//        int k;
//        cin>>k;
//        B[i]=k;
//    }
//    quickSort(& *B,0,N-1);
//
//    int L,R;
//    for (int j = 0; j < M; ++j) {
//        scanf("%d %d",&L,&R);
//        long long max_sum=0;
//        int L_index= Binary_find(B,L,N);
//        int R_index= Binary_find(B,R,N);
//        for (int i = L_index; i <=R_index; ++i) {
//            max_sum+=B[i];
//        }
//        printf("%lld\N",max_sum);
//    }
//}

//正确方法

//#include <iostream>
//using namespace std;
//
//int N, M;
//long long A[10000005];
//
//int main()
//{
//    scanf("%d %d", &N, &M);
//    for (int i = 1; i <= N; i++)
//    {
//        scanf("%lld", &A[i]);
//        A[i] += A[i - 1];
//    }
//    for (int i = 0; i < M; ++i)
//    {
//        int l, r;
//        scanf("%d %d", &l, &r);
//        printf("%lld\n", A[r] - A[l - 1]);
//    }
//    return 0;
//}