#include <iostream>
using namespace std;

int main() {
    int n, t = 0, m;
    cin >> n;
    m = n;
    while (m > 0) {
        t = t * 10 + m % 10;
        m /= 10;
    }
    if (t == n)
        cout << "Palindrom";
    else
        cout << "Deyil";
}
