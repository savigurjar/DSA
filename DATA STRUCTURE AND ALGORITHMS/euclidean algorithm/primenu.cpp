#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
	// Write your code here
int n;
cin>>n;
int cnt=0;
for(int i=1;i<=n;i++)
{
	if(n%i==0)
	{
		cnt++;
	}
}
// return (cnt==2) ? true:false;
if(cnt==2)
{
    cout<<"true";
}
else{cout<<"false";}
}