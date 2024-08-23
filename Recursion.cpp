#include<iostream>
using namespace std;

//! Recursion

//! Print Name N times using Recursion
// void func(int i,int n)
// {
//     // Base condition
//     if(i>n)
//     return;
//     cout<<"Jaggu"<<endl;
//     func(i+1,n);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     func(1,n);
//     return 0;
// }

//! Print 1 to N using Recursion
void func(int i, int n)
{
    // Base condition
    if(i>n)
    return;
    cout<<i<<endl;
    func(i+1,n);
}
int main()
{
    int n;
    cin>>n;
    func(1,n);
    return 0;
}