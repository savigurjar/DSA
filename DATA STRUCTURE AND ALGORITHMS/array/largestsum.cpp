#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//kadane algo when elemnt in minus then vo element ko zero kr do
// bool largestSum(vector<int> arr)
// {
//     int maxi = INT16_MIN;
//     int n = arr.size();

//     for (int i = 0; i < n; i++)
//     {
//         int prefix = 0;
//         for (int j = 0; j < n - 1; j++)
//         {
//             prefix += arr[i];
//             maxi = max(maxi, prefix);
//         }
//     }
//     return maxi;
// }
 int largestSum(vector<int>arr)
 {
  int maxi = INT16_MIN;
  int n=arr.size();
  int prefix =0;
  for(int i=0;i<n;i++)
  {
    prefix += arr[i];
    maxi = max(maxi,prefix);
    if(prefix<0)
    {
        prefix = 0;
        break;
    }

  } 
  cout<<"max of subarray "<<maxi<<endl;}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << largestSum(v);
}