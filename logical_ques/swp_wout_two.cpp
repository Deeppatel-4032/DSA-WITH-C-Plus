#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout << "Enter the value of A number : ";
    cin >> a;

    cout << "Enter the value of B number : ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "after the swapping of number" << "A : " << a << " B : " << b << endl;

    return 0;
}