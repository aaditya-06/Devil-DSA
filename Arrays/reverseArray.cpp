#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = n; i > 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}