#include <iostream>
using namespace std;

class Result1 {
public:
    int r1;
    void accept() {
        cout << "Enter first result: ";
        cin >> r1;
    }
};

class Result2 {
public:
    int r2;
    void accept() {
        cout << "Enter second result: ";
        cin >> r2;
    }
};

float avg(const Result1 &res1, const Result2 &res2) {
    return (res1.r1 + res2.r2) / 2.0f;
}

int main() {
    Result1 res1;
    Result2 res2;

    res1.accept();
    res2.accept();

    float a = avg(res1, res2);
    cout << "Average: " << a << endl;

    return 0;
}
