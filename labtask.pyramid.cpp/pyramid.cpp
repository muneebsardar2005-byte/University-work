#include <iostream>
using namespace std;

int main() {
    for (int x = 1; x <= 5; x++) {
        for (int y = x; y < 5; y++) {
            cout << " ";
        }
        for (int z = 1; z <= (2 * x - 1); z++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}