#include <iostream>
using namespace std ;
int main(){
    int size=5;
    int i,ans,target,arr[size]={2,5,8,1,9};
    cout << "enter target : " ;
    cin >> target;
    for(i=0;i<size;i++){
        if(target==arr[i]){
            cout << "element is found at the index : " << i;
        }
        
    }
}