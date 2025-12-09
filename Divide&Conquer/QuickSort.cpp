
// SPACE COMPLEXITY : O(1)
// AVERAGE CASE TIME COMPLEXITY : O(nlogn)
// WORST CASE TIME COMPLEXITY : O(n^2)
#include <iostream>
#include <vector>
using namespace std;
int Partition(vector<int>& vec, int stidx, int endidx) {
    int i = stidx - 1;
    int pivot = vec[endidx];

    for (int j = stidx; j <= endidx - 1; j ++) {
        if (vec[j] <= pivot) {
            i ++;
            swap(vec[i],vec[j]);
        }
    }

    i ++;
    swap(vec[i], vec[endidx]);

    return i;
}

void Quick_Sort(vector<int>& vec, int stidx, int endidx) {
    if (stidx >= endidx) {
        return;
    }

    int pivotIdx = Partition(vec, stidx, endidx);
    Quick_Sort(vec, stidx, pivotIdx - 1);
    Quick_Sort(vec, pivotIdx + 1, endidx);
}

void print_vec(vector<int>& vec, int n) {
    for (int i = 0; i < n; i ++) {
        cout << vec[i] << " ";
    }
}
int main() {
    int n;
    cout << "ENTER SIZE OF A VECTOR : ";
    cin >> n;
    vector<int> vec(n);
    cout << "ENTER ELEMENTS OF A VECTOR : ";
    for (int i = 0; i < n; i ++) {
        cin >> vec[i];
    }
    Quick_Sort(vec, 0, n - 1);
    print_vec(vec, n);
    return 0;
}