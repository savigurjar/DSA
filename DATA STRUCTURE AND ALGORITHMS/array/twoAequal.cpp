#include <iostream>
using namespace std;

bool arraysEqual(int arr1[], int arr2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the size of arrays: ";
    cin >> n;

    int arr1[100];  // Assuming a maximum size for simplicity
    int arr2[100];  // Assuming a maximum size for simplicity

    cout << "Enter elements for array 1:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter elements for array 2:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    if (arraysEqual(arr1, arr2, n))
    {
        cout << "Arrays are equal." << endl;
    }
    else
    {
        cout << "Arrays are not equal." << endl;
    }

    return 0;
}
