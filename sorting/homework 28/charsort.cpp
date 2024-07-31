//selection sort algorithm to sort the array of char in ascending
#include<iostream>
#include<vector>
using namespace std;
void ascendingOrder(int n, vector<char>& arr)
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

    vector<char>arr(26);
    cout<<"enter character in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ascendingOrder(n,arr);
    cout<<"sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}