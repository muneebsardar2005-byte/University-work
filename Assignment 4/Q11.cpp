#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    string name;
    int age;
    vector<string> skills;
};

void inputEmployees(vector<Employee>& e) {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Employee temp;
        int s;

        cout << "\nEmployee " << i + 1 << " name: ";
        cin >> temp.name;
        cout << "Age: ";
        cin >> temp.age;

        cout << "Number of skills: ";
        cin >> s;

        for (int j = 0; j < s; j++) {
            string skill;
            cin >> skill;
            temp.skills.push_back(skill);
        }
        e.push_back(temp);
    }
}

void displayEmployees(const vector<Employee>& e) {
    for (int i = 0; i < e.size(); i++) {
        cout << "\nName: " << e[i].name;
        cout << "\nAge: " << e[i].age;
        cout << "\nSkills: ";
        for (string s : e[i].skills)
            cout << s << " ";
        cout << endl;
    }
}

int main() {
    vector<Employee> employees;
    inputEmployees(employees);
    displayEmployees(employees);
    return 0;
}
