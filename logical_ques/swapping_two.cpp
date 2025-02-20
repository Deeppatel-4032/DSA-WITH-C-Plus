#include <iostream>
using namespace std;

int main() {

    int a, b, t;

    cout << "Enter the value of A number : ";
    cin >> a;

    cout << "Enter the value of B number : ";
    cin >> b;

    t = a;
    a = b;
    b = t;

    cout << "after swapping  : " << "a = " << a << " " << "b = " << b << endl;

    return 0;
}
