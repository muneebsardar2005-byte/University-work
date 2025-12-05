#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    // Make a 2D array to store seat status (F = Free, R = Reserved)
    char seats[20][20]; // assuming max 20x20 for simplicity

    // Initialize all seats to Free (F)
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            seats[r][c] = 'F';
        }
    }

    // Function to print seat map
    auto printSeats = [&]() {
        cout << "\nCurrent Seat Layout:\n";
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                cout << "(" << r+1 << "-" << c+1 << " " << seats[r][c] << ") ";
            }
            cout << endl;
        }
        cout << endl;
    };

    // Show initial seating
    printSeats();

    int choice = 1;

    while (choice == 1) {
        int r, c;
        cout << "Enter row number to reserve: ";
        cin >> r;
        cout << "Enter column number to reserve: ";
        cin >> c;

        // Adjust for array indexing
        r--;
        c--;

        if (r < 0 || r >= rows || c < 0 || c >= cols) {
            cout << "Invalid seat! Try again.\n";
        } else {
            if (seats[r][c] == 'R') {
                cout << "That seat is already reserved.\n";
            } else {
                seats[r][c] = 'R';
                cout << "Seat reserved successfully!\n";
            }
        }

        // Show updated map
        printSeats();

        cout << "Do you want to reserve another seat? (1 = yes, 0 = no): ";
        cin >> choice;
    }

    cout << "Thank you for using the booking system.\n";

    return 0;
}