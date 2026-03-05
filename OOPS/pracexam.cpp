#include <iostream>
using namespace std;
class Employee {
    string employnumber;
    string e_name;
    float e_salary;
    string e_department;
    float deduction;
    float allowances;
    public:
    void setName(string n){
        e_name = n;
        cout << "EMPLOY NAME : " << e_name << "\n";
    }
    void setDepartment(string d){
        e_department = d;
        cout << "EMPLOY DEPARTMENT : " << e_department << "\n";
    }
    void setEmployNumber(string n) {
        employnumber = n;
        cout << "EMPLOY NUMBER : " << employnumber << "\n";
    }
    void setSalary(float s) {
        e_salary = s;
        cout << "EMPLOY SALARY : " << e_salary << "\n";
    }
    void setDeduction(float d) {
        deduction = d;
        cout << "EMPLOY DEDUCTION : " << deduction << "\n";
    }
    void setAllowances(float a) {
        allowances = a;
        cout << "EMPLOY ALLOWANCES : " << allowances << "\n";
    }
    float netSalary() {
        return (e_salary+allowances-deduction);
    }
};
int main() {
    Employee E1;
    E1.setName("SURYA SHRIVASTAVA");
    E1.setEmployNumber("8457754604");
    E1.setSalary(35000);
    E1.setDepartment("BOMBAY MICROSOFT");
    E1.setDeduction(4000); 
    E1.setAllowances(3000);
    cout << "NET SALARY : " << E1.netSalary() << "\n";
    return 0;
}