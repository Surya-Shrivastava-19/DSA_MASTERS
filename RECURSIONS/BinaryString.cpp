// BINARY STRING PROBLEM ....By Surya Shrivastava.
#include <iostream>
using namespace std;
void BinaryString(int n, int lastPlace, string ans) {
    if(n == 0) {
        cout << ans << endl;
        return;
    }

    if(lastPlace != 1) {
        BinaryString(n - 1, 0, ans + "0");
        BinaryString(n - 1, 1, ans + "1");
    }else {
        BinaryString(n - 1, 0, ans + "0");
    }

}
int main() {
    int n;
    cout << "ENTER SIZE OF A STRING : ";
    cin >> n;
    string ans = "";
    BinaryString(n, 0, ans);
    return 0;
}