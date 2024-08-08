#include<iostream>

using namespace std;

// void sum(int num1, int num2){
//     int num3 = num1 + num2;
//     cout<< num3;
// }
// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//         sum(num1,num2);
//     return 0;
// }

//! pass by value
// void doSomthing(int num){
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;

// }
// int main(){
//     int num = 10;
//     doSomthing(num);
//     cout<<num<<endl;
//     return 0;
// }

//! pass by reference (&)
void doSomthing(int &num){
    cout<<num<<endl;
    num += 5;
    cout<<num<<endl;
    num += 5;
    cout<<num<<endl;

}
int main(){
    int num = 10;
    doSomthing(num);
    cout<<num<<endl;
    return 0;
}