
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

bool IsSafe(vector<vector<char>> Board, int rows, int cols) {
    int n = Board.size();

    // FOR HORIZONTAL
    for (int j = 0; j < n; j ++) {
        if (Board[rows][j] == 'Q') {
            return false;
        }
    }

    // FOR VERTICAL
    for (int i = 0; i < rows; i ++) {
        if (Board[i][cols] == 'Q') {
            return false;
        }
    }

    // FOR LEFT DIAGONAL
    for (int i = rows, j = cols ; i >= 0 && j >= 0 ; i --, j --) {
        if (Board[i][j] == 'Q') {
            return false;
        }
    }

    // FOR RIGHT DIAGONAL
    for (int i = rows, j = cols ; i >= 0 && j < n; i --, j ++) {
        if (Board[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}
void N_Queens(vector<vector<char>> Board, int row) {
    int n = Board.size();
    if (row == n) {
        PrintBoard(Board);
        return;
    }
    for (int j = 0; j < n; j ++) {
        if (IsSafe(Board, row, j)) {
            Board[row][j] = 'Q';
            N_Queens(Board, row + 1);
            Board[row][j] = '_';
        }
    }
}

int main() {
    vector<vector<char>> Board;
    int n;
    cout << "ENTER VALUE OF N : ";
    cin >> n;
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