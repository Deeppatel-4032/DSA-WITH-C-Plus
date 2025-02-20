#include<iostream>
using namespace std;

int sumNum(int no) {
    int sum = 0;

    for(int i=1; i<=no; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << "Sum Of Numbers = " << sumNum(5) << endl;
    cout << "Sum Of Numbers = " << sumNum(10) << endl;
}