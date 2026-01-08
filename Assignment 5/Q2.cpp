#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


struct Order {
    int orderID;
    string customerName;
    int items;
    float pricePerItem;
};

int main() {
    int n;


    vector<Order> orders;

    cout << "Enter number of orders: ";
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        Order o;

        cout << "\nEnter details for order " << i + 1 << endl;
        cout << "Order ID: ";
        cin >> o.orderID;

        cout << "Customer Name: ";
        cin.ignore();
        getline(cin, o.customerName);

        cout << "Number of items: ";
        cin >> o.items;

        cout << "Price per item: ";
        cin >> o.pricePerItem;

    
        if (o.items <= 0 || o.pricePerItem <= 0) {
            cout << "Invalid input! Items and price must be positive.\n";
            i--;
            continue;
        }

        orders.push_back(o);
    }

    
    ofstream outFile("priority_orders.txt");

    if (!outFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    for (int i = 0; i < orders.size(); i++) {
        float totalAmount = orders[i].items * orders[i].pricePerItem;

        if (totalAmount > 5000) {
            outFile << orders[i].orderID << " "
                    << orders[i].customerName << " "
                    << totalAmount << endl;
        }
    }

    outFile.close();

    ifstream inFile("priority_orders.txt");

    if (!inFile) {
        cout << "Error reading file!" << endl;
        return 1;
    }

    cout << "\nPriority Orders (Total > 5000):\n";
    int id;
    string name;
    float amount;

    while (inFile >> id >> name >> amount) {
        cout << "Order ID: " << id
             << ", Customer: " << name
             << ", Total Amount: " << amount << endl;
    }

    inFile.close();
    return 0;
}
