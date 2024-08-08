#include <iostream>
using namespace std;

int main() {       
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    int a = 1; 
    int b = 1; 

    for (int i = 2; i < n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }

    cout << b << endl;
    return 0;
}
