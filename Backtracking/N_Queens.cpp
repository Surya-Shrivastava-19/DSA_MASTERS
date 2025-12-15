#include <iostream>
#include <vector>
#include <string>
using namespace std;
void N_Queens(vector<vector<char>> Board, int row) {
    int n = Board.size();
    if (row == n) {
        PrintBoard(Board);
        return;
    }
    for (int j = 0; j < n; j ++) {
        Board[row][j] = 'Q';
        N_Queens(Board, row + 1);
    }
}
void PrintBoard(vector<vector<char>> Board) {
    int n = Board.size();
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            cout << Board[i][j] << " ";
        }
        cout << "\n";
    }
}
int main() {
    vector<vector<char>> Board;
    int n = 5;
    for (int i = 0; i < n; i ++) {   // ROWS
        vector<char> Newrow;
        for (int j = 0; j < n; j ++) {   // COLUMNS
            Newrow.push_back('_');
        }
        Board.push_back(Newrow);
    }
    PrintBoard(Board);
    return 0;
}