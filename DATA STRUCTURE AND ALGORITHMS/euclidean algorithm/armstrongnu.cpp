#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int rev=0;
    int N=n;
    while(n>0)
    {
        int lastDigit = n%10;
        sum=sum+(lastDigit*lastDigit*lastDigit);
        rev = (rev*10)+lastDigit;
        n=n/10;
    }
    if(sum==N)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}*/
bool checkArmstrong(int n)
{
    int sum=0;
    int k=to_string(n).length();
    int N=n;
    while(n>0)
    {
        int ld=n%10;
        sum += pow(k,ld);
        n=n/10;
    }
    return (sum==N) ? true:false;
} 