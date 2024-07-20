#include<iostream>
using namespace std;
void printNum(int i,int n)

{
if(i<1) return;
cout<<i<<endl;
printNum(i-1,n);
}
int main()
{
int n;
cin>>n;
printNum(n,n);
}