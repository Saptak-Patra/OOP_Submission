#include <iostream>
using namespace std;

int sum(int a1 = 1, int a2 = 2, int a3 = 3, int a4 = 4, int a5 = 5, int a6 = 6, int a7 = 7, int a8 = 8, int a9 = 9, int a10 = 10) {
    return a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10;
}

float sum(float a1 = 1.1, float a2 = 2.2, float a3 = 3.3, float a4 = 4.4, float a5 = 5.5) {
    return a1 + a2 + a3 + a4 + a5;
}

int main() {
    cout << "Sum of 10 integers (default values): " << sum() << endl;
    cout << "Sum of 5 float values (default values): " << sum() << endl;

    cout << "\nSum of custom integer values: " << sum(5,4,3,2,1,6,7,8,9,10) << endl;
    cout << "Sum of custom float values: " << sum(1.5,2.5,3.5,4.5,5.5) << endl;

    return 0;
}
