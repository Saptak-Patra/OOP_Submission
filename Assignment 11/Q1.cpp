#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> v(10);
    for(char i='a';i<='i';i++)
    {
        v.push_back(i);
    }
    cout<<"Using iterator to access vector elements: "<<endl;
    for(char i : v)
    {
        cout<<i<<" ";
    }
}
