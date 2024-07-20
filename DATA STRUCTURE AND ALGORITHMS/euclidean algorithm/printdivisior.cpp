#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*void printDv(int n)
{
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    printDv(n);
    return 0;
}*/
int* printDivisior(int n,int &size)
{
    int *divisior = new int[n];
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            divisior[count++]=i;
        }
    }
    size=count;
    return divisior;
}