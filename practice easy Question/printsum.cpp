//take 20 elements from user input and find its sum with the help of an array
#include<iostream>
using namespace std;
int main()
{
    int arr[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int sum = 0;
    for(int i=0;i<20;i++)
    {
        sum += arr[i];
    }
    cout<<"sum of array : "<<sum<<endl;
    return 0;
}