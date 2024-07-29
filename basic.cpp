#include <iostream>
using namespace std;
int main()
{
    // size of array
    int arr[7] = {12, 13, 10, 7, 30, 95, 28};
    cout << sizeof(arr) << endl; // each element contain 4 byts

    // how many element in array arr[0]= 4byts
    int arrr[] = {12, 13, 10, 7, 30, 95, 28};
    cout << "elemnts in array " << sizeof(arrr) / sizeof(arrr[0]) << endl;

    // sizeof is in-built function
}