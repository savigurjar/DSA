#include <iostream>
#include <vector>
using namespace std;
int secondlarge(int n, const vector<int>&arr)
{
    int largest  = INT16_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    
    int secondLarge = INT16_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=largest)
        {
            secondLarge = max(secondLarge,arr[i]);
        }
    }
    return secondLarge;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<secondlarge(n,arr)<<endl;
    return  0;
}