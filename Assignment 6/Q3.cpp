#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void getPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
    int grade;

public:
    void getStudentData() {
        getPersonData();
        cout << "Enter grade: ";
        cin >> grade;
    }

    void displayStudentData() {
        cout << "\n--- Student Details ---" << endl;
        displayPersonData();
        cout << "Grade: " << grade << endl;
    }
};

class Teacher : public Person {
    float salary;

public:
    void getTeacherData() {
        getPersonData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTeacherData() {
        cout << "\n--- Teacher Details ---" << endl;
        displayPersonData();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    cout << "Enter details of Student:\n";
    s.getStudentData();

    cout << "\nEnter details of Teacher:\n";
    t.getTeacherData();

    s.displayStudentData();
    t.displayTeacherData();

    return 0;
}
