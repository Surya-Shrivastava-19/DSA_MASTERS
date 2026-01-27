// UPPERCASE
#include <iostream>
#include <cstring>
using namespace std;
void Uppercase(char *word, int n){
    for(int i=0; i<n; i++){
        int ch = word[i];
        if(ch >= 'A' && ch <= 'Z'){
            continue;
        }else if(ch >= 'a' && ch <= 'z'){
            word[i] = ch - 'a' + 'A';
        }
    }
}
int main(){
    char word[100];
    cout << "Enter a string : ";
    cin.getline(word, 100);
    Uppercase(word, strlen(word));
    cout << "Elements of a string in Uppercase form : " << word << endl;
    return 0;
}