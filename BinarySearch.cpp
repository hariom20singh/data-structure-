#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    // implement binary search
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] >= key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 89};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cin >> key;

    int index = binary_search(arr, n, key);
    if (index != -1)
    {
        cout << key << " is found at " << index << endl;
    }
    else
    {
        cout << key << " is not found!" << endl;
    }
    return 0;
}
