#include <iostream>
using namespace std;
class MAX{
    public:
    int Max(int a, int b) {
        if(a>b) {
            return a;
        }else{
            return b;
        }
    }
    int Max(int a, int b, int c) {
        int M = Max(a, b);
        if(M > c) {
            return M;
        }else {
            return c;
        } 
    }
};
int main() {
    MAX m1;
    cout << m1.Max(2,6,1) << "\n";
    return 0;
}