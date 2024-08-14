#include <iostream>
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

//! pattern 4
// Input Format: N = 3
// Result:
// * * *
// * *
// *
// void pattern4(int n)
// {
//     for(int i=1;i<n;i++)
//     {
//         for(int j=n;j>i;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     pattern4(n);
//     return 0;
// }

//! pattern 5

// Input Format: N = 3
// Result:
// 1 2 3
// 1 2
// 1

// void pattern5(int n )
// {
//     for(int i=0; i<n; i++)
//     {
//         for(int j=n; j>i; j--){
//             cout<<n-j+1<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     pattern5(n);
//     return 0;
// }

//! pattern 6
// Input Format: N = 6
// Result:
//      *
//     ***
//    *****
//   *******
//  *********
// ***********

// void pattern6(int n)
// {
//     //outer for
//     for(int i=0; i<n; i++)
//     {
//         //space
//         for(int j=0;j<n-i-1;j++)
//         {
//             cout<<" ";
//         }
//         //star
//         for(int j=0; j<2*i+1; j++)
//         {
//             cout<<"*";
//         }
//         //space
//         for(int j=0; j<n-i-1; j++)
//         {
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     pattern6(n);
//     return 0;
// }

//! pattern 7
// Input Format: N = 6
// Result:
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

// void pattern7(int N)
// {
//     for (int i = 0; i < N; i++)
//     {
//         for (int j =0; j<i; j++)
//         {
//             cout <<" ";
//         }
//         for(int j=0;j< 2*N -(2*i +1);j++){

//             cout<<"*";
//         }
//          for (int j =0; j<i; j++)
//         {
//             cout <<" ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int N;
//     cin>>N;
//     pattern7(N);
//     return 0;
// }

//! pattern 8
// Input Format: N = 6
// Result:
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
// for this combine the pattern 6 and pattern 7

// int main()
// {
//     int N;
//     cin>>N;
//     pattern6(N);
//     pattern7(N);
//     return 0;
// }

// ! pattern 9
// Input Format: N = 6
// Result:
//      *
//      **
//      ***
//      ****
//      *****
//      ******
//      *****
//      ****
//      ***
//      **
//      *

// void pattern9(int n)
// {
//     for(int i=1; i<2*n-1; i++)
//     {
//         int stars = i;
//         if(i>n)
//         {
//             stars = 2*n-i;
//         }
//         for(int j=1; j<=stars; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     pattern9(n);
//     return 0;
// }

// ! pattern 10

// void pattern10(int n)
// {
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     pattern10(n);
//     return 0;
// }

//! pattern 11
// Input Format: N = 6
// Result:
// 1
// 01
// 101
// 0101
// 10101
// 010101

// void pattern11(int n)
// {
//     int start = 1;
//     for(int i=0; i<n; i++)
//     {
//         if(i%2 == 0)
//         start = 1;
//         else
//         start = 0;
//         for(int j=0; j<=i; j++)
//         {
//             cout<<start;
//             start=1-start;
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     pattern11(n);
//     return 0;
// }

//! pattern 12
// Input Format: N = 3
// Result:
// 1    1
// 12  21
// 123321

// void pattern12(int n)
// {
//     int space = 2*(n-1);
//     for(int i=1; i<=n; i++)
//     {
//         // no.
//         for(int j=1; j<=i; j++)
//         {
//             cout<<j;
//         }
//         // space
//         for(int j=1; j<=space; j++)
//         {
//         cout<<" ";
//         }
//         // no.
//         for(int j=i; j>=1; j--)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//         space -= 2;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     pattern12(n);
//     return 0;
// }

//! pattern 13
// Input Format: N = 3
// Result:
// 1
// 2 3
// 4 5 6

// void pattern13(int n)
// {
//     int inc = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << inc;
//             inc = inc + 1;
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     pattern13(n);
//     return 0;
// }

//! pattern 14
// Input Format: N = 6
// Result:   
// A
// A B
// A B C
// A B C D
// A B C D E
// A B C D E F


