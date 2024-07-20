#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void findUnion(int n,int m,int arr1[],int arr2[])
{
 int i=0,j=0;
 while (i<n && j<m)
 {
    if(arr1[i]>arr2[j])
    {
   cout<<arr2[j++]<<" ";
    }
    else if(arr1[i]<arr2[j])
    {
        cout<<arr1[i++]<<" ";
    }
    else{
        cout<<arr1[i++]<<" ";
        j++;
    }
 }
 while(i<n)
 {
    cout<<arr1[i++]<<" ";
 }
 while(j<m)
{
    cout<<arr2[j++]<<" ";
}
cout<<endl;
}
int main()
{
    int n,m;
     cin>>n>>m;
     int arr1[n],arr2[m];
     for(int i=0;i<n;i++)
     {
        cin>>arr1[i];
     }  
     for(int j=0;j<m;j++)
     {
        cin>>arr2[j];
     }
     findUnion(n,m,arr1,arr2);
     return 0;
}

vector<int> findUnion(int a1[],int a2[],int n,int m)
{
    vector<int> ans;
    int i = 0 , j = 0;
    while(i<n && j< m)
    {
        while(i+1<n && a1[i]==a1[i+1]) a1[i++];
        while(j+1<m && a2[j]==a2[j+1]) a2[j++];
        if(a1[i]<a2[j])
        {
            ans.push_back(a1[i++]);
        }
        else if(a2[j]<a1[i])
        {
            ans.push_back(a2[j++]);
        }
        else{
            ans.push_back(a2[j++]);
            i++;
        }
    }
    while(i<n)
    {
        ans.push_back(a1[i++]);
    }
    while(j<m)
    {
        ans.push_back(a2[j++]);
    }
    return ans;
}
