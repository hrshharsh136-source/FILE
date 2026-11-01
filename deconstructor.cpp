#include <iostream>
using namespace std;

class Student
{
public:
    ~Student()
    {
        cout << "Destructor called";
    }
};

int main()
{
    Student s1;
    return 0;
}