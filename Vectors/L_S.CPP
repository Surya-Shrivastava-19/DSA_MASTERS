#include <iostream>
using namespace std;
int linearsearch(int size, int arr[], int target){
     for(int i=0;i<size;i++){
        if(target==arr[i]){
            return i;
        }
     }
     return -1 ;
}

int main(){
    int size=5,arr[size],target;
    cout << "enter elements of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "enter targeted element : ";
    cin >> target ;
    cout << "array element index is : " << linearsearch(size,arr,target) ;
    return 0;
}