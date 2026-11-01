#include <iostream>
using namespace std;

class A
{
public:
    static void show()
    {
        cout << "Hello";
    }
};

int main()
{
    A::show();
    return 0;
}