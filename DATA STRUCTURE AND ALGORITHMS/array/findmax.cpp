#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
// int findMax(int arr[], int n)
// {
//     if (n <= 0)
//     {
//         return -1;
//     }
//     int max = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     cout << "max is " << max;
// }
// int main()
// {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     findMax(arr, n);
//     return 0;
// }

// using vector 
// int findMax(const vector<int>&arr)
// {
//     if(arr.size()<=0)
//     {
//         return -1;
//     }
//     int max = arr[0];
//     for(int i=0;i<arr.size();i++)
//     {
//         if(arr[i]>max)
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> arr(n) ; 
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int max = findMax(arr);
//     cout<<"max is "<<max<<endl;
//     return 0;
   
// }

class Solution
{
    public:
    int findLargest(const vector<int>&arr,int n)
    {
        int largest = arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>largest)
            {
                largest = arr[i];
            }
        }
        cout<<"max is"<<largest<<endl;
    }
};