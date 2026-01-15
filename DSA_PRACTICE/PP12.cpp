// MULTIPLE INHERITANCE ... PP12
#include <iostream>
using namespace std;
class Teacher {
    public:
    int salary;
    string subject;
};
class Student {
    public:
    int roll_No;
    float cgpa;
};
class TA : public Teacher, public Student {
    public:
    string name;
};
int main(){
    TA t1;
    t1.name = "MR SAILESH SIR...";
    t1.salary = 55000;
    t1.subject = "JAVA...";
    t1.roll_No = 2488500;
    t1.cgpa = 8.54;
    cout << "TA NAME = " << t1.name << "\n" << "TA SALARY = " << t1.salary << "\n" << "TA SUBJECT = " << t1.subject << "\n" << "TA ROLL_NO: " << t1.roll_No << "\n" << "TA CGPA = " << t1.cgpa << endl;
    return 0;
}
