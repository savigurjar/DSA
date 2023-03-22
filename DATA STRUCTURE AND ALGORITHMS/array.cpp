#include<iostream>
using namespace std;
// #include<stdio.h>
int main(){
    // int A[]={2,4,6,8,10,12};
    // cout<<sizeof(A)<<endl;
    // cout<<A[1]<<endl;
    // printf("%d\n",A[2]);

// int A[10]={1,2,3,4,5,6,7,8,9,10};
// // for(int i=0; i<10 ;i++){
// //     cout<<A[i]<<endl;  
// // }
// for(int x:A){
//     cout<<x<<endl;
// }

 int n;
 cout<<"enter size";
 cin>>n;
 int A[n]={1,2,4,5,7};
 A[0]=2;
 for(int x:A){
    cout<<x<<endl;
 }
    return 0;
}