#include <iostream>
#include <vector>
using namespace std;
void Print_Sudoku(vector<vector<int>> sudoku[][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << sudoku[i][j] << " ";
        }
        cout << "\n";
    }
}
bool SudokuSolver(vector<vector<int>> sudoku, int row, int col) {
    if (row == 9) {
        // SUDOKU SOLVE
        Print_Sudoku(sudoku);
        return true;
    }
    int Nextrow = row;
    int Nextcol = col + 1;
    if (col + 1 == 9) {
        Nextrow = row + 1;
        Nextcol = 0;
    }
    if (sudoku[row][col] != 0) {
        SudokuSolver(sudoku, Nextrow, Nextcol);
    }
    for(int digit = 0; digit < 9; digit++) {
        if (isSafe(sudoku, row, col, digit)) {
            sudoku[row][col] = digit;
            SudokuSolver(sudoku, Nextrow, Nextcol);
        }
    }
}
int main() {
    vector<vector<int>> sudoku[9][9] = {{0, 0, 8, 0, 0, 0, 0, 0, 0},
                                        {4, 9, 0, 1, 5, 7, 0, 0, 2},
                                        {0, 0, 3, 0, 0, 4, 1, 9, 0},
                                        {1, 8, 5, 0, 6, 0, 0, 2, 0},
                                        {0, 0, 0, 0, 2, 0, 0, 6, 0},
                                        {9, 6, 0, 4, 0, 5, 3, 0, 0},
                                        {0, 3, 0, 0, 7, 2, 0, 0, 4},
                                        {0, 4, 9, 0, 3, 0, 0, 5, 7},
                                        {8, 2, 7, 0, 0, 9, 0, 1, 3}};  
    Print_Sudoku(sudoku); 
    return 0;                          
}