#include <iostream>
#include <vector>
using namespace std;
int findMin(const vector<int> &arr)
{
    int min = INT16_MAX;
    int n = arr.size();
    if (n < 0)
    {
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "minimum element in array " << min << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    findMin(arr);
    return 0;
}