#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;

public:
    void getData() {
        cout << "Enter time in HH MM SS format: ";
        cin >> hours >> minutes >> seconds;
    }

    int convertToSeconds() {
        return (hours * 3600) + (minutes * 60) + seconds;
    }

    void display() {
        cout << "Total time in seconds = " << convertToSeconds() << " seconds" << endl;
    }
};

int main() {
    Time t;
    t.getData();
    t.display();
    return 0;
}
