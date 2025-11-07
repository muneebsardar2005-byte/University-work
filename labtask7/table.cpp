#include <iostream>
using namespace std;

void printTableRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        cout << "Table of " << i << ":" << endl;
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl; 
}

int main() {
    int start, end;
    cout << "Enter start number: ";
    cin >> start;
    cout << "Enter end number: ";
    cin >> end;

    printTableRange(start, end);

    return 0;
}