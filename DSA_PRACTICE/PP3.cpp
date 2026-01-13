#include <iostream>
#include <string>
using namespace std;
class Student {

    private:
    string Name;
    string passward;
    string roll_no;
    float cgpa;

    public:
    // SETTER
    void setName(string NameValue, float cgpaValue){
        Name = NameValue;
        cgpa = cgpaValue;
    }
    // void setcgpa(float cgpaValue){
    //     cgpa = cgpaValue;
    // }

    // GETTER
    string getName(){
        return Name;
    }
    float getCgpa() {
        return cgpa;
    }
};
int main(){
    Student s1;
    s1.setName("SURYA SHRIVASTAVA", 8.07);
    // s1.setcgpa(8.07);
    cout << s1.getName() <<"\n";
    cout << s1.getCgpa() <<"\n";
    return 0;
}