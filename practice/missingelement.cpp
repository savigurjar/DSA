#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int missingElement(int n ,const vector<int>&arr)
{
//sum of all element in array
int sum = 0;
for(int i=0;i<n-1;i++)
{
    sum += arr[i];
}

//sum of n number means total all element in array
int ans = n*(n+1)/2;
cout<<"missing element in array is : "<<ans-sum<<endl;

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
    missingElement(n,arr);
}