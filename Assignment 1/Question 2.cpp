#include <iostream>
using namespace std;

class Book {
    string book_name;
    float price;
    int pages;

public:
    void getData() {
        cout << "Enter book name: ";
        cin >> book_name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter number of pages: ";
        cin >> pages;
    }

    float getPrice() {
        return price;
    }

    string getName() {
        return book_name;
    }
};

int main() {
    Book b1, b2;

    cout << "Enter details of first book:\n";
    b1.getData();

    cout << "\nEnter details of second book:\n";
    b2.getData();

    cout << "\nBook with higher price is: ";
    if (b1.getPrice() > b2.getPrice())
        cout << b1.getName() << endl;
    else if (b2.getPrice() > b1.getPrice())
        cout << b2.getName() << endl;
    else
        cout << "Both books have the same price." << endl;

    return 0;
}
