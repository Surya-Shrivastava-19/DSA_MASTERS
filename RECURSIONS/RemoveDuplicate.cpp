// REMOVE DUPLICATE IN STRING ....By Surya Shrivastava.
#include <iostream>
using namespace std;
void RemoveDuplicate(string str, string ans, int i, bool map[26]) {
    if(i == str.size()) {
        cout << "ANS : " << ans << "\n";
        return;
    }
    int mapIdx = (int) str[i] - 'a';
    if(map[mapIdx] == true) {
        RemoveDuplicate(str, ans, i+1, map);
    }else {
        map[mapIdx] = true;
        RemoveDuplicate(str, ans + str[i], i+1, map);
    }
}
int main() {
    string str;
    cout << "ENTER STRING : ";
    cin >> str;
    string ans ="";
    bool map[26] = {false};
    RemoveDuplicate(str, ans, 0, map);
    return 0;
}
