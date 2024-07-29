// third smalllest element in array
#include <iostream>
#include <vector>
using namespace std;
int thirdSmall(int n, const vector<int> &arr)
{
    int first = INT16_MAX, second = INT16_MAX, third = INT16_MAX;

      for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] < second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] < third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }
    
    return third == INT16_MAX ? -1 : third; // Check if third smallest exists
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
    cout << thirdSmall(n, arr) << endl;
    return 0;
}