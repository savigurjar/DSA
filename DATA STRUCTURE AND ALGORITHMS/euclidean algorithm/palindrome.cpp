#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rev=0;
    int N=n;
    while(n>0)
    {
        int lastDigit = n%10;
        rev = (rev*10)+lastDigit;
        n = n/10;
    }
    if(N==rev){
        // cout<<N;
    return true;}
    else {return false;}
  
}