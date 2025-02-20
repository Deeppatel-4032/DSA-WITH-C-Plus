#include<iostream> // pre-processer diretione
using namespace std; // namespace - file che

//  this is starting point of execution code
int main(){

    // int 4 Byte 
    int a, b;

    cout <<"Enter the value a : ";
    cin >> a;

    cout <<"Enter the value b : ";
    cin >> b;

    // arithmetic operators
    cout << "sum is : " << a + b << endl;
    cout << "mines is : " << a - b << endl;
    cout << "mul is : " << a * b << endl;
    cout << "division is : " << a / b << endl;
    cout << "modulo is : " << a % b << endl;
    
    cout << endl << "bye, see you soon..." << endl; // endl -> end of line

    return 0; // intier value return
}
