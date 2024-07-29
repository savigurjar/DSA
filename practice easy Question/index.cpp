#include<iostream>
#include<vector>
using namespace std;
//find the index of a specific element in an array ,if the element is nor present ,print -1.Ask the size of the array from the user and then implement it
int main()
{
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int element;
    cout<<"enter element you want to find : ";
    cin>>element;

    int index = -1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            index = i;
            break;
        }
       
    }

    cout<<"element found at index : "<<index<<endl;

    return 0;

}