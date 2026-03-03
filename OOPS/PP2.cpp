#include <iostream>
using namespace std;
class Greater {
    private:
    int num1;
    int num2;
    int num3;
    public:
    void function(int a, int b, int c) {
        num1=a;
        num2=b;
        num3=c;
    }
    int function() {
        if (num1>num2) {
            if (num1>num3) {
                return num1;
            }else{
                return num3;
            }
        }else if(num2>num1) {
            if (num2>num3) {
                return num2;
            }else{
                return num3;
            }  
        }
    }
};
int main() {
    Greater g1;
    g1.function(9,4,1);
    cout << g1.function() << "\n";
    return 0;
}