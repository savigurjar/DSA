#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sumofnonPrime(int arr[], int n)
{   
    int sum = 0;
    int j;
    
    for (int i = 0; i < n; i++)
    {

        for ( j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0 )
            {
              sum = sum+arr[i];
               break;
               
            }

        }
        // if(j==arr[i])
        // {
        //     sum = sum+arr[i];
        // }
      
    }
     
    cout << "sum of array " << sum << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sumofnonPrime(arr, n);
    return 0;
}