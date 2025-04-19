#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i; // Element found, return index
        }
    }
    return -1; // Element not found
}

int main()
{
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> key;

    int result = linearSearch(arr, n, key);

    if (result != -1)
    {
        cout << "Element found at index " << result << ".\n";
    }
    else
    {
        cout << "Element not found in the array.\n";
    }

    return 0;
}
