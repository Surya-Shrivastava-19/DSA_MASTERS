// N_QUEENS PROBLEM ASSUMING ALL POSITION ARE SAFE (QUEENS NOT ATTACK EACH OTHER) 
// ....By Surya Shrivastava
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void PrintBoard(vector<vector<char>> Board) {
    int n = Board.size();
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            cout << Board[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "-------------------------" << "\n";
}

void N_Queens(vector<vector<char>> Board, int row) {
    int n = Board.size();
    if (row == n) {
        PrintBoard(Board);
        return;
    }
    for (int j = 0; j < n; j ++) {
        Board[row][j] = 'Q';
        N_Queens(Board, row + 1);
        Board[row][j] = '_';
    }
}

int main() {
    vector<vector<char>> Board;
    int n = 2;
    for (int i = 0; i < n; i ++) {   // ROWS
        vector<char> Newrow;
        for (int j = 0; j < n; j ++) {   // COLUMNS
            Newrow.push_back('_');
        }
        Board.push_back(Newrow);
    }
    N_Queens(Board, 0);
    return 0;
}