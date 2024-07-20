#include<iostream>
using namespace std;
int count=0;
void printNamee()
{
if(count==7)
return;
cout<<"v"<<count<<endl;
count++;
printNamee();

};
int main()
{
int n;
cin>>n;
printNamee();
}