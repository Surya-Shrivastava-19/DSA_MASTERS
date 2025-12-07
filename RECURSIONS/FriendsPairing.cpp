#include <iostream>
using namespace std;
int FriendsPairing(int n) {
    if(n == 1 || n == 2) {
        return n;
    }
    // for pair
    int ans1 = (n - 1) * FriendsPairing(n - 2);

    // for single
    int ans2 = FriendsPairing(n - 1);

    return ans1 + ans2;
}
int main() {
    cout << FriendsPairing(2);
    return 0;
}