#include <iostream>
using namespace std;

int main() {
    int A, B;
    cout <<"Enter first number A:";
    cin >> A;
    cout <<"Enters econd number B:";
    cin >> B;
    cout << "\nBefore Swapping:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    A = A + B;   
    B= A - B;   
    A = A - B;   
    cout << "\nAfter swapping:" << endl;
    cout << "A = " << B << endl;
    cout << "A = " << B << endl;
    return 0;
}