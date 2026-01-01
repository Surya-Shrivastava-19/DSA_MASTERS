// GRID WAYS ....By Surya Shrivastava.
#include <iostream>
using namespace std;
int Grid_Ways(int rows, int cols, int n, int m) {
    // BASE CASES
    if (rows == n - 1 && cols == m - 1) {
        return 1;
    }
    if (rows >= n) {
        return 0;
    }
    if (cols >= m) {
        return 0;
    }

    // RIGHT 
    int val1 = Grid_Ways(rows, cols + 1, n, m);

    // DOWN
    int val2 = Grid_Ways(rows + 1, cols , n, m);

    return (val1 + val2);
}

int main() {
    int N, M;
    cout << "ENTER SIZE OF N X M MATRIX :- " << "\n";
    cout << "ENTER NUMBER OF ROWS(N) : ";
    cin >> N;
    cout << "ENTER NUMBER OF COLUMNS(M) : ";
    cin >> M;
    int ans = Grid_Ways(0 , 0 , N , M);
    cout << "NUMBER OF WAYS TO REACH FROM (0,0) TO (" << N-1 << "," << M-1 << ")" << " IN " << N << "X" << M << " GRID IS : " << ans;
    return 0;
}