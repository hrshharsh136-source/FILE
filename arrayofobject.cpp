#include <iostream>
using namespace std;

class A
{
public:
    int x;
};

int main()
{
    A obj[2];
    obj[0].x = 10;
    obj[1].x = 20;

    cout << obj[0].x << endl;
    cout << obj[1].x;

    return 0;
}