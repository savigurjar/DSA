#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void rotateArray(int n, vector<int>& arr)
{
  int last = arr[n-1];
  for(int i=n-2;i>=0;i--)
  {
    arr[i+1] = arr[i];
  }
  arr[0] = last;
}
int main()
{
    int n;
    cin>>n;
    vector <int> arr(1000000);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotateArray(n,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}