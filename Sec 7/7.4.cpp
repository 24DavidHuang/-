#include <stdio.h>
#define MAXN 9 // 最大棋盘大小
int n;
int board[MAXN][MAXN];
bool isvisit[MAXN][MAXN];
int JC[11];
void Init(){
    JC[1]=1;
    for (int i = 2; i <=10 ; ++i) {
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

int res;//结果数
void DFS(int x, int maxsize) // 深度优先搜索的函数
{
    if (x == maxsize) { // 如果已经放置了maxsize个车，说明找到了一个解法
        res++;
        return;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) { // 遍历当前行的所有列
            if (check(i, j)) { // 如果当前位置可以放置车
                isvisit[i][j] = true; // 标记为已访问
                DFS(x + 1, maxsize); // 递归搜索下一行
                isvisit[i][j] = false; // 回溯，取消标记
            }
        }
    }
}

int main(){
    Init();
    while (~scanf("%d",&n)){
        int result=JC[n];
        int flag=1;
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                board[i][j]=0;isvisit[i][j]=false;
            }
        }
        //根据输入初始化棋盘，1表示禁止
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
            DFS(0,i+1);
            flag*=(-1);
            result+=flag*res*JC[n-1-i];
        }
        printf("%d\n",result);
    }
}
