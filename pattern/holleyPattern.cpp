#include<iostream>
using namespace std;

int main() {
    int n = 5;
    //top
    for(int i=1; i<=5; i++) {
        for(int s=1; s<=n-i-1; s++) {
            cout << " ";
        }
        //inare space
        if(i != 1) {
            for(int j=1; j<=2*i-1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // bottom 
    for(int i=1; i<n-1; i++) {
        //space
        for(int s=1; s<=i+1; s++) {
            cout << " ";
        }

        cout << "*";
        if(i != n-1) {
            // space
            for(int s=1; s<=2*(n-i)-5; s++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}