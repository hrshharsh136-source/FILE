#include <iostream>
using namespace std;

void show(int x)
{
    x = 20;
}

int main()
{
    int a = 10;
    show(a);
    cout << a;
    return 0;
}