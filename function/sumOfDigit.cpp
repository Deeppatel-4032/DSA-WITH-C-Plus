#include<iostream>
using namespace std;

int sumDigits(int num) {
   int sum = 0, digit;

    while(num > 0) {
        digit = num % 10;
        num /= 10;
        sum += digit;
    }
    return sum;
}

int main() {

    cout << "sum Of Digit = " << sumDigits(2356) << endl;

    return 0;
}