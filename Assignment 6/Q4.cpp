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
protected:
    int studentID;

public:
    void getStudentData() {
        getPersonData();
        cout << "Enter student ID: ";
        cin >> studentID;
    }

    void displayStudentData() {
        displayPersonData();
        cout << "Student ID: " << studentID << endl;
    }
};

class Employee : public Person {
protected:
    int empID;

public:
    void getEmployeeData() {
        getPersonData();
        cout << "Enter employee ID: ";
        cin >> empID;
    }

    void displayEmployeeData() {
        displayPersonData();
        cout << "Employee ID: " << empID << endl;
    }
};

class TeachingAssistant : public Student, public Employee {
    string subject;

public:
    void getTAData() {
        cout << "\nEnter details for Teaching Assistant:\n";
        // Avoid duplicate base calls using Student version only
        Student::getPersonData();
        cout << "Enter student ID: ";
        cin >> studentID;
        cout << "Enter employee ID: ";
        cin >> empID;
        cout << "Enter subject assigned: ";
        cin >> subject;
    }

    void displayTAData() {
        cout << "\n--- Teaching Assistant Details ---" << endl;
        cout << "Name: " << Student::name << ", Age: " << Student::age << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    TeachingAssistant ta;
    ta.getTAData();
    ta.displayTAData();
    return 0;
}
