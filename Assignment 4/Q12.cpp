#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    int id;
};

struct Course {
    string cname;
    string code;
    vector<Student> students;
};

void inputCourses(vector<Course>& c) {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Course temp;
        int s;

        cout << "\nCourse name: ";
        cin >> temp.cname;
        cout << "Course code: ";
        cin >> temp.code;

        cout << "Number of students: ";
        cin >> s;

        for (int j = 0; j < s; j++) {
            Student st;
            cin >> st.name >> st.id;
            temp.students.push_back(st);
        }
        c.push_back(temp);
    }
}

void displayCourses(const vector<Course>& c) {
    for (Course x : c) {
        cout << "\nCourse: " << x.cname << " (" << x.code << ")";
        cout << "\nStudents:\n";
        for (Student s : x.students)
            cout << s.name << " - " << s.id << endl;
    }
}

int main() {
    vector<Course> courses;
    inputCourses(courses);
    displayCourses(courses);
    return 0;
}
