#include<iostream>
#include<math.h>
using namespace std;
int secondLargest(int arr[],int n)
{
    int largest = INT16_MIN;
    int secondlargest = INT16_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else{
            if(arr[i]>secondlargest && arr[i]<largest)
            {
                secondlargest=arr[i];
            }
        }
    }
    cout<<"secondlargest element in array "<<secondlargest<<endl;
}
int main()
{
    // find second largest element 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    secondLargest(arr,n);
    return 0;
}
