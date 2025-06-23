#include <iostream>
using namespace std;

int main()
{

    int x;
    int *ptr;

    x = 7;

    ptr = &x;
    cout << *ptr;

    int a = 5;
    int* pointer = &a;
    cout << pointer;   // 0x0...

    return 0;
}