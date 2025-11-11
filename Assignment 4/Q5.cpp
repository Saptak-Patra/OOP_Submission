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
    friend int grnum(const num1 &a, const num2 &b);
};

class num2 {
public:
    int n2;
    void accept() {
        cout << "Enter second number: ";
        cin >> n2;
    }
    friend int grnum(const num1 &a, const num2 &b);
};

int grnum(const num1 &a, const num2 &b) {
    return (a.n1 > b.n2) ? a.n1 : b.n2;
}

int main() {
    num1 n1;
    num2 n2;

    n1.accept();
    n2.accept();

    int gr = grnum(n1, n2);
    cout << "Greatest: " << gr << endl;

    return 0;
}
