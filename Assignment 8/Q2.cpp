#include <iostream>
using namespace std;

class ILogin {
protected:
    string name;
    string password;

public:
    virtual void accept() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter password: ";
        cin >> password;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Password: " << password << endl;
    }
};

class EmailLogin : public ILogin {
    string emailID;

public:
    void accept() override {
        cout << "\nEnter Email Login Details:" << endl;
        ILogin::accept();
        cout << "Enter Email ID: ";
        cin >> emailID;
    }

    void display() override {
        cout << "\n--- Email Login Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Password: " << password << endl;
        cout << "Email ID: " << emailID << endl;
    }
};

class MembershipLogin : public ILogin {
    int membershipID;

public:
    void accept() override {
        cout << "\nEnter Membership Login Details:" << endl;
        ILogin::accept();
        cout << "Enter Membership ID: ";
        cin >> membershipID;
    }

    void display() override {
        cout << "\n--- Membership Login Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Password: " << password << endl;
        cout << "Membership ID: " << membershipID << endl;
    }
};

int main() {
    ILogin *loginPtr;

    EmailLogin e;
    MembershipLogin m;

    loginPtr = &e;
    loginPtr->accept();
    loginPtr->display();

    loginPtr = &m;
    loginPtr->accept();
    loginPtr->display();

    return 0;
}
