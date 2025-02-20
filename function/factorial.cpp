#include<iostream>
using namespace std;

int factorialNum(int n) {

    int fact = 1;

    for(int i=1; i<=n; i++) {
        
        fact *= i;
    }
    return fact;
}

int main() {
    cout << "factorial Number = " << factorialNum(5) << endl;
    cout << "factorial Number = " << factorialNum(8) << endl;

    return 0;
}