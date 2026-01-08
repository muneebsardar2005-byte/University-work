#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


struct Employee {
    int id;
    string name;
    float monthlySalary;
};

int main() {
    int n;
    float threshold;

 
    vector<Employee> employees;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Employee e;

        cout << "\nEnter details for employee " << i + 1 << endl;
        cout << "Employee ID: ";
        cin >> e.id;

        cout << "Employee Name: ";
        cin.ignore();
        getline(cin, e.name);

        cout << "Monthly Salary: ";
        cin >> e.monthlySalary;

        employees.push_back(e);
    }

    cout << "\nEnter yearly salary threshold: ";
    cin >> threshold;

    
    ofstream outFile("high_salary.txt");

    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    for (int i = 0; i < employees.size(); i++) {
        float yearlySalary = employees[i].monthlySalary * 12;

        if (yearlySalary > threshold) {
            outFile << employees[i].id << " "
                    << employees[i].name << " "
                    << yearlySalary << endl;
        }
    }

    outFile.close();

   
    ifstream inFile("high_salary.txt");

    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nEmployees with high yearly salary:\n";
    int id;
    string name;
    float salary;

    while (inFile >> id >> name >> salary) {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Yearly Salary: " << salary << endl;
    }

    inFile.close();
    return 0;
}
