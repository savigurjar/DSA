#include <iostream>
using namespace std;
int findHcf(int n, int m)
{
    int min = 0;
    if (n > m)
    {
        min = n;
    }
    else
    {
        min = m;
    }
    int HCF = 0;
    for (int i = min; i >= 1; i--)
    {
        if (n % i == 0 && m % i == 0)
        {
            HCF= i;
            break;
           
        }
    }
    cout<<"hcf is"<< HCF;
}
int main()
{
    int n, m;
    cin >> n >> m;
    findHcf(n,m);
  
}