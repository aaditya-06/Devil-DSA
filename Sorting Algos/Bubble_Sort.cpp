#include <iostream>
using namespace std;

int main()
{

    int arr[7] = {5, 2, 9, 1, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Improved

    for (int i = 0; i < n - 1; i++)
    {
        //
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}