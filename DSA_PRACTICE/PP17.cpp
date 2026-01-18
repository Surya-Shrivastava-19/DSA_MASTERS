#include <iostream> 
using namespace std;
class Student {
    private:
    string passward;
    public:
    string username;
    string roll_no;
    float cgpa;

    void getPercentage(){
        cout << "Percentage: " << cgpa * 100;
    }
};
int main(){
    Student s1;
    s1.username="surya shrivastava";
    s1.roll_no="0246CS241339";
    s1.cgpa=8.43;
    cout << s1.username << "\n";
    cout << s1.roll_no << "\n";
    cout << s1.cgpa << "\n";
}
