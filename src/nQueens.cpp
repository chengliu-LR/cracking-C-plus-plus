#include <iostream>
#include <vector>

using namespace std;
// *use board as reference here can significantly increase the speed, avoiding copying board everytime we call isValid, and save memories.*

bool isValid(int row, int col, vector<string>& board, int n) {
    for(int j = 0; j < col; j++) {
        if(board[row][j] != '.') return false;
    }
    for(int i = row-1, j = col-1; i>=0 && j >= 0; i--, j--){
        if(board[i][j] == 'Q') return false;
    }
    for(int i = row+1, j = col-1; i<n && j>=0; i++, j--){
        if(board[i][j] == 'Q') return false;
    }
    return true;
}

void recursiveBack(int n, int col, vector<string>& board, vector<vector<string> >& ans) {
    //base case
    if(col == n) {
        ans.push_back(board);
    }
    // for each case, choose, explore, unchoose
    for(int row = 0; row < n; row++) {
        if(isValid(row, col, board, n)) {
            board[row][col] = 'Q';
            recursiveBack(n, col+1, board, ans);
            board[row][col] = '.';
        }
    }
}

vector<vector<string> > solveNQueens(int n) {
    vector<vector<string> > ans;
    vector<string> board(n, string(n, '.'));
    recursiveBack(n, 0, board, ans);
    return ans;
}

int main() {
    vector<vector<string> > ans;
    ans = solveNQueens(5);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << endl;
        }
        cout << endl;
    }
    cout << ans.size() << endl;
}