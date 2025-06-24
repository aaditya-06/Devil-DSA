#include <iostream>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void extraSpaceReverse(int *arr, int n)
{
    int copyarr[n];
    for (int i = 0; i < n; i++)
    {
        copyarr[i] = arr[n - i - 1];
    }

    print(copyarr, n);
}


void inPlaceSwapReverse(int *arr, int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    print(arr, n);
}

int main()
{
    int arr1[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    int arr2[8] = {2, 4, 6, 8, 10, 12, 14, 16};

    cout << "Reverse using extra space: ";
    extraSpaceReverse(arr1, 8);

    cout << "Reverse using in-place swap: ";
    inPlaceSwapReverse(arr2, 8);

    return 0;
}
