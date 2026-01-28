#include <iostream>
#include <cstring>
using namespace std;
void REVERSE(char *arr, int n){
    int st = 0, end = n-1;
   while(st < end){
        swap(arr[st], arr[end]);
        st ++;
        end --;
    }
}
int main(){
    char arr[100];
    cout << "Enter a string : ";
    cin.getline(arr, 100);
    REVERSE(arr, strlen(arr));
    cout << "Reverse string is : " << arr << endl;
    return 0;
}