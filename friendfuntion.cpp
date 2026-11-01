#include <iostream>
using namespace std;

class A
{
    int x = 10;

public:
    friend void show(A obj);
};

void show(A obj)
{
    cout << obj.x;
}

int main()
{
    A obj;
    show(obj);
    return 0;
}