//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//typedef struct Node{
//    int x,y,high;
//}Node;
//Node cube[400];
//int joni[400][400];
//int dp[400];//����dp[i]Ϊ��i������Ϊ����߶ѵ��߶��Ƕ���
//int dfs(int i,int total){
//    if(dp[i]!=-1){
//        return dp[i];
//    }
//    dp[i]=cube[i].high;//��ʼ��
//    for(int j=1;j<=total;j++){
//        if(joni[i][j]){//���j�������ܷ���i��������
//            dp[i]=max(dp[i], dfs(j,total) + cube[i].high);
//        }
//    }
//    return dp[i];
//}
//bool check(int i,int j){
//    if( (cube[i].x > cube[j].x && cube[i].y > cube[j].y) || (cube[i].x > cube[j].y && cube[i].y > cube[j].x))
//        return true;
//    else
//        return false;
//}
//void Init(int total){
//    for(int i=1; i <= total; i++){
//        for(int j=1; j <= total; j++){
//            if(check(i,j)){//����±�Ϊj���������ܷ����±�Ϊi����������
//                joni[i][j]=1;
//            }
//        }
//    }
//}
//int main(){
//    int n;
//    while((scanf("%d",&n))!=EOF){
//        int j=1;
//        int total= 3 * n;
//        int res=0;
//        for(int i=1;i<=n;i++){
//            int x,y,high;
//            scanf("%d%d%d",&x,&y,&high);
//            //�����������
//            cube[j].x=y;cube[j].y=high;cube[j].high=x;
//            j++;
//            cube[j].x=high;cube[j].y=x;cube[j].high=y;
//            j++;
//            cube[j].x=x;cube[j].y=y;cube[j].high=high;
//            j++;
//        }
//        memset(joni, 0, sizeof(joni));//��ʼ��
//        Init(total);
//
//        memset(dp,-1,sizeof(dp));//��ʼ��
//        for(int i=1; i <= total; i++){
//            res=max(res, dfs(i,total));//�õ�������
//        }
//        printf("%d\n", res);
//    }
//}