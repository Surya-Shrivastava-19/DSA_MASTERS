#include <iostream>
using namespace std;
int TillingProblem(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    // for vertical 
    int ans1 = TillingProblem(n - 1);

    // for horizontal
    int ans2 = TillingProblem(n - 2);

    return ans1 + ans2;
}
int main() {
    int n;
    cout << "ENTER VALUE OF N : ";
    cin >> n;
    int ans = TillingProblem(n);
    cout << "TOTAL WAYS TO TILE A FLOOR WITH TILE : " << ans << "\n";
    return 0;
}