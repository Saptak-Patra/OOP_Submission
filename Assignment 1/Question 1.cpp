#include<iostream>
#include<string>
using namespace std;
class Student
{
  private:
  int standard,roll_no;
  string name; 
  public:
  void accept()
 {
    cout<<"Enter student name:";
    cin>>name;
    cout<<"Enter student roll_no:";
    cin>>roll_no;
    cout<<"Enter student class:";
    cin>>standard;
 }
 void display()
 {
     cout<<"Student name:"<<name<<endl;
    cout<<"Student roll_no:"<<roll_no<<endl;
     cout<<"Student class:"<<standard<<endl;
 }
};
int main()
{
    Student s1;
    s1.accept();
    s1.display();
    return 0;
}
