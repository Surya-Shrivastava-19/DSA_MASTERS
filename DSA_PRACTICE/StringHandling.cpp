#include <iostream>
#include <string>
using namespace std;
int main() {
    
    // STRING DECLARATION...
    string str1 = "Surya";
    string str2 = "Shrivastava";

    // STRING CONCATINATION
    string str = str1+str2;
    cout << str1 + " " + str2 << endl;

    // STRING LENGTH
    cout << str.length() << endl;

    // STRING COMPARISION
    string a = "KAVI";
    string b = "KAVI";
    if(a == b) {
        cout << "STRING ARE SAME" << endl;
    }

    // ACCESSING CHARACTER
    string s = "RADHERADHE";
    cout << s[2] << endl;

    // STRING I/P & O/P
    string t;
    cout << "Enter a string : ";
    cin >> t;
    cout << t << endl;
    return 0;
}
