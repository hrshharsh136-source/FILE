#include <iostream>
using namespace std;

class Student
{
public:
    int roll = 10;

    void display()
    {
        cout << "roll Number = " << roll;
    }
};

int main()
{
    Student s;
    s.display();
    return 0;
}