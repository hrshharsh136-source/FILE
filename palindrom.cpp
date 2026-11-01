#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int i, len, flag = 1;

    cout << "Enter a number1: ";
    cin >> str;

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        cout << "Palindrome hai" << endl;
    else
        cout << "Palindrome nahi hai" << endl;

    return 0;
}