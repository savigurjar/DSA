#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

// 0 1 = 0+1 = 1 , 1+1 =2 
// 0 1 1 2 3 5 8
int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;

    //first = 0
    //second = 1

    int arr[10000];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }

    cout<<"fibonacci number at "<<n<<" is "<<arr[n-1]<<" ";
    return 0;
}