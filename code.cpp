#include<iostream> 
using namespace std;

int minNum(int a, int b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }
}
int main() {

    cout << "min number " << minNum(10, 5) << endl;
    cout << "min number " << minNum(15, 20) << endl;

    return 0;
}
