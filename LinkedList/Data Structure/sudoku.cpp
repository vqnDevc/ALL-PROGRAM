#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, char val){
        int count = 0;
        for(int i = 0; i < 9; i++){
            if(board[row][i] == val) count++;
            if(board[i][col] == val) count++;
            if(board[(row/3)*3 + i/3][(col/3)*3 + i%3] == val) count++;
        }
        if(count > 3) return false;
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                if(board[i][j] != '.' && !isSafe(board,i,j,board[i][j])){
                    return false;
                }
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<vector<char>> board(9, vector<char>(9));
    for(int i=0;i < board.size(); i++){
        for(int j=0; j<board[i].size();j++){
            cin >> board[i][j];
        }
    }

    if(s.isValidSudoku(board)){
        cout << "TRUE";
    }else{
        cout << "FALSE";
    }

    return 0;
}
