#include <iostream>
using namespace std;

class Addition
{
public:
    void sum(int a, int b)
    {
        cout << "Sum = " << a + b << endl;
    }

    void sum(int a, int b, int c)
    {
        cout << "Sum = " << a + b + c << endl;
    }
};

int main()
{
    Addition obj;
    obj.sum(10, 20);
    obj.sum(10, 20, 30);
    return 0;
}