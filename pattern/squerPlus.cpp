#include<iostream>
using namespace std;

int main() {

    int n=5, sum = 1;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cout << sum << " ";
            sum++;
        }
        cout << endl;
    }

    return 0;
}