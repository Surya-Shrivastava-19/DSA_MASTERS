// BACKTRACKING ON ARRAY ....By Surya Shrivastava.
#include <iostream>
#include <vector>
using namespace std;
void printArray(vector<int>& vec, int n) {14
    for (int i=0; i<n; i++) {
        cout << vec[i] << " ";
    }
}

void ChangeArray(vector<int>& vec, int n, int i) {
    if (i == n) {
        printArray(vec, n);
        cout << "\n";
        return;
    }
    vec[i] = i + 1;
    ChangeArray(vec, n, i + 1);
    vec[i] = vec[i] - 2;
}

int main() {
    vector<int> vec(5);
    int n = 5;

    ChangeArray(vec, n, 0);
    printArray(vec, n);
    return 0;
}