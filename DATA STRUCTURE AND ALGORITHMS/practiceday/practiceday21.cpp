#include <iostream>
#include <math.h>
using namespace std;
int findLcm(int n, int m)
{
    int Lcm = (n>m)?n:m;
  
   while(true)
    {
        if ( Lcm%n == 0 &&  Lcm%m  == 0)
        {
           
            break;
        }
        Lcm++;
    }
    cout << "LCM IS " << Lcm << endl;
}
int main()
{
    int n, m;
    cin >> n >> m;
    findLcm(n, m);
}