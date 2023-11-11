#include <stdio.h>
#define MAXN 9 // 最大棋盘大小
typedef long long ll;
int n;
int board[MAXN][MAXN];
bool isvisit[MAXN][MAXN];
ll JC[11];
void Init(){
    JC[0]=1;
    JC[1]=1;
    for (ll i = 2; i <=10 ; ++i) {
        JC[i]=i*JC[i-1];
    }
}
bool check(int x, int y)
{
    if (isvisit[x][y] || board[x][y]==0)return false;
    else{
        for (int i = 0; i < n; ++i) {
            if (isvisit[x][i])return false;
            if (isvisit[i][y])return false;
        }
    }
    return true;
}

ll res;//结果数
void DFS(int x,int y, int size,int maxsize){
    if (size == maxsize){
        res++;
        return;
    }
    if (x > n-1)
        return;
    if (y > n-1){
        DFS(x + 1, 0, size, maxsize);
        return;
    }
    if (check(x, y))
    {
        isvisit[x][y] = true;
        DFS(x, y + 1, size + 1, maxsize);
        isvisit[x][y] = false;
    }
    DFS(x, y + 1, size, maxsize);
}

int main(){
    Init();
    while (~scanf("%d",&n)){
        ll result=JC[n];
        int flag=1;
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                board[i][j]=0;isvisit[i][j]=false;
            }
        }
        //根据输入初始化棋盘，1表示禁止放置的位置
        for (int i = 0; i < n; ++i) {
            int size;
            scanf("%d",&size);
            if (size==0)continue;
            for (int j = 0; j < size; ++j) {
                int col;
                scanf("%d",&col);
                board[i][col-1]=1;
            }
        }
        for (int i = 0; i < n; ++i) {
            res=0;
            DFS(0,0,0,i+1);
            flag*=(-1);
            result+=flag*res*JC[n-1-i];
        }
        printf("%lld\n",result);
    }
}
