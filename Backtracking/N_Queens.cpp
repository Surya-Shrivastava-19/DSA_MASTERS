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
}