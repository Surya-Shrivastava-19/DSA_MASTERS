#include <iostream>
using namespace std;
int CHECK(string str1){
    string str2 = "aeiou";
    int count = 0;
    for(int i=0; i<str1.length(); i++){
        for(int j=0; j<str2.length(); j++){
            if(str1[i] == str2[j]){
                count ++;
            }
        }
    }
    return count;
}
int main(){
    string str1;
    cout << "Enter a word : ";
    getline(cin, str1);
    cout << "Lower case vowels occurred in a string in " << CHECK(str1) << " times.";
    return 0;
}