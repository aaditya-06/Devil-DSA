#include <iostream>
using namespace std;

void SelectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int minValue = arr[minIndex];
        for (int k = minIndex; k > i; k--)
        {
            arr[k] = arr[k - 1];
        }
        arr[i] = minValue;
    }
}

int main()
{

    int arr[8] = {5, 6, 2, 9, 20, 3, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}