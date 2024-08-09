#include<iostream>
using namespace std;
//! pattern 2
// Input Format: N = 3
// Result: 
// * 
// * * 
// * * *

// Input Format: N = 6
// Result:
// * 
// * * 
// * * *
// * * * *
// * * * * *
// * * * * * *
// void pattern2(int n)
// {
//     for (int i = 1; i <= n; i++)  
//     {
//         for (int j = 1; j <= i; j++)  
//         {
//             cout << "*";
//         }
//         cout << endl;  
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     pattern2(n);
//     return 0;
// }

//! pattern 3
// Input Format: N = 3
// Result: 
// 1
// 1 2 
// 1 2 3

// Input Format: N = 6
// Result:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
// void pattern3(int n )
// {
//     for(int i=1; i<n; i++)
//     {
//         for (int j=1; j<=i; j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     pattern3(n);
//     return 0;
// }

//!pattern 4
void pattern4(int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pattern4(n);
    return 0;
}

