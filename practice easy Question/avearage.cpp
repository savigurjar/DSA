// calculate the average of elements in an array of size 18
//  Iterate each element of an array using a loop.
//  Sum up each element of the array till we reach the end of the array.
//  Divide the sum by the total number of elements and return the average.
#include <iostream>
using namespace std;
int main()
{
    int arr[18], i, sum = 0;
    float average;
    // int n = sizeof(arr)/sizeof(arr[0]); //how many elements in array
    cout << "enter elements of array : ";
    for (i = 0; i < 18; i++)
    {
        cin >> arr[i];
    }

    // sum of array
    for (int i = 0; i < 18; i++)
    {
        sum += arr[i];
    }

    average = sum / 18.0;

    cout << "sum of array : " << sum << endl;
    cout << "average of array : " << average << endl;

    return 0;
}