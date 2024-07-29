#include <iostream>
#include <vector>
using namespace std;
// create an array of char types and store 'a' to 'z' in it. Then print the element of the arrays
int main()
{
    const int size = 26;

    char arr[size];
    cout << " chracter a to z : ";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 'a' + i;
    }

    for(int i = 0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}