#include <iostream>
using namespace std;

class A
{
public:
    void show(int x)
    {
        cout << x << endl;
    }

    void show(double x)
    {
        cout << x;
    }
};

int main()
{
    A obj;
    obj.show(5);
    obj.show(2.5);
    return 0;
}