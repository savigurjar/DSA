#include<iostream>
using namespace std;
int main()
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
}