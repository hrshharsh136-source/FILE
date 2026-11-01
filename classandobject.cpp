#include <iostream>
using namespace std;

class Student
{
public:
    void display()
    {
        cout << "Hello Student";
    }
};

int main()
{
    Student s;
    s.display();
    return 0;
}