// void pattern14(int N)
// {
//       for(int i=0;i<N;i++){
//           for(char ch = 'A'; ch<='A'+i;ch++){
//               cout<<ch<<" "; 
//           }
//           cout<<endl;      
//       }
// }

// int main()
// {   
//     int N;
//     pattern14(N);
//     cin>>N;
//     return 0;
// }

//! pattern15
// Input Format: N = 6
// Result:   
// A B C D E F
// A B C D E 
// A B C D
// A B C
// A B
// A

// void pattern15(int n)
// {
//     for(int i=0; i<n; i++)
//     {   
//         for(char ch='A'; ch<='A'+(n-i-1); ch++)
//         {
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     pattern15(n);
//     return 0;
// }

//! pattern 16
// Input Format: N = 6
// Result:   
// A 
// B B
// C C C
// D D D D
// E E E E E
// F F F F F F

// void pattern16(int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         char ch = 'A' + i;
//         for(int j=0; j<=i; j++)
//         {
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     pattern16(n);
//     return 0;
// }

//! pattern 17

// Input Format: N = 6
// Result:   
//      A     
//     ABA    
//    ABCBA   
//   ABCDCBA  
//  ABCDEDCBA 
// ABCDEFEDCBA

// void pattern17(int N)
// {
//      for(int i=0;i<N;i++){
          
//           // for printing the spaces.
//           for(int j=0;j<N-i-1;j++){
//               cout<<" ";
//           }
          
//           // for printing the characters.
//           char ch = 'A';
//           int breakpoint = (2*i+1)/2;
//           for(int j=1;j<=2*i+1;j++){
//               cout<<ch;
//               if(j <= breakpoint) 
//               ch++;
//               else ch--;
//           }
          
//           // for printing the spaces again after characters.
//           for(int j=0;j<N-i-1;j++){
//               cout<<" ";
//           }
//           cout<<endl;
          
//       }
// }
// int main()
// {
//     int N;
//     cin>>N;
//     pattern17(N);
//     return 0;
// }

//! pattern 18
// Input Format: N = 6
// Result:   
// F
// E F
// D E F
// C D E F
// B C D E F
// A B C D E F

// void pattern18(int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         for(char ch='A'+(n-i-1); ch<='A'+(n-1); ch++)
//         {
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     pattern18(n);
//     return 0;
// }

// ! pattern 19
// Input Format: N = 3
// Result: 
// ******
// **  **
// *    *
// *    *
// **  **
// ******

// Input Format: N = 6
// Result:   
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************

// void pattern19(int n)
// {
//     int space = 0;
    
//     // First half
//     for(int i = 0; i < n; i++)
//     {
//         // Left stars
//         for(int j = 0; j < n - i; j++)
//         {
//             cout << "*";
//         }
        
//         // Middle spaces
//         for(int j = 0; j < space; j++)
//         {
//             cout << " ";
//         }
        
//         // Right stars
//         for(int j = 0; j < n - i; j++)
//         {
//             cout << "*";
//         }
        
//         space += 2;  // Increase spaces
//         cout << endl;
//     }
    
//     space = 2 * n - 2;
    
//     // Second half
//     for(int i = 0; i < n; i++)
//     {
//         // Left stars
//         for(int j = 0; j <= i; j++)
//         {
//             cout << "*";
//         }
        
//         // Middle spaces
//         for(int j = 0; j < space; j++)
//         {
//             cout << " ";
//         }
        
//         // Right stars
//         for(int j = 0; j <= i; j++)
//         {
//             cout << "*";
//         }
        
//         space -= 2;  // Decrease spaces
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     pattern19(n);
//     return 0;
// }

// ! pattern 20 
// Input Format: N = 6
// Result:   
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *

void pattern20(int n)
{
    int space = 2*n-2;
    for(int i=1; i<=2*n-1; i++)
    {
        int star = i;
        if(i>n)
        star = 2*n-i;
        // stars
        for(int j=1; j<=star; j++)
        {
            cout<<"*";
        }
        // space
        for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }
        // star
        for(int j=1; j<=star; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if(i<n)
        space-=2;
        else
        space+=2;
    }
}
int main()
{
    int n;
    cin>>n;
    pattern20(n);
    return 0;
}