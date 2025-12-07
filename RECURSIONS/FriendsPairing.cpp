// FRIENDS PAIRING PROBLEM ....By Surya Shrivastava.
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
    int n;
    cout << "ENTER VALUE OF N : ";
    cin >> n;
    cout << "TOTAL WAYS IN WHICH " << n << " FRIENDS CAN BE PAIRED UP : " << FriendsPairing(n);
    return 0;
}