#include <iostream>
using namespace std;

class A
{
public:
    int x;

    void show(A obj)
    {
        cout << obj.x;
    }
};

int main()
{
    A a, b;
    a.x = 10;
    b.show(a);
    return 0;
}