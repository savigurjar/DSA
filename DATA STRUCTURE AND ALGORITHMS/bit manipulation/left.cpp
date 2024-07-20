#include <iostream>
using namespace std;
// get bit operation and=&
/*int main()
{
    int n;
    cin>>n;
    int position;
    cin>>position;
    int bitmask = 1<<position;
    if((bitmask & n)==0)
    {
        cout<<"bit was zero";
    }
    else
    {
        cout<<"bit was non zero";
    }
    return 0;
}*/

// set bit operation or |
/*int main()
{
int n;
cin>>n;
int pos;
cin>>pos;
int bitmask = 1<<pos;
int newMumber = bitmask | n;
cout<<"new number is "<<newMumber<<endl;
return 0;
}*/

// clear bit (and with not)operation
/*int main()
{
int n,pos;
cin>>n>>pos;
int bitmask = 1<<pos;
int notbitmask = ~(bitmask);
int newnumber = notbitmask & n;
cout<<"new number is "<<newnumber<<endl;
return 0;
}*/

// update bit
//  case 1 and with not
// case 0 or
int main()
{
    int n, pos;
    cin >> n >> pos;
    int operation; // if 1 update 1 else 0 update 0
    cin >> operation;
    if (operation < 0 && operation > 1)
    {
        return -1;
    }

    if (operation == 1)
    {
        int bitmask = 1 << pos;
        int newnumber = bitmask | n;
        cout << "number is update by " << newnumber << endl;
    }

    else
    {
        int bitmask = 1 << pos;
        int newbitmask = ~(bitmask);
        int newnumber = newbitmask & n;
        cout << "number is update by " << newnumber << endl;
    }

}

