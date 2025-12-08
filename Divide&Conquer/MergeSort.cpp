// DIVIDE & CONQUER (MERGE SORT) ....By Surya Shrivastava.
#include <iostream>
#include <vector>
using namespace std;
void Merge(vector<int>& vec, int stidx, int endidx, int mid) {
    vector<int> temp;
    int i = stidx;
    int j = mid + 1;
    while(i <= mid && j <= endidx) {
        if(vec[i] <= vec[j]) {
            temp.push_back(vec[i]);
            i ++ ;
        }else {
            temp.push_back(vec[j]);
            j ++ ;
        }
    }
    while(i <= mid) {
        temp.push_back(vec[i]);
        i ++ ;
    }
    while(j <= endidx) {
        temp.push_back(vec[j]);
        j ++ ;
    }
    for (int idx = stidx , x = 0 ; idx <= endidx; idx ++ , x ++) {
        vec[idx] = temp[x];
    }
}
void print_vec(vector<int>& vec, int n) {
    for (int i = 0; i < n; i ++) {
        cout << vec[i] << " ";
    }
}
void MergeSort(vector<int>& vec, int stidx, int endidx) {
    if (stidx >= endidx) {
        return;
    }
    int mid = (stidx + endidx) / 2;
    // mid = stidx + (endidx - stidx)/2;

    // for left half
    MergeSort(vec, stidx, mid);

    //for right half
    MergeSort(vec, mid + 1, endidx);

    // Combine left & right
    Merge(vec, stidx, endidx, mid);
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
    MergeSort(vec, 0, n - 1);
    print_vec(vec, n);
    return 0;
}