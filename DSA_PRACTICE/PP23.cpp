#include <iostream>
#include <cstring>
using namespace std;
bool PALINDROME(char *arr, int n){
    int st=0, end=n-1;
    while( st < end ){
            if(arr[st++] != arr[end--]){
                cout << "NOT PALINDROME" << endl;
                return false;
            }
    }
    cout << "PALINDROME ";
    return true;
}
int main(){
    char arr[100];
    cout << "enter a string : " << endl;
    cin.getline(arr, 100);
    PALINDROME(arr, strlen(arr));
    return 0;
}