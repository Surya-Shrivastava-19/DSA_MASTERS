#include <iostream>
#include <thread>
using namespace std;

// Function 1
void task1() {
    for(int i = 1; i <= 5; i++) {
        cout << "Task 1 running: " << i << endl;
    }
}

// Function 2
void task2() {
    for(int i = 1; i <= 5; i++) {
        cout << "Task 2 running: " << i << endl;
    }
}

int main() {

    // Thread objects create kiye
    thread t1(task1);
    thread t2(task2);

    // Threads ko complete hone ka wait karna
    t1.join();
    t2.join();

    return 0;
}