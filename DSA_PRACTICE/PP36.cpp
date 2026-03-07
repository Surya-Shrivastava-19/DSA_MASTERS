#include <iostream>
using namespace std;
class Student {
    private:
    static int count;
    public:
    void Increment() {
        count ++;
    }
    static void showCount() {
        cout << "count : " << count << "\n";
    }
};

int Student::count = 0;

int main() {
    Student s1;
    s1.Increment();
    s1.Increment();
    s1.Increment();
    s1.Increment();
    s1.Increment();
    s1.Increment();
    s1.Increment();
    s1.Increment();
    s1.Increment();
    s1.Increment();
    s1.showCount();
    return 0;
}