#include<iostream>
using namespace std;

void STEP(int n, string ans, int count) {
    if(n == 0) {
        cout << ans << endl;
        return;
    }

    for(int i = 1; i <= n; i++) {
        STEP(n - i, ans + to_string(i), count+1);
    }
}

int main() {
    int n = 4;
    STEP(n, "", 0);
    return 0;
}