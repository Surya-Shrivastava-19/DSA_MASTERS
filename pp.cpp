#include <iostream>
using namespace std;
int main() {
    string str = "surya";
    for(int i=0;i<str.length();i++) {
        int ch = str[i];
        if(str[i] >= 'A' && str[i] <= 'Z'){
            continue;
        }else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = ch - 'a' + 'A';
        }
    }
    count[];
    cout << str;
}