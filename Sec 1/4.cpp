//#include <iostream>
//#include <stdio.h>
//#include <vector>
//#include <string.h>
//using namespace std;
//
//bool islegal(vector<vector<char>> &board,char res,int row,int col){
////    行检查
//    for (int i = 0; i < 9; ++i) {
//        if (board[row][i]==res && i!=col) return false;
//    }
////    列检查
//    for (int j = 0; j < 9; ++j) {
//        if (board[j][col]==res && j!=row) return false;
//    }
////3×3小格子检查
//    int start_row=(row/3)*3;
//    int start_col=(col/3)*3;
//    for (int i = start_row; i < start_row+3; ++i) {
//        for (int j = start_col; j < start_col+3; ++j) {
//            if (board[i][j]==res && j!=row && i!=col)
//                return false;
//        }
//    }
//    return true;//通过所有检查，这个位置可以放
//}
//
//bool solve(vector<vector<char>> &board){
//    for (int row = 0; row < 9; ++row) {
//        for (int col = 0; col < 9; ++col) {
//            if (board[row][col]=='.'){
//                for (char res = '1'; res <='9' ; ++res) {
//                    if (islegal(board,res,row,col)) {//当前位置合法，那么从这个条件出发，看看能不能实现数独
//                        board[row][col] = res;
//                        if (solve(board)) return true;
//                        else board[row][col] = '.';//遍历一整遍没成功，那么回溯
//                    }
//                }
//                return false;
//            }
//
//        }
//    }
//    return true;//所有数字都填上了，返回true
//}
//
//int main(){
//    vector<vector<char>> board(9, vector<char>(9));
//    string str;
//        while(getline(cin,str)){
//
//            int k = 0;
//            for (int i = 0; i < 9; i++) {
//                for (int j = 0; j < 9; j++) {
//                    board[i][j] = str[k++];
//                }
//            }
//
//            solve(board);
//
//            for (int i = 0; i < 9; ++i) {
//                for (int j = 0; j < 9; ++j) {
//                    printf("%c", board[i][j]);
//                }
//            }
//            printf("\n");
//    }
//}