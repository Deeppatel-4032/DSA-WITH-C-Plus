#include<iostream>
using namespace std;

int main() {

    int n = 5;

    for(int i=1; i<=5; i++) {
        char ch = 'A';
        for(int j=1; j<=5; j++) {
            cout  << ch <<" ";
            ch++;
        }

        cout << endl;
    }

    return 0;
}