#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int sumSubarray(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int sum1 = 0, sum2 = 0;
//         for (int j = 0; j <= i; j++) {
//             sum1 += arr[j];
//         }
//         for (int j = i + 1; j < n; j++) {
//             sum2 += arr[j];
//         }
//         if (sum1 == sum2) {
//             cout << "Both sums of subarrays are equal: " << sum1 << " " << sum2 << endl;
//             return 1;
//         }
//     }
//     return 0; // No equal sum subarrays found
// }

// int sumSubarray(int arr[],int n)
// {
//     int totalsum = 0;
//     for(int i=0;i<n;i++)
//     {
//         totalsum += arr[i];
//         int prefix = 0;
//         for(int i=0;i<n-1;i++)
//         {
//             prefix += arr[i];
//             int ans = totalsum-prefix;
//             if(ans==prefix)
//             {
//                 cout<<"subarray are equal "<<prefix<<" "<<ans<<endl;
//                 break;
//             }
//         }
//     }
//     return -1;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//      sumSubarray(arr, n);
    
//     return 0;
// }

bool divide(vector<int>arr)
{
    int prefix=0,total_sum=0 ,n=arr.size();
    for(int i=0;i<n;i++)
    
        total_sum+=arr[i];
        for(int i=0;i<n-1;i++)
        {
            prefix+=arr[i];
            // int ans = total_sum-prefix;
            // if(ans==prefix)
            if(total_sum==2*prefix)
            return 1;
        }
    
    return 0;
   
}
int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter element in array: ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<divide(v);
}