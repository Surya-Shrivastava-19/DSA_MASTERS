// NEXT GREATER ELEMENT
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void nextGreater(vector<int> vec, vector<int> ans) {
    stack<int> S;
    int idx = vec.size() - 1;
    ans[idx] = -1;
    S.push(vec[idx]);
    for(idx = idx - 1; idx >= 0; idx--) {
        int curr = vec[idx];
        while(!S.empty() && curr >= S.top()) {
            S.pop();
        }
        if(S.empty()) {
            ans[idx] = -1;
        }else{
            ans[idx] = S.top();
        }
        S.push(curr);
    }
    cout << "ans = [";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << ", "; 
    }
    cout << "]" << endl;
}
int main() {
    int n;
    cout << "ENTER the size of a vector : ";
    cin >> n;
    vector<int> vec(n);
    vector<int> ans(n);
    cout << "ENTER ELEMENTS OF VECTOR : " << endl;
    cout << "vec = ";
    for (int i=0; i<n; i++) {
        cin >> vec[i];
    }
    // vector<int> vec = {6, 8, 0, 1, 3};
    for(int i=0; i<n; i++) {
        ans[i] = 0;
    }
    // vector<int> ans ={0, 0, 0, 0, 0};
    nextGreater(vec, ans);
    return 0;
}