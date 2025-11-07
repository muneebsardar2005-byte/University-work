#include <iostream>
using namespace std;
void line() {
    cout << "------------" << endl;
}
void evenodd(int n) {
    if (n % 2 == 0)
        cout << n << " is Even" << endl;
    else
        cout << n << " is Odd" << endl;
    line();
}
int main() {
    int num = 1;
    while (num != 0) { 
        cout << "Enter a number : ";
        cin >> num;
        if (num != 0)  
        evenodd(num);
    }
    return 0;
}