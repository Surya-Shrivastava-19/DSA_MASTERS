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
    void setName(string NameValue){
        Name = NameValue;
    }
    void setcgpa(float cgpaValue){
        cgpa = cgpaValue;
    }

    // GETTER
    string getName(){
        return Name;
    }
    float getCgpa(){
        return cgpa;
    }
};
int main(){
    Student s1;
    s1.setName("surya shrivastava");
    s1.setcgpa(8.43);
    cout << s1.getName() <<"\n";
    cout << s1.getCgpa() <<"\n";
    return 0;
}
