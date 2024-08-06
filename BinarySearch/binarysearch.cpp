#include<iostream>
#include<vector>
using namespace std;
int binarySearch(int n, vector<int>& arr ,int key)
{
int start = 0;
int end = n-1;



  while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;  // Return the index of the found element
        }
        else if (arr[mid] > key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

return -1; //if element is not present
}
int main()
{
    int n;
    cout<<"enter size of array ";
    cin>>n;

    vector<int>arr(10000);
    cout<<"enter elements in array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"enter key you want to find ";
    cin>>key;

    int result = binarySearch(n,arr,key);

    if(result != -1)
    {
        cout<<"key found at index "<<result<<endl;
    }
    else 
    {
        cout<<"element is not found ";
    }
    
    return 0;
}