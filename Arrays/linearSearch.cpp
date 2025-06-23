#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1; // returns -1 after checking all for else condition it will return -1 when it checks first element and it not found match
};

int main()
{
    int arr[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << linearSearch(arr, n, 10);

    return 0;
}