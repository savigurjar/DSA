#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int searchElement(int arr[],int n)
{
int key = 0;
cin>>key;
for(int i=0;i<n;i++)
{
    if(key==arr[i])
    {
        cout<<"at index "<<i<<" ";
    }
    
}
return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    searchElement(arr,n);
    return 0;
    
}