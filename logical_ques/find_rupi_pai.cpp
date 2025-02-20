#include <iostream>
using namespace std;

int main() {

    float amount;
    int rupees, paisa;

    cout << "Enter the Amount : ";
    cin >> amount;

    rupees = (int)amount;
    paisa = (amount - rupees) * 100;

    cout << "rupees is = " << rupees << endl;
    cout << "paisa is = " << paisa << endl;

    return 0;   
}