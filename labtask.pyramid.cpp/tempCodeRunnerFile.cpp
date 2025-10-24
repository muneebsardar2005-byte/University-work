#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int y = i; y < 5; y++) {
            cout << " ";
        }
        for (int z = 1; z <= (2 * i - 1); z++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}