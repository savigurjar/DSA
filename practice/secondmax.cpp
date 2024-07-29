#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int secondMax(const vector <int> & arr)
{
int largest = INT16_MIN;
int slargest = INT16_MIN;
for(int i=0;i<arr.size();i++)
{
if(arr[i]>largest)
{
 largest = arr[i];
}
}
for(int i=0;i<arr.size();i++)
{
    if( arr[i] != largest)
    {
        slargest = max(slargest,arr[i]);
    }
}
cout<<" second largest element "<<slargest<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    secondMax(arr);
    return 0;
}