#include<iostream>
using namespace std;
int printSum(int n)
{
  if(n<=1) return n;
       
       return n +printSum(n-1);
    
}
int main()
{
    int n;
    cin>>n;
   cout<< printSum(n);
    return 0;
}