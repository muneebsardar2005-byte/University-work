#include<iostream>
using namespace std;
int main(){
    string password;
    while (true) {
        cout << "Enter password: ";
        cin >> password;
        if (password == "Python123") {
            cout << "Access granted!" << endl;
            break; 
        } else {
            cout << "Incorrect password. Try again." << endl;
        }
    }

    return 0;
}