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
    int a, b, c;
    cout << "ENTER VALUE OF a , b & c : ";
    cin >> a >> b >> c;
    cout << "MAX = " << m1.Max(a, b, c) << "\n";
    return 0;
}