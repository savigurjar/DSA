#include<iostream>
#include<vector>
using namespace std;
int bubbleSort(int n, vector<int>& arr)
{
    for(int i=n-2;i>=0;i--)
    {
        bool swapped = 0;
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = 1;
            }
        }
        if(swapped==0)
        {
            break;
        }
    }
}
int main()
{
    int n;
    cout<<"enter size ";
    cin>>n;
    vector<int>arr(100000);
    cout<<"enter size of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(n,arr);
    cout<<"sorted array ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   
    return 0;
}