#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// reverse
/*int main()
{
    int n;
    cin>>n;
    int rev =0;
    while(n>0)
    {
        int lastd = n%10;
        rev = (rev*10)+lastd;
        n /= 10;
    }
    cout<<"reverse of number "<<rev<<endl;
    return 0;
}*/

// palimdrome
/*int main()
{
    int n;
    cin>>n;
    int rev = 0;
    int N = n;
    while(n>0)
    {
        int lastd = n%10;
        rev = (rev*10)+lastd;
        n /= 10;
    }
    if(rev==N)
    {
        cout<<"reverse is "<<rev<<endl;
    }
    else
    {
        cout<<"does not found"<<endl;
    }
    return 0;
}*/

// number of digits
/*int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    cout<<"number of digits "<<count<<endl;
    return 0;
}*/

// armstrongnumber
/*int main()
{
    int n;
    cin>>n;
    int sum=0;
    int rev = 0;
    int N=n;
    while(n>0)
    {
        int lastd = n%10;
        sum += lastd*lastd*lastd;
        rev = (rev*10)+lastd;
        n = n/10;
    }
    if(sum==N)
    {
        cout<<"number is armstrong"<<endl;
    }
    else cout<<"not armstrong"<<endl;
    return 0;
}*/

// printdivisior
/*int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }

    }
    cout<<"number of division"<<endl;
    return 0;
}*/

// primenumber
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <=n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "number is prime" << endl;
    }
    else
    {
        cout << "not prime" << endl;
    }
    return 0;
}
