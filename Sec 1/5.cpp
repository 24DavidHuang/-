//#include <iostream>
//#include <stdio.h>
//#include <vector>
//#include <string.h>
//using namespace std;
//
//const int N = 9; // 数独棋盘大小
//
//// 定义舞蹈链表的节点结构
//struct Node {
//    Node* left;
//    Node* right;
//    Node* up;
//    Node* down;
//    Node* column;
//    int row;
//};
//
//// 初始化舞蹈链表的头结点
//Node header;
//
//// 数独棋盘
//int board[N][N] = {
//    {5, 3, 0, 0, 7, 0, 0, 0, 0},
//    {6, 0, 0, 1, 9, 5, 0, 0, 0},
//    {0, 9, 8, 0, 0, 0, 0, 6, 0},
//    {8, 0, 0, 0, 6, 0, 0, 0, 3},
//    {4, 0, 0, 8, 0, 3, 0, 0, 1},
//    {7, 0, 0, 0, 2, 0, 0, 0, 6},
//    {0, 6, 0, 0, 0, 0, 2, 8, 0},
//    {0, 0, 0, 4, 1, 9, 0, 0, 5},
//    {0, 0, 0, 0, 8, 0, 0, 7, 9}
//};
//
//// 转换行、列、数字到舞蹈链表中的索引
//int getRowIndex(int row, int col, int res) {
//    return (row * N * N + col * N + res);
//}
//
//int getColumnIndex(int row, int col, int res) {
//    return (row * N * N + col * N + res);
//}
//
//int getBoxIndex(int row, int col, int res) {
//    return (row / 3 * 3 + col / 3) * N + res - 1;
//}
//
//// 初始化舞蹈链表
//void initDancingLinks() {
//    // 初始化头结点
//    header.left = &header;
//    header.right = &header;
//    header.up = &header;
//    header.down = &header;
//    header.column = &header;
//
//    // 创建每个列的头结点
//    std::vector<Node*> columns(N * N * 4);
//    for (int i = 0; i < N * N * 4; i++) {
//        Node* node = new Node;
//        node->left = &header;
//        node->right = &header;
//        node->up = node;
//        node->down = node;
//        node->column = node;
//        columns[i] = node;
//    }
//
//    // 创建每个单元格的节点
//    std::vector<std::vector<Node*>> nodes(N * N * N);
//    for (int row = 0; row < N; row++) {
//        for (int col = 0; col < N; col++) {
//            for (int res = 0; res < N; res++) {
//                int box = getBoxIndex(row, col, res + 1);
//
//                Node* node = new Node;
//                node->left = nodes[row * N + col][res];
//                node->right = nodes[row * N + col][(res + 1) % N];
//                node->up = columns[getColumnIndex(row, col, res)];
//                node->down = columns[getColumnIndex(row, col, res)];
//                node->column = columns[getColumnIndex(row, col, res)];
//
//                node->left->right = node;
//                node->right->left = node;
//                node->up->down = node;
//                node->down->up = node;
//                node->column->up->down = node;
//                node->down->up = node;
//                node->row = row * N + col;
//
//                nodes[row * N + col].push_back(node);
//            }
//        }
//    }
//
//    // 连接列的链表
//    for (int i = 0; i < N * N * 4; i++) {
//        Node* prev = columns[i];
//        Node* curr = columns[i]->down;
//        while (curr != columns[i]) {
//            curr->left->right = curr;
//            curr->right->left = curr;
//            curr->up->down = curr;
//            curr->down->up = curr;
//
//            curr->column = columns[i];
//
//            curr = curr->down;
//        }
//
//        prev->left = curr->left;
//        curr->left->right = prev;
//        prev->right = curr;
//        curr->left = prev;
//    }
//}
//
//// 选择一个列节点
//Node* selectColumnNode() {
//    Node* node = header.right;
//    int size = INT_MAX;
//
//    while (node != &header) {
//        if (node->column->up->down == node->column && node->column->down->up == node->column) {
//            return node;
//        }
//        if (node->column->up->down == node->column && node->column->down->up != node->column) {
//            size = node->column->down->up->row;
//            node = node->right;
//            continue;
//        }
//        if (node->column->up->down != node->column && node->column->down->up == node->column) {
//            size = node->column->up->down->row;
//            node = node->right;
//            continue;
//        }
//        if (node->column->up->down != node->column && node->column->down->up != node->column) {
//            int upSize = node->column->up->down->row;
//            int downSize = node->column->down->up->row;
//            size = (upSize < downSize) ? upSize : downSize;
//            node = node->right;
//            continue;
//        }
//    }
//
//    return node;
//}
//
//// 移除列节点及其相关行节点
//void coverColumnNode(Node* column) {
//    column->right->left = column->left;
//    column->left->right = column->right;
//
//    Node* rowNode = column->down;
//    while (rowNode != column) {
//        Node* curr = rowNode->right;
//        while (curr != rowNode) {
//            curr->down->up = curr->up;
//            curr->up->down = curr->down;
//
//            curr->column->up->down = curr->column;
//            curr->column->down->up = curr->column;
//
//            curr = curr->right;
//        }
//
//        rowNode = rowNode->down;
//    }
//}
//
//// 恢复列节点及其相关行节点
//void uncoverColumnNode(Node* column) {
//    Node* rowNode = column->up;
//    while (rowNode != column) {
//        Node* curr = rowNode->left;
//        while (curr != rowNode) {
//            curr->column->up->down = curr;
//            curr->column->down->up = curr;
//
//            curr->down->up = curr;
//            curr->up->down = curr;
//
//            curr = curr->left;
//        }
//
//        rowNode = rowNode->up;
//    }
//
//    column->right->left = column;
//    column->left->right = column;
//}
//
//// 解决数独问题
//bool solveSudoku() {
//    if (header.right == &header) {
//        return true;
//    }
//
//    Node* column = selectColumnNode();
//    coverColumnNode(column);
//
//    Node* rowNode = column->down;
//    while (rowNode != column) {
//        Node* curr = rowNode->right;
//        while (curr != rowNode) {
//            coverColumnNode(curr->column);
//            curr = curr->right;
//        }
//
//        if (solveSudoku()) {
//            return true;
//        }
//
//        Node* prev = rowNode->left;
//        while (prev != rowNode) {
//            uncoverColumnNode(prev->column);
//            prev = prev->left;
//        }
//
//        rowNode = rowNode->down;
//    }
//
//    uncoverColumnNode(column);
//
//    return false;
//}
//
//// 打印解决的数独棋盘
//void printSudoku() {
//    Node* curr = header.right;
//    while (curr != &header) {
//        int row = curr->row / N;
//        int col = curr->row % N;
//        int res = curr->row % N + 1;
//        board[row][col] = res;
//        curr = curr->right;
//    }
//
//    for (int row = 0; row < N; row++) {
//        for (int col = 0; col < N; col++) {
//            std::cout << board[row][col] << " ";
//        }
//        std::cout << std::endl;
//    }
//}
//
//int main() {
//    initDancingLinks();
//
//    if (solveSudoku()) {
//        std::cout << "Sudoku Solved:" << std::endl;
//        printSudoku();
//    } else {
//        std::cout << "No solution found." << std::endl;
//    }
//
//    return 0;
//}