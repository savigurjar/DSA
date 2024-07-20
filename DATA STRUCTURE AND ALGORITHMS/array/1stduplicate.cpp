#include <iostream>
#include <vector>
using namespace std;
int findFirstDuplicate(const vector<int>&arr)
{
    int n = arr.size();
    if(n<=0)
    {
        return -1;
    }
    int dup = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==dup)
        {
            dup = arr[i];
        }
    }
    cout<<"first duplicate element in array "<<dup<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    findFirstDuplicate(arr);
    return 0;
}