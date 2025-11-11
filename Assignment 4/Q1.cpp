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

    void swap(num &obj) {
        int temp = obj.n1;
        obj.n1 = obj.n2;
        obj.n2 = temp;
        cout << "Swapped:-" << endl;
        cout << "First number: " << obj.n1 << endl;
        cout << "Second number: " << obj.n2 << endl;
    }
};

int main() {
    num nu;
    nu.accept();
    nu.display();
    nu.swap(nu);
    return 0;
}
