#include <iostream>
using namespace std;
int main(){
    int binnum,lastdigit,pow=1,ans=0 ;
    cout << "ENTER BINARY NUMBER : ";
    cin >> binnum ;
    while(binnum>0){
        lastdigit = binnum % 10 ;
        ans = ans + (lastdigit * pow) ;
        binnum = binnum / 10 ;
        pow = pow * 2 ;
    }
    cout << "DECIMAL NO. IS " << ans ;

}