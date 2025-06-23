#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 45, 32, 99, 23, 78};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];

    // Step 1: Find the largest
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Step 2: Initialize second largest with a value less than max
    int second = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max)
        {
            second = arr[i];
            break;
        }
    }

    // No second largest exists
    if (second == -1)
    {
        cout << "No second largest";
        return 0;
    }

    // Step 3: Find the max less than 'max'
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second && arr[i] < max)
        {
            second = arr[i];
        }
    }

    cout << second;

    return 0;
}
