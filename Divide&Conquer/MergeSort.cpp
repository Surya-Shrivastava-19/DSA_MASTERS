#include <iostream>
using namespace std;
int Merge(vector<int> vec, int stidx, int endidx, int mid) {
    int i = stidx;
    int j = mid + 1;
    vector<int> temp;
    while(i < = mid && j < = endidx) {
        if(vec[i] >= vec[j]) {
            temp.push_back(vec[j]);
            j ++ ;
        }else {
            temp.push_back(vec[i]);
            i ++ ;
        }
    }
    while(i < = mid) {
        temp.push_back(vec[i]);
        i ++ ;
    }
    while(j < = endidx) {
        temp.push_back(vec[j]);
        j ++ ;
    }
    for ()
}
void MergeSort(vector<int> vec, int stidx, int endidx) {
    int mid = (stidx + endidx) / 2;
    // mid = stidx + (endidx - stidx)/2;

    // for left
    MergeSort(vec, stidx, mid);

    //for right
    MergeSort(vec, mid + 1, endidx);

    // Combine 
    Merge(vec, stidx, endidx, mid);
}
int main() {

}