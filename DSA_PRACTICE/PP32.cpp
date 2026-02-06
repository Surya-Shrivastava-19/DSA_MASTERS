#include <iostream>
#include <algorithm>
using namespace std;
void S_Sort(char *ch, int n) {
    for(int i=1; i<n; i++){
        int curr = ch[i];
        int prev;
        for(prev =i-1 ; prev >= 0 && ch[prev] > curr ; prev--){
            swap(ch[prev], ch[prev+1]);
        }
        ch[prev + 1] = curr;
    }
    }
int main() {
    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    S_Sort(ch, 6);
    cout << "elements of array in sorted form are : ";
    for(int i=0; i<6; i++){
        cout << ch[i] << " , ";
    }
    return 0;
}