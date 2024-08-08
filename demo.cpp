#include<iostream>

using namespace std;

int main(){
    int age;
    cin>>age;
    if (age>=18)
    {
        cout<<"You are eligible to vote"<<endl;
    }
    else
    {
        cout<<"you are not eligible to vote"<<endl;
    }
    
    cout << "your age is: " << age;
}