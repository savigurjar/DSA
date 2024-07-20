#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//max diffrence b/w two element
int maxDiffrence(vector<int>arr)
{
    int ans = INT16_MIN,prefix=0;
    int n = arr.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            prefix += arr[i];
            ans = max(ans,arr[j]-arr[i]);
        }
    }
    cout<< ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    maxDiffrence(v);

}