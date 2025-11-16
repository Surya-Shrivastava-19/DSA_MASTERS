#include <iostream>
using namespace std;
int main(){
    int decnum,ans=0,pow=1,rem; // pow = *1 --> *10 --> *100 --> *1000
    cout << "ENTER DECIMAL NO. " << endl ;
    cin >> decnum ;
    while(decnum>0){
        rem = decnum % 2 ;
        decnum = decnum /2 ;
        ans = ans + (rem * pow) ;
        pow = pow * 10 ;
    }
    cout << "\nBINARY NO. IS " << ans ;
    return 0;
}