#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << fixed << setprecision(3);
    cout << "\n--- Using floating point numbers ---\n";
    cout << "Sum = " << num1 + num2 << endl;
    cout << "Difference = " << num1 - num2 << endl;
    cout << "Product = " << num1 * num2 << endl;
    cout << "Quotient = " << num1 / num2 << endl;
    int a = (int)num1;
    int b = (int)num2;
    cout << "\n--- After converting to integers ---\n";
    cout << "Sum = " << a + b << endl;
    cout << "Difference = " << a - b << endl;
    cout << "Product = " << a * b << endl;
    cout << "Quotient = " << a / b << endl;
    cout << "\n(Note: When we change float to int, the decimal part is removed." << endl;
    cout << " So results may be different, especially in division.)" << endl;
    return 0;
}