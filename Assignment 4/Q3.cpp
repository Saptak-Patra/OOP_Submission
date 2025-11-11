#include <iostream>
using namespace std;

class num2; // Forward declaration

class num1 {
public:
    int n1;
    void accept() {
        cout << "Enter first number: ";
        cin >> n1;
    }
    void display() {
        cout << "Num 1: " << n1 << endl;
    }
    friend void swap(num1 &m1, num2 &m2);
};

class num2 {
public:
    int n2;
    void accept() {
        cout << "Enter second number: ";
        cin >> n2;
    }
    void display() {
        cout << "Num 2: " << n2 << endl;
    }
    friend void swap(num1 &m1, num2 &m2);
};

void swap(num1 &m1, num2 &m2) {
    int temp = m1.n1;
    m1.n1 = m2.n2;
    m2.n2 = temp;
    cout << "Swapped:" << endl;
    cout << "First: " << m1.n1 << endl;
    cout << "Second: " << m2.n2 << endl;
}

int main() {
    num1 nu1;
    num2 nu2;

    nu1.accept();
    nu2.accept();

    nu1.display();
    nu2.display();

    swap(nu1, nu2);

    return 0;
}
