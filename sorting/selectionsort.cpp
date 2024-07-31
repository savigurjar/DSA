#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//ascending / increasing order
void selectionSort(int n,vector<int>& arr)
{
    for(int i=0;i<n-1;i++)
    {
        int index = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[index])
            {
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }
}
int main()
{
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int>arr(10000);
    cout<<"enter elements in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionSort(n,arr);
    cout<<"sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}












// The selectionSort function should take a non-const reference to arr since it needs to modify the array.
// The swap function from the C++ standard library should be used.
// The vector arr should be resized to n instead of being pre-allocated with a size of 10000.
// The selectionSort function should return void since it is performing an in-place sort.