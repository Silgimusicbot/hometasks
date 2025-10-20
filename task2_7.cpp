#include <iostream>
using namespace std;

int main() {
    float a, b;
    char c;
    cin >> a >> c >> b; 
    switch(c) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl; 
            break;
    }
}


int main() {
    float a, b;
    char c;
    cin >> a >> c >> b;
    if (c == '+')
        cout << a + b << endl;
    else if (c == '-')
        cout << a - b << endl;
    else if (c == '*')
        cout << a * b << endl;
    else if (c == '/')
        cout << a / b << endl;
}

