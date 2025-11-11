#include <iostream>
using namespace std;

class num {
public:
    int n1, n2;

    void accept() {
        cout << "Enter first number: ";
        cin >> n1;
        cout << "Enter second number: ";
        cin >> n2;
    }

    void display() {
        cout << "Num 1: " << n1 << endl;
        cout << "Num 2: " << n2 << endl;
    }

    friend void swap(num &nu);
};

void swap(num &nu) {
    int temp = nu.n1;
    nu.n1 = nu.n2;
    nu.n2 = temp;
    cout << "Swapped:" << endl;
    cout << "First: " << nu.n1 << endl;
    cout << "Second: " << nu.n2 << endl;
}

int main() {
    num nu;
    nu.accept();
    nu.display();
    swap(nu);
    return 0;
}
