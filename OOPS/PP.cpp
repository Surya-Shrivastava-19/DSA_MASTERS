#include <iostream>
using namespace std;

template <class T>
T findMax(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Max (int): " << findMax(10, 20) << endl;
    cout << "Max (float): " << findMax(5.5, 2.3) << endl;
    cout << "Max (double): " << findMax(3.14, 6.28) << endl;

    return 0;
}