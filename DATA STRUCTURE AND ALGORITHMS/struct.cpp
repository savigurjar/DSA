#include <stdio.h>
#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
    char x;
};
// struct Rectangle r1,r2,r3;

int main()
{
    struct Rectangle r1 = {10, 5};
    r1.length=25;
    r1.breadth=7;
    // printf("%d", sizeof(r1));
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    return 0;
}