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
// void func(int i, int n)
// {
//     // Base condition
//     if(i>n)
//     return;
//     cout<<i<<endl;
//     func(i+1,n);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     func(1,n);
//     return 0;
// }

// ! Print N to 1 using Recursion
// void func(int i, int n)
// {
//     // Base condition
//     if(i<1)
//     return;
//     cout<<i<<endl;
//     func(i-1,n);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     func(n,n);
//     return 0;
// }

// ! Print 1 to N using Recursion (not using i+1)
// void func(int i, int n)
// {
//     if(i<1)
//     return;
//     func(i-1,n);
//     cout<<i<<endl;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     func(n,n);
//     // return 0;
// }

// ! Print 1 to N using Recursion (not using i+1)
// void func(int i, int n)
// {
//     if(i>n);
//     return;
//     func(i+1,n);
//     cout<<i<<endl;
// }
// int main()
// {
//     int n;
//     int i;
//     cin>>n;
//     func(i,n);  
//     return 0;
// }

// ! sum of n numbers
// parametric
// void func(int i, int sum)
// {
//     if(i<1){
//     cout<<sum<<endl;
//     return;
//     }
//     func(i-1,sum+i); 
// }
// int main()
// {
//     int n;
//     cin>>n;
//     func(n,0);
    // return 0;
// }
// non parametric
// int func(int n)
// {
//     if(n == 0)
//     {
//         return 0;
//     }
//     return n + func(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<func(n);
//     return 0;
// }

