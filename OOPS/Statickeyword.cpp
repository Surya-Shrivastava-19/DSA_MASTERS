#include <iostream>
using namespace std;
void counter1(){
    int count = 0;
    count ++;
    cout << "count : " << count << "\n";
}
void counter2(){
    static int count = 0;
    count ++;
    cout << "count : " << count << "\n";
}
int main() {
    counter1();
    counter1();
    counter1();
    counter2();
    counter2();
    counter2();
    counter2();
    counter2();
    return 0;
}
